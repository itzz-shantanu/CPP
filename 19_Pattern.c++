/*
ABC
BCD
CDE
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << ((char)(ch + col - 1));
            col++;
        }
        cout << endl;
        ch++;
        row++;
    }

    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << ((char)(ch + row + col - 2));
            col++;
        }
        cout << endl;
        row++;
    }

*/