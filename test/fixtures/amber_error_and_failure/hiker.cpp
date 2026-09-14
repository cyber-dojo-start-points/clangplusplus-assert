#include "hiker.hpp"

int answer()
{
    return 6 * 9;
}

int checksum()
{
    // The learner has not filled the table in yet, so it is still null and
    // reading from it crashes the test program. Declaring the pointer
    // volatile is what makes the read happen at all: the makefile compiles
    // with -O, where a read the optimiser is free to fold away leaves
    // nothing to crash.
    int *volatile checksums = nullptr;
    return checksums[0];
}
