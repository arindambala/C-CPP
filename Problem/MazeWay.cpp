#include <iostream>
using namespace std;

int cMaze(int n, int i, int j)
{
   if(i == n-1 && j == n-1)
      return 1;
   
   if(i >= n || j >= n)
      return 0;

   return cMaze(n,i+1,j) + cMaze(n,i,j+1);

}
int main()
{
   cout << cMaze(3,0,0) << endl;

   return 0; 
}
