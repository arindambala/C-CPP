#include <iostream>
using namespace std;

void mrg(int arr[], int l, int mid, int r)
{
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
      br[i] = arr[mid + 1 + i];
   }

   int p = 0, q = 0;
   int z = l;

   while (p < x && q < y)
   {
      if (ar[p] < br[q])
      {
         arr[z] = ar[p];
         z++;
         p++;
      }

      else
      {
         arr[z] = br[q];
         z++;
         q++;
      }
   }

   while (p < x)
   {
      arr[z] = ar[p];
      z++;
      p++;
   }

   while (q < y)
   {
      arr[z] = br[q];
      z++;
      q++;
   }
}

void mSort(int arr[], int l, int r)
{
   if (l < r)
   {
      int mid = (l + r) / 2;
      mSort(arr, l, mid);
      mSort(arr, mid + 1, r);

      mrg(arr, l, mid, r);
   }
}

int main()
{
   int arr[] = {5, 4, 3, 2, 1};
   mSort(arr, 0, 4);

   for (int i = 0; i < 5; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}
