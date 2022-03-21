#include "Notebook.hpp"

namespace ariel
{

    void Notebook::write(unsigned int page, unsigned int row, unsigned int col, Direction dir, string text)
    {
        cout << "write\n";
    };
    string Notebook::read(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int len) const
    {
        return "read";
    };
    void Notebook::erase(unsigned int page, unsigned int row, unsigned int col, Direction dir, unsigned int len)
    {
        cout << "erase\n";
    };
    void Notebook::show(unsigned int page)
    {
        cout << "show\n";
    };

}
