#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
   int temp = arr[i];
   arr[i] = arr[j];
   arr[j] = temp;
}

int Prtt(int arr[], int l, int r)
{
   int pvot = arr[r];
   int i = l - 1;

   for (int j = l; j < r; j++)
   {
      if (arr[j] < pvot)
      {
         i++;
         swap(arr, i, j);
      }
   }

   swap(arr, i + 1, r);

   return i + 1;
}

void qSort(int arr[], int l, int r)
{
   if (l < r)
   {
      int pi = Prtt(arr, l, r);
      qSort(arr, l, pi - 1);
      qSort(arr, pi + 1, r);
   }
}

int main()
{
   int arr[] = {5, 4, 3, 2, 1};
   qSort(arr, 0, 4);

   for (int i = 0; i < 5; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
}
