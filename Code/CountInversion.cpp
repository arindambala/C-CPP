#include <iostream>
using namespace std;

long long mrg(int arr[], int l, int mid, int r)
{
   long long inv = 0;

   int x = mid - l + 1;
   int y = r - mid;

   int ar[x];
   int br[y];

   for (int i = 0; i < x; i++)
   {
      ar[i] = arr[l + i];
   }

   for (int i = 0; i < y; i++)
   {
      br[i] = arr[mid + i + 1];
   }

   int p = 0, q = 0;
   int k = l;

   while (p < x && q < y)
   {
      if (ar[p] <= br[q])
      {
         arr[k] = ar[p];
         k++;
         p++;
      }

      else
      {
         arr[k] = br[q];
         inv += x - p; // Contribution
         k++;
         q++;
      }
   }

   while (p < x)
   {
      arr[k] = ar[p];
      k++;
      p++;
   }

   while (q < y)
   {
      arr[k] = br[q];
      k++;
      q++;
   }

   return inv;
}

long long CntInv(int arr[], int l, int r)
{
   long long inv = 0;
   if (l < r)
   {
      int mid = (l + r) / 2;

      inv += CntInv(arr, l, mid);
      inv += CntInv(arr, mid + 1, r);
      inv += mrg(arr, l, mid, r);
   }
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

   cout << CntInv(arr, 0, n - 1);

   return 0;
}
