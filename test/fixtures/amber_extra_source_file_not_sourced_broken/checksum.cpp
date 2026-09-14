#include "checksum.hpp"

// Nothing #includes checksum.hpp and nothing calls checksum(), but the
// makefile compiles every .cpp file in this directory, so a half written one
// is seen rather than sitting there unnoticed.
int checksum()
{
    return 7
}
