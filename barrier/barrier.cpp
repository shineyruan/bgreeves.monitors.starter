/**
 * Discussion 2: Monitors
 * Starter Code
 * Ben Reeves Winter 2018
 */
#include <iostream>

#include "cpu.h"
#include "cv.h"
#include "mutex.h"

using std::cout;
using std::endl;

// TODO: Implement barrier class

class barrier {
private:
    // Add your private variables here

public:
    // Constructs a new barrier that will allow number_of_threads
    //      threads to check in.
    barrier(int number_of_threads);

    // Called by a thread checking in to the barrier. Should return
    //      true if the thread was the last thread to check in (in POSIX threads
    //      lingo, the "serial thread") and false otherwise. This function should
    //      block until all threads have checked in.
    bool wait();

    // Delete copy constructor and copy assignment operators
    barrier(const barrier&) = delete;
    barrier& operator=(const barrier&) = delete;
    barrier(barrier&&) = delete;
    barrier& operator=(barrier&&) = delete;
};

barrier::barrier(int number_of_threads) {
    // TODO: Implement
    cout << "barrier::barrier(" << number_of_threads << ")" << endl;
}

bool barrier::wait() {
    // TODO: Implement
    cout << "barrier::wait()" << endl;
    return false;
}

// TODO: Add any globals you need here

// TODO: Write a test case
void test(void* a) {
    cout << "Hello world!" << endl;
    barrier b(2);
    b.wait();
}

int main(int argc, char** argv) {
    cpu::boot(test, 0, 0);
    return 0;
}
