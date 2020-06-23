#include "hiker.hpp"
#include <cassert>
#include <iostream>

namespace
{
    void test_global_function()
    {
        assert(answer() == 42);
    }

    void test_instance_method()
    {
        assert(hiker().answer() == 42);
    }
}

int main()
{
    test_global_function();
    test_instance_method();
    std::cout << "All tests passed\n";
}
