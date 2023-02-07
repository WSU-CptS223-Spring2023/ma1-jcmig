#include "testQueue.hpp"
// Constructor to initialize queue
queue::queue(int size)
{
	arr = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

// Destructor to free memory allocated to the queue
queue::~queue()
{
	delete[] arr; // you are not required to test this function;
	            // however, are there issues with it?
}

// Utility function to remove front element from the queue
void queue::dequeue()
{
	// check for queue underflow
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Removing " << arr[front] << '\n'; // Added additional '<' to first '<<'

	front = (front + 1) % capacity;
	count--;
}

// Utility function to add an item to the queue
void queue::enqueue(int item)
{
	// check for queue overflow
	if (isFull()) // Function name is supposed to be isFull() instead of isFul()
	{
		cout << "OverFlow\nProgram Terminated\n";
		exit(EXIT_FAILURE);
	}

	cout << "Inserting " << item << '\n';

	rear = (rear + 1) % capacity;
	arr[rear] = item; // Corrected from size() to item
	count++;
}

// Utility function to return front element in the queue
int queue::peek()
{
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		system("pause");
		exit(EXIT_FAILURE);
	}
	return arr[rear]; // Corrected from return arr[rear] to return arr[front]
}

// Utility function to return the size of the queue
int queue::size()
{
	return count; // Changed from return count + 1 to count
}

// Utility function to check if the queue is empty or not
bool queue::isEmpty()
{
	return (count == 0); // Changed from size() == 0 to count == 0
}

// Utility function to check if the queue is full or not
bool queue::isFull()
{
	return (count == capacity); // Changed from '=' to '=='; Changed from size()-1 == capacity to count == capacity;
}