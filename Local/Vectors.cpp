#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);

   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << endl;
   } // 1 2 3

   cout << endl;

   vector<int>::iterator it;
   for (it = v.begin(); it != v.end(); it++)
   {
      cout << *it << endl;
   } // 1 2 3

   cout << endl;

   for (auto part : v)
   {
      cout << part << endl;
   } // 1 2 3

   cout << endl;

   v.pop_back(); // 1 2

   vector<int> w(3, 50); // 50 50 50

   swap(v, w);
   for (auto part : v)
   {
      cout << part << endl;
   }

   cout << endl;

   for (auto part : w)
   {
      cout << part << endl;
   }

   sort(v.begin(), v.end());

   return 0;
}
