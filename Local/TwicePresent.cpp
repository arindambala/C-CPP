#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
   return ((n & (1 << pos)) != 0);
}

void unq(int arr[], int n)
{
   int xrs = 0;
   for (int i = 0; i < n; i++)
   {
      xrs = xrs ^ arr[i];
   }

   int txrs = xrs;

   int setb = 0, pos = 0;
   while (setb != 1)
   {
      setb = xrs & 1;
      pos++;
      xrs = xrs >> 1;
   }

   int nxrs = 0;
   for (int i = 0; i < n; i++)
   {
      if (getBit(arr[i], pos - 1))
      {
         nxrs = nxrs ^ arr[i];
      }
   }

   cout << nxrs << endl;
   cout << (txrs ^ nxrs) << endl;
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

   unq(arr, n);

   return 0;
}
