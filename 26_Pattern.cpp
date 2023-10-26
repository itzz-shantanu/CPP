
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
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        while (col <= n - row + 1)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
