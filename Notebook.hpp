#ifndef NOTEBOOK_HPP
#define NOTEBOOK_HPP
#include <iostream>
#include <map>
#include <vector>
#include <initializer_list>
#include "Direction.hpp"
using namespace std;

namespace ariel
{
    class Notebook
    {
    private:
        unsigned int _size;
    public:
        Notebook();
        ~Notebook();
        static void write(int, int, int, Direction, string const &);
        static string read(int page, int row, int col, Direction dir, int len);
        static void erase(int page, int row, int col, Direction dir, int len);
        static void show(int page);
    };

}
#endif