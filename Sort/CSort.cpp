#include <iostream>
using namespace std;

void cSort(int arr[], int n)
{
   int mxk = arr[0];
   for (int i = 0; i < n; i++)
   {
      mxk = max(mxk, arr[i]);
   }

   int cnt[10] = {0};
   for (int i = 0; i < n; i++)
   {
      cnt[arr[i]]++;
   }

   for (int i = 1; i <= mxk; i++)
   {
      cnt[i] += cnt[i - 1];
   }

   int ot[n];
   for (int i = n - 1; i >= 0; i--)
   {
      ot[--cnt[arr[i]]] = arr[i];
   }

   for (int i = 0; i < n; i++)
   {
      arr[i] = ot[i];
   }
}

int main()
{
   int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
   cSort(arr, 9);

   for (int i = 0; i < 9; i++)
   {
      cout << arr[i] << " ";
   }

   return 0;
}
