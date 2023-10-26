/*
A A A
B B B
C C C
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    // char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            // cout << ch << " ";
            cout << ((char)('A' + row - 1)) << " ";
            col++;
        }
        cout << endl;
        // ch++;
        row++;
    }

    return 0;
}
/*
int n;
    cin >> n;
    int row = 1;
     char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << ch << " ";
            col++;
        }
        cout << endl;
         ch++;
        row++;
    }
    */