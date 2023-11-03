// continue statement
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Hi" << endl;
        cout << "Hey" << endl;
        continue;
        cout << "Reply toh karde" << endl;
    }

    return 0;
}

/*
// break statement (prime or not)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "Not a Prime" << endl;
    }
    else
    {
        cout << "It is a prime" << endl;
    }

    return 0;
}
*/

/*
// fibonacci series & prime or not
include <iostream>
using namespace std;
int main()
{
    int num = 10;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= num; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";
        a = b; // this order is imp, first transfer b to a, then nextNum to b
        b = nextNum;
    }

    return 0;
}
*/
