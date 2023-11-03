#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {

            cout << i << " " << j << endl;
        }
    }

    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";
        if (i & 1)
        {
            continue;
        }
        i++;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i--)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}
*/