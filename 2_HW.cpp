// upper, lower and numeric case finder
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the char" << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is lower case" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is upper case" << endl;
    }
    else
    {
        cout << "This is numeric" << endl;
    }
}