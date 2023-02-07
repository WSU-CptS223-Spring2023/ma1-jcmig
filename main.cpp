// This code was taken from https://www.techiedelight.com/queue-implementation-cpp/
// The code has been modified from the original to provide opportunities to learn

#include "testQueue.hpp"

// main function
int main()
{
    queue q(5);

    // Test enqueue
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    // Test isFull
    if (q.isFull())
        std::cout << "Queue is full\n";
    else
        std::cout << "Queue is not full\n";

    // Test dequeue
    q.dequeue();
    q.dequeue();
    q.dequeue();

    // Test size
    std::cout << "Size of queue: " << q.size() << '\n';

    // Test peek
    std::cout << "Front element in queue: " << q.peek() << '\n';

    // Test isEmpty
    if (q.isEmpty())
        std::cout << "Queue is empty\n";
    else
        std::cout << "Queue is not empty\n";

    return 0;
}