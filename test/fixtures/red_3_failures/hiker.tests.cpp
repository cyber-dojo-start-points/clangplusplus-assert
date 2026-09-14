#include "hiker.hpp"
#include <cassert>
#include <iostream>

// All three of these assertions are false. A failing assert() calls abort(),
// which ends the whole test program, so the first one is the only one
// reported and the other two never run.

namespace
{
    void life_the_universe_and_everything()
    {
        assert(answer() == 42);
    }

    void the_answer_is_three_digits_long()
    {
        assert(answer() > 99);
    }

    void the_answer_is_the_question()
    {
        assert(answer() == 6 * 9 * 2);
    }
}

int main()
{
    life_the_universe_and_everything();
    the_answer_is_three_digits_long();
    the_answer_is_the_question();
    std::cout << "All tests passed\n";
}
