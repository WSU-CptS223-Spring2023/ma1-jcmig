#include "testQueue.hpp"

#include "testQueue.hpp"

void testSize(queue &q){
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);

	int actualSize = q.size();

	if (actualSize != 3)
	{
		cout << "testSize failed: expected 3 but got " << actualSize << endl;
	} else {
		cout << "testSize succeeded" << endl;
	}
}

void testEmpty(queue &q, bool expectedResult){
	bool actualResult = q.isEmpty();

	if (actualResult != expectedResult) {
		cout << "testEmpty failed: expected " << expectedResult << " but got " << actualResult << endl;
	} else {
		cout << "testEmpty succeeded" << endl;
	}
}

void testFull(queue &q, bool expectedResult){
	bool actualResult = q.isFull();

	if (actualResult != expectedResult) {
		cout << "testFull failed: expected " << expectedResult << " but got " << actualResult << endl;
	} else {
		cout << "testFull succeeded" << endl;
	}
}

// Testing whether dequeue can remove an item from the queue
void testDequeue1(queue &q) {
	// At this point, q should have 1, 2, and 3 stored
	q.dequeue();
	if (q.peek() == 2) {
		cout << "testDequeue1 succeeded" << endl;
	} else {
		cout << "testDequeue1 failed: dequeue did not remove 1 from the queue q." << endl;
	}
}

// Testing whether enqueue can add a new item to the queue
void testEnqueue1(queue &q, int value) {
	q.enqueue(value);
	// At this point, q should only have 3 items stored (2, 3, 4).
	q.dequeue();
	q.dequeue();
	// At this point, q should only have 1 item stored (4).

	if (q.peek() == value) {
		cout << "testEnqueue1 succeeded" << endl;
	} else {
		cout << "testEnqueue1 failed: enqueue did not add " << value << " to queue q." << endl;
	}
}

// Testing whether peek can work as intended
void testPeek1(queue &q) {
	if (q.peek() == 4) {
		cout << "testPeek1 succeeded" << endl;
	} else {
		cout << "testPeek1 failed: Expected peek() to return 4 but got " << q.peek() << " instead." << endl;
	}
}

// No need for a cout statement if failed as the respective functions being tested
// will terminate the program in the event of overflow/underflow

// Testing whether the underflow catch works as intended; For use with an empty queue.
void testDequeue2(queue &q) {
	q.enqueue(5);

	while (!q.isEmpty()) {
		q.dequeue();
	}

	q.dequeue();

}

// Testing whether the overflow catch works as intended
void testEnqueue2(queue &q, int value) {
	for (int i = 0; i < q.size(); ++i) {
		q.enqueue(i);
	}
	q.enqueue(value);

	if (q.peek() == value) {
		cout << "testEnqueue2 succeeded" << endl;
	}
}

// Testing whether the underflow catch works as intended; For use with an empty queue.
void testPeek2(queue &q) {
	while (!q.isEmpty()) {
		q.dequeue();
	}

	q.peek();
	cout << "testPeek2 succeeded" << endl;
}