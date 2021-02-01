#include <iostream>
using namespace std;

void ToH(int n, char src, char des, char hlp)
{
   if(n == 0)
      return;
   
   ToH(n-1,src,hlp,des);
   cout << "MOVE FROM " << src << " TO " << des << endl;

   ToH(n-1,hlp,des,src);
}

int main()
{
   ToH(3,'A','C','B');

   return 0;
}
