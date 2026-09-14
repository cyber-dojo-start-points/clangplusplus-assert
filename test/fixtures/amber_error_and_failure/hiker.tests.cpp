#include "hiker.hpp"
#include <cassert>
#include <iostream>

// One test crashes and one has an assertion that is false. Whichever runs
// first ends the test program, so the crash is the only thing reported and
// the false assertion is never reached.

namespace
{
    void the_checksum_of_the_answer()
    {
        assert(checksum() == 0);
    }

    void life_the_universe_and_everything()
    {
        assert(answer() == 42);
    }
}

int main()
{
    the_checksum_of_the_answer();
    life_the_universe_and_everything();
    std::cout << "All tests passed\n";
}
