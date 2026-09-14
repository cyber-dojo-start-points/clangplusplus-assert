#include "hiker.hpp"
#include "answer_size.tests.hpp"
#include <cassert>
#include <iostream>

namespace
{
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
    life_the_universe_and_everything();
    the_answer_is_not_the_question();
    the_answer_is_two_digits_long();
    the_answer_is_three_digits_long();
    std::cout << "All tests passed\n";
}
