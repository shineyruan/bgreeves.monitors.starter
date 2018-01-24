/**
 * Discussion 2: Monitors
 * Starter Code
 * Ben Reeves Winter 2018
 */
#include <iostream>

#include "cpu.h"
#include "mutex.h"
#include "cv.h"

using std::cout;
using std::endl;

// TODO: Add any globals you need here

// TODO: Implement these

void test(void *a) {
	// TODO: Write a test case
	cout << "Hello world!" << endl;
}

int main(int argc, char **argv) {
	cpu::boot(test, 0, 0);
	return 0;
}
