#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
   int n;
   cin >> n;

   int target;
   cin >> target;

   vector<int> arr(n);

   for (auto &i : arr)
      cin >> i;

   bool found = false;

   sort(arr.begin(), arr.end());

   for (int i = 0; i < n; i++)
   {
      int low = i + 1, high = n - 1;
      while (low < high)
      {
         int curr = arr[i] + arr[low] + arr[high];
         if (curr == target)
            found = true;
         if (curr < target)
            low++;
         else
            high--;
      }
   }

   if (found)
      cout << "True";
   else
      cout << "False";

   return 0;
}
