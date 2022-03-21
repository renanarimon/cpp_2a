#include "Notebook.hpp"

namespace ariel
{

    void Notebook::write(int page, int row, int col, Direction dir, string const &text)
    {
        cout << "write\n";
    };
    string Notebook::read(int page, int row, int col, Direction dir, int len) const
    {
        return "read";
    };
    void Notebook::erase(int page, int row, int col, Direction dir, int len)
    {
        cout << "erase\n";
    };
    void Notebook::show(int page) const
    {
        cout << "show\n";
    };

    Notebook::Notebook()
    {
        this->_size = 0;
    }
    Notebook::~Notebook()
    {
        cout << "destroy\n";
    }

}
