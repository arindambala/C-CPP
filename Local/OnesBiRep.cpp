#include <iostream>
using namespace std;

int oRep(int n)
{
   int count = 0;
   while (n)
   {
      n = n & (n - 1);
      count++;
   }
   return count;
}

int main()
{
   cout << oRep(19) << endl;

   return 0;
}
