#include "answer_size.tests.hpp"
#include "hiker.hpp"
#include <cassert>

// The learner is part way through adding a second test file. Nothing calls
// this test yet, but the makefile compiles every .cpp file in this
// directory, so a half written one stops the build.
void the_answer_is_two_digits_long()
{
    assert(answer() > 9 && answer() < 100;
}
