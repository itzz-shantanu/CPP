/*
 *
 **
 ***
 ****
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
        int column = 1;
        while (column <= row)
        {
            cout << "*";
            column++;
        }
        cout << endl;
        row++;
    }

    return 0;
}
/*
int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
*/