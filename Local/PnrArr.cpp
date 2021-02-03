#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> oth;

// Recursion
void nPr(vector<int> &arr, int idx )
{
   if(idx == arr.size())
   {
      oth.push_back(arr);
      return;
   }

   for(int i=idx; i < arr.size(); i++)
   {
      swap(arr[i], arr[idx]);
      nPr(arr, idx+1);
      swap(arr[i], arr[idx]);
   }

   return;
}

int main()
{
   int n;
   cin >> n;

   vector<int> arr(n);
   for(auto &i : arr)
      cin >> i;
   
   // STL
   /* sort(arr.begin(), arr.end());
      do{
         oth.push_back(arr);
      }while(next_nPr(arr.begin(), arr.end()));
   */

   nPr(arr,0);

   cout << endl;

   for(auto v : oth)
   {
      for(auto i : v)
         cout << i << " ";
      
      cout << endl;
   }

   return 0;
}
