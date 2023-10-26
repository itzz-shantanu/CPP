// prime or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPrime = true;
    if (n > 1)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true)
        {
            cout << "prime" << endl;
        }
        else
        {
            cout << "Not-prime" << endl;
        }
    }
    else
    {
        cout << "Prime numbers are greater than 1" << endl;
    }

    return 0;
}

/*
    #include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 2;

    while (i < n) {
        if (n % i == 0) {
            cout << "Not prime for " << i << endl;
        } else {
            cout << "Prime for " << i << endl;
        }
        i++;
    }
}



*/