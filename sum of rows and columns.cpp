#include <iostream>
using namespace std;

int main()
{
    int i2d[3][4];
    int i, j, sum;

    cout << "Enter no:\n";

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> i2d[i][j];
        }
    }

    cout << "sum of rows:";
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 4; j++)
        {
            sum = sum + i2d[i][j];
        }
        cout << "row " << i + 1 << " = " << sum << endl;
    }

    cout << "sum of columns:";
    for (j = 0; j < 4; j++)
    {
        sum = 0;
        for (i = 0; i < 3; i++)
        {
            sum = sum + i2d[i][j];
        }
        cout << "column " << j + 1 << " = " << sum << endl;
    }

    return 0;
} 
