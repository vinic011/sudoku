#include "sudoku.hpp"

int main()
{
    sudoku s;
    std::cin >> s;
    if(s.check_xy() == true && s.check_sec() == true)
        std::cout << "VALID\n";
    else
        std::cout << "INVALID\n";
}