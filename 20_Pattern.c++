/*
A
BB
CCC
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch = 'A';
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << ((char)(ch + row - 1));
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
