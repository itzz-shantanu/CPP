#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = ++a;
    int c = a++;
    cout << b << " " << c << " " << a;
    return 0;
}

/*#include <iostream>
using namespace std;
int main()
{
    int num = 3;
    cout << (25 * (++num));
    return 0;
}
*/

/*#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    if (a-- > 0 || ++b > 2)
    {
        cout << "Stage 1- inside if";
    }
    else
    {
        cout << "Stage 2- inside else";
    }
    cout << a << " " << b << endl;

    return 0;
}
*/

/*#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    if (a-- > 0 && ++b > 2)
    {
        cout << "Stage 1- inside if";
    }
    else
    {
        cout << "Stage 2- inside else";
    }
    cout << a << " " << b << endl;

    return 0;
}
*/

/*#include <iostream>
using namespace std;
int main()
{
    int a, b = 1;
    a = 10;
    if (++a)
    {
        cout << b;
    }
    else
    {
        cout << ++b;
    }

    return 0;
}
*/