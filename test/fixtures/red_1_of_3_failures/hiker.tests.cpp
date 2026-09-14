#include "hiker.hpp"
#include <cassert>
#include <iostream>

namespace
{
    void the_answer_is_two_digits_long()
    {
        assert(answer() > 9 && answer() < 100);
    }

    void life_the_universe_and_everything()
    {
        assert(answer() == 42);
    }

    void the_answer_is_not_the_question()
    {
        assert(answer() != 6 * 9);
    }
}

int main()
{
    the_answer_is_two_digits_long();
    life_the_universe_and_everything();
    the_answer_is_not_the_question();
    std::cout << "All tests passed\n";
}
