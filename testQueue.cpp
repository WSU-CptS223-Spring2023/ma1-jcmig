#include "testQueue.hpp"

#include "testQueue.hpp"

/*	Test ID: Queue size check - QSC
	Unit: queue::size()
	Description: Test to determine if queue::size() returns the appropriate value
	Test steps:
		1. Construct an empty queue object
		2. Using queue::enqueue(), store 3 items in the queue
		3. Invoke q.size()
		4. Conditionally evaluate the value returned by queue::size()
	Test data: size = 0
	Precondition: queue object is empty
	Postcondition: count variable of queue must be 3
	Expected result: queue size is 3
	Actual result: queue size is 3
*/
void testSize(){
	queue q;
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

/*	Test ID: Empty queue check - EQC1
	Unit: queue::isEmpty()
	Description: Test to determine if queue::isEmpty() returns true if a queue object is empty
	Test steps:
		1. Construct an empty queue object
		2. Invoke q.size()
		3. Conditionally evaluate the value returned by queue::isEmpty()
	Test data: size = 0
	Precondition: queue object is empty
	Postcondition: queue object must still be empty
	Expected result: queue size is 0
	Actual result: queue size is 0
*/	
void testEmpty(){
	queue q;

	bool actualResult = q.isEmpty();

	if (actualResult != true) {
		cout << "testEmpty failed: expected true but got false instead" << endl;
	} else {
		cout << "testEmpty succeeded" << endl;
	}
}

/*	Test ID: Full queue check - FQC
	Unit: queue::isFull()
	Description: Test to determine if queue::isFull() returns true if a queue object is full
	Test steps:
		1. Construct an empty queue object of size 3
		2. 
		2. Invoke q.isFull()
		3. Conditionally evaluate the value returned by queue::iseEmpty()
	Test data: size = 0
	Precondition: queue object is empty
	Postcondition: count variable of queue must be 3
	Expected result: queue size is 3
	Actual result: queue size is 3
*/	
void testFull(){
	queue q(3);

	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);

	if (q.isFull()) {
		cout << "testFull succeeded" << endl;
	} else {
		cout << "testFull failed: expected true but got false" << endl;
	}
}

/*	Test ID: Dequeue Queue Check - DQC
	Unit: queue::dequeue()
	Description: Test to determine if queue::dequeue() removes the correct item from the queue
	Test steps:
		1. Construct an empty queue object
		2. Invoke queue::enqueue(1) to store an item into the queue
		3. Invoke queue::dequeue() to remove the previously stored item from the queue
		4. Conditionally evaluate the value returned by queue::isEmpty()
	Test data: size = 0
	Precondition: queue object is empty
	Postcondition: queue object is empty
	Expected result: queue object is empty
	Actual result: queue object is empty
*/	
void testDequeue1() {
	queue q;
	q.enqueue(1);
	q.dequeue();

	if (q.isEmpty()) {
		cout << "testDequeue1 succeeded" << endl;
	} else {
		cout << "testDequeue1 failed: dequeue did not remove 1 from the queue q." << endl;
	}
}

/*	Test ID: Enqueue Queue Check - EQC2
	Unit: queue::enqueue()
	Description: Test to determine if queue::enqueue() is able to properly store a value into the queue
	Test steps:
		1. Construct an empty queue object
		2. Invoke q.enqueue(1) to store an item in the queue q.
		3. Conditionally evaluate the value stored in the queue by queue::enqueue() using queue::peek()
	Test data: size = 0
	Precondition: queue object is empty
	Postcondition: queue::enqueue must have stored 1 into the queue
	Expected result: queue::peek() returns 1
	Actual result: queue::peek() returns 1
*/	
void testEnqueue1() {
	queue q;
	q.enqueue(1);

	if (q.peek() == 1) {
		cout << "testEnqueue1 succeeded" << endl;
	} else {
		cout << "testEnqueue1 failed: enqueue did not add 1 to queue q." << endl;
	}
}

/*	Test ID: Peek queue check - PQC
	Unit: queue::peek()
	Description: Test to determine if queue::peek() returns the appropriate value when invoked
	Test steps:
		1. Construct an empty queue object
		2. Invoke q.enqueue(1) to store an item in the queue
		3. Conditionally evaluate the value returned by queue::peek()
	Test data: size = 0
	Precondition: queue object is empty
	Postcondition: top item in the queue must be 1
	Expected result: q.peek() returns 1
	Actual result: q.peek() returns 1
*/	
void testPeek1() {
	queue q;
	q.enqueue(1);
	if (q.peek() == 1) {
		cout << "testPeek1 succeeded" << endl;
	} else {
		cout << "testPeek1 failed: Expected peek() to return 1 but got " << q.peek() << " instead." << endl;
	}
}

/*	Test ID: Dequeue Underflow Check - DUC
	Unit: queue::dequeue()
	Description: Test to determine if program terminates itself in the event of memory underflow when using queue::dequeue()
	Test steps:
		1. Construct an empty queue object
		2. Invoke q.dequeue()
		3. Print test failed statement to console if program is not terminated
	Test data: size = 0
	Precondition: queue object is empty
	Postcondition: Program terminates due to underflow
	Expected result: Program terminates due to underflow
	Actual result: Program terminates due to underflow
*/	
void testDequeue2() {
	queue q;

	q.dequeue();

	cout << "testDequeue2 failed" << endl;
}

/*	Test ID: Enqueue Overflow Check - EOC
	Unit: queue::enqueue()
	Description: Test to determine if program terminates itself in the event of memory overflow when using queue::enqueue()
	Test steps:
		1. Construct an empty queue object of size 2
		2. Invoke q.enqueue 3 times
		3. Print test failed statement to console if program is not terminated
	Test data: size = 2
	Precondition: queue object is empty
	Postcondition: Program terminates due to overflow
	Expected result: Program terminates due to overflow
	Actual result: Program terminates due to overflow
*/
void testEnqueue2() {
	queue q(2);
	
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);

	cout << "testEnqueue2 failed" << endl;
}

/*	Test ID: Peek Underflow Check - PUC
	Unit: queue::peek()
	Description: Test to determine if program terminates itself in the event of memory underflow when using queue::peek()
	Test steps:
		1. Construct an empty queue object
		2. Invoke q.peek()
		3. Print test failed statement to console if program is not terminated
	Test data: size = 0
	Precondition: queue object is empty
	Postcondition: Program terminates due to underflow
	Expected result: Program terminates due to underflow
	Actual result: Program terminates due to underflow
*/
void testPeek2() {
	queue q;
	q.peek();
	cout << "testPeek2 failed" << endl;
}