/**
 * Discussion 2: Monitors
 * Starter Code
 * Ben Reeves Winter 2018
 */
#include <iostream>
#include <queue>

#include "cpu.h"
#include "cv.h"
#include "mutex.h"

using std::cout;
using std::endl;

std::queue<int> queue;

// TODO: Add any globals you need here

// TODO: Implement these

void enqueue(int val) {
}

void dequeue(int val) {
}

void test(void *a) {
    // TODO: Write a test case
    cout << "Hello world!" << endl;
}

int main(int argc, char **argv) {
    cpu::boot(test, 0, 0);
    return 0;
}
