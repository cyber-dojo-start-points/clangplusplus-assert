#include "hiker.hpp"
#include <iostream>

int answer()
{
    // The learner is watching when this gets called, and has not taken
    // this out yet.
    std::cerr << "answer was called\n";
    return 6 * 7;
}
