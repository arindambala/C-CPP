#include <iostream>
using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;

   cout << endl << endl;

   int arr[n][m];
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cin >> arr[i][j];
      }
   }

   cout << endl;

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cout << arr[i][j] << " ";
      }
      cout << "\n";
   }

   cout << endl;

   int x;
   cin >> x;

   bool flag = 0;
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         if (arr[i][j] == x)
         {
            cout << "Element found at: " << i << " " << j << endl;
            flag = 1;
         }
      }
   }

   cout << endl;

   if (flag == 1)
   {
      cout << "Found!" << endl;
   }
   else
   {
      cout << "Not found!" << endl;
   }

   return 0;
}
