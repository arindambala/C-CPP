#include <iostream>
#include <vector>

using namespace std;

int main()
{
   string str;
   cin >> str;

   vector<int> pos(256, -1);

   int maxLen = 0, start = -1;

   for (int i = 0; i < str.size(); i++)
   {
      if (pos[str[i]] > start)
         start = pos[str[i]];
      pos[str[i]] = i;
      maxLen = max(maxLen, i - start);
   }

   cout << maxLen;

   return 0;
}
