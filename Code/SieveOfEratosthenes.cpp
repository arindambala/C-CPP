#include <iostream>
using namespace std;

void prSve(int n)
{
   int pr[100] = {0};
   for (int i = 2; i <= n; i++)
   {
      if (pr[i] == 0)
      {
         for (int j = i * i; j <= n; j += i)
         {
            pr[j] = 1;
         }
      }
   }

   for (int i = 2; i <= n; i++)
   {
      if (pr[i] == 0)
      {
         cout << i << " ";
      }
   }
   cout << endl;
}

int main()
{
   int n;
   cin >> n;

   prSve(n);

   return 0;
}
