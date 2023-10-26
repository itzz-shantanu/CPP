/*
111
222
333
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i+1;
        }
        cout << endl;
    }

    return 0;
}
*/