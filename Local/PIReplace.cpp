#include <iostream>
using namespace std;

void repPi(string str)
{
   if(str.length() == 0)
      return;

   if(str[0] == 'p' && str[1] == 'i')
   {
      cout << "3.14";
      repPi(str.substr(2));
   }

   else
   {
      cout << str[0];
      repPi(str.substr(1));
   }
}

int main()
{
   string str = "pipppiiipi";

   repPi(str);
   
   return 0;
}
