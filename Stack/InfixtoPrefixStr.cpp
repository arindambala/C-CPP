#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int prcdn(char ch)
{
   if (ch == '^')
      return 3;
   else if (ch == '*' || ch == '/')
      return 2;
   else if (ch == '+' || ch == '-')
      return 1;
   else
      return -1;
}

string InToPre(string str)
{
   reverse(str.begin(), str.end());

   stack<char> st;
   string res;

   for (int i = 0; i < str.length(); i++)
   {
      if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
         res += str[i];
      else if (str[i] == ')')
         st.push(str[i]);
      else if (str[i] == '(')
      {
         while (!st.empty() && st.top() != ')')
         {
            res += st.top();
            st.pop();
         }

         if (!st.empty())
            st.pop();
      }
      else
      {
         while (!st.empty() && prcdn(st.top()) > prcdn(str[i]))
         {
            res += st.top();
            st.pop();
         }

         st.push(str[i]);
      }
   }

   while (!st.empty())
   {
      res += st.top();
      st.pop();
   }

   reverse(res.begin(), res.end());
   
   return res;
}

int main()
{
   cout << InToPre("(a-b/c)*(a/k-l)");
   return 0;
}
