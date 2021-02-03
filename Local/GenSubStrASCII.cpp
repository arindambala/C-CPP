#include <iostream>
using namespace std;

void subseq(string str, string oth)
{
   if(str.length() == 0)
   {
      cout << oth << endl;
      return;
   }

   char ch = str[0];
   int asc = ch;
   string ros = str.substr(1);

   subseq(ros,oth);
   subseq(ros, oth+ch);
   subseq(ros, oth + to_string(asc));
}

int main()
{
   subseq("ABC","");

   return 0;
}
