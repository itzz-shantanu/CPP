//binary to decimal
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int n;
   cin >> n;
   int i=0;
   int sum = 0;

   while (n != 0)
   {
      int bit = n % 10;
      if (bit == 1)
      {
         sum = (sum + pow(2, i));
      }
      n = n / 10;
      i++;
   }

   cout << sum << endl;
}
