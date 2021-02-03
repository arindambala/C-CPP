#include <iostream>
using namespace std;

int cFrnd(int n)
{
   if(n == 0 || n == 1 || n == 2)
      return n;
   
   return cFrnd(n-1) + (cFrnd(n-2) * (n-1));
}

int main()
{
   cout << cFrnd(4) << endl;

   return 0;
}
