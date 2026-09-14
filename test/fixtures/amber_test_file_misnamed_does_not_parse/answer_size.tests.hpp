#include "hiker.hpp"
#include <cassert>

// Given a .hpp name instead of a .cpp one, so it is never linked into the
// test program and this test never runs. Vanishing is what it must not do:
// the makefile compiles every header file in its own right, so a half
// written one is seen even though it is not run.
namespace
{
    void the_answer_is_two_digits_long()
    {
        assert(answer() > 9 && answer() < 100;
    }
}
