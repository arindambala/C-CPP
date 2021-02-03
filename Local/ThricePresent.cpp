#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
   return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
   return (n | (1 << pos));
}

int unq(int arr[], int n)
{
   int res = 0;
   for (int i = 0; i < 64; i++)
   {
      int s = 0;
      for (int j = 0; j < n; j++)
      {
         if (getBit(arr[j], i))
         {
            s++;
         }
      }
      if (s % 3 != 0)
      {
         res = setBit(res, i);
      }
      }
   return res;
}

int main()
{
   int n;
   cin >> n;

   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   cout << unq(arr, n) << endl;

   return 0;
}
