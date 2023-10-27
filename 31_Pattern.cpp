#include <iostream>
using namespace std;
;
int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        int column = 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        while (column <= row)
        {
            cout << column;
            column++;
        }
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }

    return 0;
}
/*
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space1 = n - row;
        int space2 = space1;
        int column = 1;
        while (space1)
        {
            cout << " ";
            space1--;
        }

        while (column <= row)
        {
            cout << column;
            column++;
        }
        int column2 = space2 + row;
        while (column2 < n + row - 1)
        {
            cout << column - 2;
            column--;
            column2++;
        }

        cout << endl;
        row++;
    }
    */
