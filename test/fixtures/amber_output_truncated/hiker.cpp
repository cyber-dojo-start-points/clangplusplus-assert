#include "hiker.hpp"
#include <iostream>

int answer()
{
    // The learner put a print inside a loop to see what was happening. It
    // goes to stderr, where a failing assert() writes too, and prints far
    // more than the 50K the runner keeps, so the line naming the failed
    // assertion is cut off the end.
    for (int i = 0; i != 5000; i++)
    {
        std::cerr << "debug: answer was called, i is " << i << "\n";
    }
    return 6 * 9;
}
