/*
* 5 Attributes demonstrated by the code that I consider poor
* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - -
* 1 | Exception handling: The code chooses to terminate the program in case of underflow
*   | or overflow, instead of handling the exceptions.
* - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
* 2 | Code maintainability: The code does not use any design patterns, which can make it 
*   | difficult to maintain and extend in the future. A better approach would be to use 
    | well-established design patterns, such as the factory or adapter pattern.
* - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
* 3 | Error handling: The code does not provide any error messages or logging, which 
*   | makes it difficult to debug in case of errors. A better approach would be to 
*   | provide descriptive error messages and logging to help diagnose issues.
* - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
* 4 | Data structure choice: The queue is implemented using an array, which has a fixed 
*   | size. This can lead to overflow errors and is not flexible in case the size needs 
*   | to change. A better data structure choice would be a dynamic array or a linked list.
* - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
* 5 | Resource management: The arr pointer is not being properly managed in the case 
*   | of exceptions or errors, which can lead to memory leaks.
* - | - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
*/

// This code was taken from https://www.techiedelight.com/queue-implementation-cpp/
// The code has been modified from the original to provide opportunities to learn

#include "testQueue.hpp"

// main function
int main()
{
	testSize();
	testEmpty();
	testFull();

	testDequeue1();
	testEnqueue1();
	testPeek1();

	// These test case functions are commented out as they will terminate the program if successful. Please uncomment them when using them.
	// testDequeue2();
	// testEnqueue2();
	// testPeek2();

	return 0;
}