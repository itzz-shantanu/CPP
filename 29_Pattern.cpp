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
        int col = 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int start = row;
        while (col <= n - row + 1)
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
