#include <iostream>
using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;

   int target;
   cin >> target;

   cout << "\n" << endl;

   int arr[n][m];
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cin >> arr[i][j];
      }
   }

   // Search

   bool flag = 0;
   int r = 0, c = m - 1;
   while (r < n && c >= 0)
   {
      if (arr[r][c] == target)
      {
         flag = 1;
      }
      if (arr[r][c] > target)
      {
         c--;
      }
      else
      {
         r++;
      }
      cout << endl;
   }

   if (flag == 1)
   {
      cout << "Found!" << endl;
   }
   else
   {
      cout << "Not Found!" << endl;
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         if (arr[i][j] == target)
         {
            cout << "Found at: " << i << " " << j << endl;
         }
      }
   }

   return 0;
}
