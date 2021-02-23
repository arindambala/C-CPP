#include <iostream>
#include <stack>

using namespace std;

bool vld(string str)
{
   int len = str.length();

   stack<int> st;
   bool res = true;
   for(int i = 0; i < len; i++)
   {
      if(str[i] == '{' || str[i] == '[' || str[i] == '(')
         st.push(str[i]);
      else if(str[i] == ')')
      {
         if(!st.empty() && st.top() == '(')
            st.pop();
         else
         {
            res = false;
            break;
         }
      }
      else if(str[i] == '}')
      {
         if(!st.empty() && st.top() == '{')
            st.pop();
         else
         {
            res = false;
            break;
         }
      }
      else if(str[i] == ']')
      {
         if(!st.empty() && st.top() == '[')
            st.pop();
         else
         {
            res = false;
            break;
         }
      }
   }

   if(!st.empty())
      return false;
   
   return res;
}

int main()
{
   string str = "{[()]}";

   if(vld(str))
      cout << "Valid String: " << str;
   else
      cout << "Invalid!";

   return 0;
}
