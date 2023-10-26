/*
1
2 3
3 4 5
4 5 6 7
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        //  int value = i;
        for (int j = i; j <= i + i - 1; j++)
        {
            cout << j << " ";
            // value++;
        }
        cout << endl;
    }

    return 0;
}
