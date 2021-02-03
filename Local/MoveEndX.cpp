#include <iostream>
using namespace std;

string moveX(string str)
{
   if(str.length() == 0)
      return "";
   
   char ch = str[0];
   string oth = moveX(str.substr(1));

   if(ch == 'x')
      return oth + ch;
   return ch + oth;
}

int main()
{
   cout << moveX("axxbdxcefxhix") << endl;

   return 0;
}
