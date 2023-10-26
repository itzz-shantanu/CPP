// temp scale
#include <iostream>
using namespace std;

int main()
{
    float c, f;
    int scale;
    cout << "enter '1' for celsius and '2' for farenhite" << endl;
    cin >> scale;
    switch (scale)
    {
    case 1:
        cin >> c;
        cout << (((c / 5.0) * 9) + 32) << endl;
        break;

    case 2:
        cin >> f;
        cout << (((f - 32.0) / 9.0) * 5) << endl;
        break;

    default:
        break;
    }
    return 0;
}