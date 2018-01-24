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

// TODO: Implement these

class rw_lock {
private:
	// Add your private variables here

public:
	// Constructs a new Reader-Writer lock
	rw_lock();

	// Called by a thread who wants read access
	//      to the data protected by this lock.
	void reader_start();

	// Called by a thread who no longer needs
	//      read access to the data. Must
	//      have been preceded by a call
	//      to reader_start().
	void reader_finish();

	// Called by a thread who wants write access
	//      to the data protected by this lock.
	void writer_start();

	// Called by a thread who no longer needs
	//      write access to the data. Must
	//      have been preceded by a call
	//      to writer_start().
	void writer_finish();
};

rw_lock::rw_lock() {
	// TODO: Implement
}

void rw_lock::reader_start() {
	// TODO: Implement
}

void rw_lock::reader_finish() {
	// TODO: Implement
}

void rw_lock::writer_start() {
	// TODO: Implement
}

void rw_lock::writer_finish() {
	// TODO: Implement
}


// TODO: Add any globals you need here


void test(void *a) {
	// TODO: Write a test case
	cout << "Hello world!" << endl;
}

int main(int argc, char **argv) {
	cpu::boot(test, 0, 0);
	return 0;
}
