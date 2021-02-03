#include <iostream>
using namespace std;

void nPrStr(string str, string oth)
{
   if(str.length() == 0)
   {
      cout << oth << endl;
      return;
   }

   for(int i=0; i < str.length(); i++)
   {
      char ch = str[i];
      string ros = str.substr(0,i) + str.substr(i+1);

      nPrStr(ros, oth+ch);
   }
}

int main()
{
   nPrStr("ABC","");

   return 0;
}
