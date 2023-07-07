// https://leetcode.com/problems/set-matrix-zeroes/
#include <bits/stdc++.h>
using namespace std;

// S
void setZeroes(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();

    vector<bool> row(r, false);
    vector<bool> col(c, false);

    // check 0
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = true;
                col[j] = true;
            }
        }
    }
    // replace with 0
    // row
    for (int i = 0; i < row.size(); i++)
    {
        if (row[i] == true)
        {
            for (int j = 0; j < c; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    // coloumn
    for (int i = 0; i < col.size(); i++)
    {
        if (col[i] == true)
        {
            for (int j = 0; j < r; j++)
            {
                matrix[j][i] = 0;
            }
        }
    }
    // alternate n^2
    for (int i = 0; i < r; i++)
    {
        for (int j; j < c; j++)
        {
            if (row[i] == true || col[j] == true)
            {
                matrix[i][j] = 0;
            }
        }
    }
}
