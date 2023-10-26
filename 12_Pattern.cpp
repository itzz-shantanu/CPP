/*
1
22
333
4444
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 0;
    while (row < n)
    {
        int column = 0;
        while (column <= row)
        {
            cout << row + 1;
            column++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
