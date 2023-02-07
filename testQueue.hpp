#ifndef TESTQUEUE_HPP
#define TESTQUEUE_HPP

#include <cassert>

#include "queue.hpp"

void testSize(queue &q);
void testEmpty(queue &q, bool expectedResult);
void testFull(queue &q, bool expectedResult);

void testDequeue1(queue &q);
void testEnqueue1(queue &q, int value);
void testPeek1(queue &q);

void testDequeue2(queue &q);
void testEnqueue2(queue &q, int value);
void testPeek2(queue &q);

#endif