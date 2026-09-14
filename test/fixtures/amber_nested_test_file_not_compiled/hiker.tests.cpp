#include "hiker.hpp"
#include "tests/answer_size.tests.hpp"
#include <cassert>
#include <iostream>

namespace
{
    void life_the_universe_and_everything()
    {
        assert(answer() == 42);
    }
}

int main()
{
    life_the_universe_and_everything();
    the_answer_is_two_digits_long();
    std::cout << "All tests passed\n";
}
