#include <iostream>
using namespace std;

int unq(int arr[], int n)
{
   int xrs = 0;
   for (int i = 0; i < n; i++)
   {
      xrs = xrs ^ arr[i];
   }
   return xrs;
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
