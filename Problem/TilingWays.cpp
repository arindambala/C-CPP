#include <iostream>
using namespace std;

int tWays(int n)
{
   if(n == 0)
      return 0;
   
   if(n == 1)
      return 1;

   return tWays(n-1) + tWays(n-2);
}

int main()
{
   cout << tWays(4) << endl;

   return 0;
}
