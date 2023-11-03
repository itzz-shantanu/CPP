// scope of the variable
#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    cout << a << endl;
    if (true)
    {
        int a = 5;
        cout << a << endl;
    }
    int b = 1;
    cout << b << endl;
    // int b = 3;
    // cout << b << endl;
    int i = 8;
    for (; i < 8; i++)
    {
        cout << "hi" << endl;
    }
    if (1)
    {
        int b = 21;
        if (1)
        {
            int b = 37;
            if (1)
            {
                int b = 99;
                if (1)
                {
                    cout << b << endl;
                }
            }
        }
    }

    return 0;
}