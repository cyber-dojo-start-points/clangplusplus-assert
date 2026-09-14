#include "answer_size.tests.hpp"
#include "hiker.hpp"
#include <cassert>

// The makefile compiles every .cpp file in this directory, so this one is
// built and linked without the makefile being touched. main() is in
// hiker.tests.cpp, so that is where the call to this test lives.
void the_answer_is_two_digits_long()
{
    assert(answer() > 9 && answer() < 100);
}
