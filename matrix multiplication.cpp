#include <iostream>
using namespace std;

int main()
{
    int m1[3][3], m2[3][3], result[3][3];

    // Taking input from user for Matrix 1
    cout << "Enter elements for Matrix 1 (3x3):\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> m1[i][j];
        }
    }

    // Taking input from user for Matrix 2
    cout << "\nEnter elements for Matrix 2 (3x3):\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> m2[i][j];
        }
    }

    // Multiplying both matrices
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Displaying the result
    cout << "\nResultant Matrix (after multiplication):\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

