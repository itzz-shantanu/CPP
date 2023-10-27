#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col;
            col++;
        }
        int star = ((2 * row) - 2);
        while (star)
        {
            cout << "*";
            star--;
        }
        int start = n - row + 1;
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