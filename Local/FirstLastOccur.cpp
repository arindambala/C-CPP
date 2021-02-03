#include <iostream>
using namespace std;

int firstOccur(int arr[], int n, int i, int key)
{
   if(i == n)
   {
      return -1;
   }

   if(arr[i] == key)
   {
      return i;
   }

   return firstOccur(arr, n, i+1, key);
}

int lastOccur(int arr[], int n, int i, int key)
{
   if(i == n)
   {
      return -1;
   }

   int rArray = lastOccur(arr,n,i+1,key);

   if(rArray != -1)
   {
      return rArray;
   }

   if(arr[i] == key)
   {
      return i;
   }

   return -1;
}

int main()
{
   int arr[] = {4,2,1,2,5,2,7};

   cout << "First: " << firstOccur(arr,7,0,2) << endl << "Last: " << lastOccur(arr,7,0,2) << endl;

   return 0;
}
