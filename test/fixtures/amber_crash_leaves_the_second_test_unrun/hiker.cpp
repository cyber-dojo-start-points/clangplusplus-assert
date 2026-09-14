#include "hiker.hpp"

// Neither table has been filled in yet, so both are still null and reading
// from either one crashes the test program. Declaring the pointers volatile
// is what makes the reads happen at all: the makefile compiles with -O,
// where a read the optimiser is free to fold away leaves nothing to crash.

int answer()
{
    int *volatile answers = nullptr;
    return answers[0];
}

int checksum()
{
    int *volatile checksums = nullptr;
    return checksums[0];
}
