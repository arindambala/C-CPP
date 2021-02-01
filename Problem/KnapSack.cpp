#include <iostream>
using namespace std;

int knSc(int val[], int wt[], int n, int w)
{
   if(n == 0 || w == 0)
      return 0;
   
   if(wt[n-1] > w)
      return knSc(val,wt,n-1,w);

   return max(knSc(val,wt,n-1,w-wt[n-1]) + val[n-1], knSc(val,wt,n-1,w));
}

int main()
{
   int val[] = {100,50,150};
   int wt[] = {10,20,30};
   int w = 50;

   cout << knSc(val,wt,3,w) << endl;
   return 0;
}
