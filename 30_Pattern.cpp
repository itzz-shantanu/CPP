#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    int start = 1;
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

            cout << start;
            start++;
            column++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
