#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
   {
      if(n == 1)
      {
         return true;
      }

      bool rArray = sorted(arr+1, n-1);
      return (arr[0] < arr[1] && rArray);
   }

int main()
{
   int arr[] = {1,2,6,4,5};

   cout << sorted(arr, 5) << endl;
   
   return 0;
}
