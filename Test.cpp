#include "doctest.h"
#include "Notebook.hpp"
using namespace ariel;


TEST_CASE("WRITE"){
    Notebook note1;
    SUBCASE("BAD_INPUT"){
        /*page, row, col mast be positive*/
        for (size_t i = 0; i < 30; i++)
        {
            int v1 = (rand() % 100 + 1)*-1;
            CHECK_THROWS_MESSAGE(note1.write(v1, 0, 0, Direction::Horizontal, "hi"), "PAGE must be positive");
            CHECK_THROWS_MESSAGE(note1.write(0, v1, 0, Direction::Horizontal, "hi"), "ROW must be positive");
            CHECK_THROWS_MESSAGE(note1.write(0, 0, v1, Direction::Horizontal, "hi"), "COL must be positive");
        }

        /*string must contain printable char [33,126] */
        CHECK_THROWS_MESSAGE(note1.write(0, 0, 0, Direction::Horizontal, ""), "invalid string");
        CHECK_THROWS_MESSAGE(note1.write(0, 0, 0, Direction::Horizontal, "\n"), "invalid string");
        CHECK_THROWS_MESSAGE(note1.write(0, 0, 0, Direction::Horizontal, "\t"), "invalid string");
        CHECK_THROWS_MESSAGE(note1.write(0, 0, 0, Direction::Horizontal, "\r"), "invalid string");

        /*string length + col > 100*/
        string str = string("");
        for (size_t i = 0; i < 100; i++)
        {
            str.append("a");
        }
        CHECK_THROWS_MESSAGE(note1.write(0, 0, 0, Direction::Horizontal, str), "string length is out of bounds - 100");
        CHECK_THROWS_MESSAGE(note1.write(0, 0, 99, Direction::Horizontal, "aaa"), "string length is out of bounds, try change COL or STR");
        CHECK_THROWS_MESSAGE(note1.write(0, 0, 100, Direction::Horizontal, "aa"), "string length is out of bounds, try change COL or STR");

        /*Attempt to write in a place where they have already written*/
        
    }
    
}