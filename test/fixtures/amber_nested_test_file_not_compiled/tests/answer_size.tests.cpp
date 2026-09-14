#include "tests/answer_size.tests.hpp"
#include "hiker.hpp"
#include <cassert>

// The makefile gathers its sources with *.cpp, which matches this directory
// only, so a test file put in a sub-directory is never compiled. The header
// beside it still declares the test, so main() compiles and the mistake
// surfaces at link time as an undefined reference.
void the_answer_is_two_digits_long()
{
    assert(answer() > 9 && answer() < 100);
}
