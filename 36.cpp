// decimal(both +ve and -ve) to binary
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int n;
   cin>>n;

   for (int i = 31; i >=0; i--)
   {
      int bit = n>>i;
       if (bit & 1)
       {
         cout<<"1";
       }
       else
       {
         cout<<"0";
       }
       

   }
   
   
}
