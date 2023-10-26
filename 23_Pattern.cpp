/*
D
CD
BCD
ABCD
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        char start = ('A' + n - row);

        int col = 1;
        while (col <= row)
        {
            cout << start;
            start++;
            col++;
        }
        cout << endl;

        row++;
    }

    return 0;
}
