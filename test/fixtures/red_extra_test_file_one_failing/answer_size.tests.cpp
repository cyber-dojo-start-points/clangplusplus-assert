#include "answer_size.tests.hpp"
#include "hiker.hpp"
#include <cassert>

void the_answer_is_three_digits_long()
{
    assert(answer() > 99);
}
