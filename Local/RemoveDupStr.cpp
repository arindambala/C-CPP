#include <iostream>
using namespace std;

string remDup(string str)
{
   if(str.length() == 0)
      return "";

   char ch = str[0];
   string oth = remDup(str.substr(1));

   if(ch == oth[0])
      return oth;

   return (ch + oth);
}

int main()
{
   cout << remDup("aaaaabbbbeeeddddccccc") << endl;

   return 0;
}
