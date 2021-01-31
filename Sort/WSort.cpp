#include <iostream>
using namespace std;

void swap(int arr[], int x, int y)
{
   int temp = arr[x];
   arr[x] = arr[y];
   arr[y] = temp;
}

void wSort(int arr[], int n)
{
   for (int i = 1; i < n - 1; i += 2)
   {
      if (arr[i] > arr[i - 1])
      {
         swap(arr, i, i - 1);
      }

      if (arr[i] > arr[i + 1] && i <= n - 2)
      {
         swap(arr, i, i + 1);
      }
   }
}

int main()
{
   int arr[] = {1, 3, 4, 7, 5, 6, 2};
   wSort(arr, 7);

   for (int i = 0; i < 7; i++)
   {
      cout << arr[i] << " ";
   }

   return 0;
}
