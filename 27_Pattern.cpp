#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        int column = 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        while (column <= n - row + 1)
        {
            cout << row;
            column++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
