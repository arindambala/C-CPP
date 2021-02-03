#include <iostream>
using namespace std;

void rev(string str)
{
   if(str.length() == 0)
      return;
   
   string ros = str.substr(1);
   rev(ros);

   cout << str[0];
}

int main()
{
   string str = "MADNIRA";
   rev(str);

   return 0;
}
