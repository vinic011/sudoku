#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using vector = std::vector<int>;

class sudoku{
public:
    bool check_xy();
    bool check_sec();
    friend std::istream &operator>>(std::istream&,sudoku&);

private:
    int values_[9][9];
};