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

   cout << endl << endl;

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cout << arr[i][j] << " ";
      }
      cout << "\n";
   }

   cout << endl;
   
   return 0;
}