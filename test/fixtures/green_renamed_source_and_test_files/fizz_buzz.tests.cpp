#include "fizz_buzz.hpp"
#include <cassert>
#include <iostream>

namespace
{
    void life_the_universe_and_everything()
    {
        assert(fizz_buzz() == 42);
    }
}

int main()
{
    life_the_universe_and_everything();
    std::cout << "All tests passed\n";
}
