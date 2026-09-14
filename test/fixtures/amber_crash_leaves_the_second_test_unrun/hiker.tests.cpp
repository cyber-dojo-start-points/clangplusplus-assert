#include "hiker.hpp"
#include <cassert>
#include <iostream>

// Both of these tests crash. A crash ends the whole test program, so the
// first one is the only one reached and the second never runs.

namespace
{
    void life_the_universe_and_everything()
    {
        assert(answer() == 42);
    }

    void the_checksum_of_the_answer()
    {
        assert(checksum() == 0);
    }
}

int main()
{
    life_the_universe_and_everything();
    the_checksum_of_the_answer();
    std::cout << "All tests passed\n";
}
