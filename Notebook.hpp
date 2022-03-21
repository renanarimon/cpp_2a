#pragma once
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
        map<unsigned int, map<unsigned int, char[100]>> _notebook;

    public:
        Notebook();
        ~Notebook();
        void write(unsigned int, unsigned int, unsigned int, Direction, string);
        string read(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int len) const;
        void erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int len);
        void show(unsigned int page);
    };

    // Notebook::Notebook()
    // {
    // }

    // Notebook::~Notebook()
    // {
    // }

}
