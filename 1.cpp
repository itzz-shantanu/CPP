#include <iostream>
using namespace std;
int main()
{
    cout << "Namaste Duniya" << endl;
    int a = 123;
    char b = '%';
    bool c = false;
    float d = 1.2;
    double e = 1.23;
    unsigned int a1 = -123;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << a1 << endl; // bcz of MSB it will print large value as it is given it should be unsigned only
    cout << sizeof(a) << sizeof(b) << sizeof(c) << sizeof(d) << sizeof(e) << endl;
    int f = 'b';
    char ch = 98;
    cout << f << endl;
    cout << ch << endl;
    char chh = 123456; // 123456%256 =64 and its ascii value is @
    cout << chh << endl;
    int g = -5;
    cout << g << endl;
    cout << 2 / 5 << endl;
    cout << 2.0 / 5 << endl;
    cout << 2 / 5.0 << endl;
    cout << -2.0 / 5 << endl;
    bool p = (d != e);
    cout << p << endl;
    return 0;
}
