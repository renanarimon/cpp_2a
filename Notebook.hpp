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
        // map<unsigned int, map<unsigned int, char[100]>> _notebook;

    public:
        Notebook();
        ~Notebook();
        void write(int, int, int, Direction, string const &);
        string read(int page, int row, int col, Direction dir, int len) const;
        void erase(int page, int row, int col, Direction dir, int len);
        void show(int page) const;
    };

    // Notebook::Notebook()
    // {
    // }

    // Notebook::~Notebook()
    // {
    // }

}
#endif