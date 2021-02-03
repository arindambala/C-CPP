#include <bits/stdc++.h>
using namespace std;

void hlp(vector<int> arr, vector<vector<int>> &oth, int idx)
{
   if (idx == arr.size())
   {
      oth.push_back(arr);
      return;
   }

   for (int i = idx; i < arr.size(); i++)
   {
      if (i != idx && arr[i] == arr[idx])
         continue;

      swap(arr[i], arr[idx]);
      hlp(arr, oth, idx + 1);
   }
}

vector<vector<int>> nPr(vector<int> arr)
{
   sort(arr.begin(), arr.end());
   vector<vector<int>> oth;

   hlp(arr, oth, 0);
   return oth;
}
int main()
{
   int n;
   cin >> n;

   vector<int> arr(n);

   for (auto &i : arr)
      cin >> i;

   cout << endl;

   vector<vector<int>> res = nPr(arr);

   for (auto v : res)
   {
      for (auto i : v)
         cout << i << " ";
      cout << endl;
   }

   return 0;
}
