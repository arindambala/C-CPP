#include <iostream>
#include <stack>

using namespace std;

void revsen(string str)
{
   stack<string> st;
   for (int i = 0; i < str.length(); i++)
   {
      string wrd = "";
      while (str[i] != ' ' && i < str.length())
      {
         wrd += str[i];
         i++;
      }

      st.push(wrd);
   }

   while (!st.empty())
   {
      cout << st.top() << " ";
      st.pop();
   }

   cout << endl;
}

int main()
{
   string str = "Hey , how are you doing ?";
   revsen(str);

   return 0;
}
