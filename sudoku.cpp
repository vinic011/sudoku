#include "sudoku.hpp"

bool sudoku::check_xy()
{
    vector d = {1,2,3,4,5,6,7,8,9};

    //check vertical lines
    for(int i = 0; i < 9; i++)
    {
        vector aux;
        for(int j = 0; j < 9; j++)
        {
            aux.push_back(values_[i][j]);
        }
        std::sort(aux.begin(), aux.end());
        if(aux!=d)
        {
            return false;
        }
    }
    //check horrizontal lines
    for(int j = 0; j < 9; j++)
    {
        vector aux;
        for(int i = 0; i < 9; i++)
        {
            aux.push_back(values_[i][j]);
        }
        std::sort(aux.begin(), aux.end());
        if(aux!=d)
            return false;
        
    }
    return true;
}

bool sudoku::check_sec()
{
    vector d = {1,2,3,4,5,6,7,8,9};
    for(int i = 0; i < 9; i = i+3)
    {
        for(int j = 0; j < 9; j = j+3)
        {
            vector aux;
            for(int k = i; k < i+3; k++)
            {
                for(int l = j; l < j+3; l++)
                {
                    aux.push_back(values_[k][l]);
                }
            }
            std::sort(aux.begin(), aux.end());
            if(aux!=d)
                return false;
        }
    }
    return true;
}

std::istream &operator>>(std::istream& is,sudoku& s)
{
    for(int j = 0; j < 9; j++)
    {
        for(int i = 0; i < 9; i++)
        {
            std::cin >> s.values_[i][j];
        }
    }
    return is;
}


