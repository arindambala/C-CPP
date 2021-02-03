#include <iostream>
using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;

   cout << endl << endl;

   int arr1[n][m];
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cin >> arr1[i][j];
      }
   }

   cout << endl << endl;

   int o;
   cin >> o;

   cout << endl << endl;

   int arr2[m][o];
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < o; j++)
      {
         cin >> arr2[i][j];
      }
   }

   cout << endl << endl;

   int arr3[n][o];
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < o; j++)
      {
         arr3[i][j] = 0;
      }
   }

   // Multiplication

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < o; j++)
      {
         for (int k = 0; k < m; k++)
         {
            arr3[i][j] += arr1[i][k] * arr2[k][j];
         }
      }
   }

   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < o; j++)
      {
         cout << arr3[i][j] << " ";
      }
      cout << "\n";
   }

   cout << endl << endl;

   return 0;
}
