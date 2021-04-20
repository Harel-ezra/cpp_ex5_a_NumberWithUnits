#include <istream>
#include <string>
#include "NumberWithUnits.hpp"
#include "doctest.h"
using namespace std;
using namespace ariel;

TEST_CASE("try")
{
    NumberWithUnits a{1, "km"};
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
    CHECK(a == a);
}