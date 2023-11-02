// bitwise operator
#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;

    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a " << ~a << endl;
    cout << "a^b " << (a ^ b) << endl;

    cout << (17 >> 1) << endl; // for small number, right shift 1 means / by 2 and right shift 2 means 2x / by 2
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl; // for small number, left shift 1 means * by 2 and left shift 2 means 2x * by 2
    cout << (19 << 2) << endl;

    int i = 7;
    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;

    return 0;
}
