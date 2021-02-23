#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

int pfxe(string str)
{
   stack<int> st;
   for (int i = str.length() - 1; i >= 0; i--)
   {
      if (str[i] >= '0' && str[i] <= '9')
         st.push(str[i] - '0');

      else
      {
         int opr1 = st.top();
         st.pop();
         int opr2 = st.top();
         st.pop();

         switch (str[i])
         {
         case '+':
            st.push(opr1 + opr2);
            break;
         case '-':
            st.push(opr1 - opr2);
            break;
         case '*':
            st.push(opr1 * opr2);
            break;
         case '/':
            st.push(opr1 / opr2);
            break;
         case '^':
            st.push(pow(opr1, opr2));
            break;
         default:
            cout << "Invalid!";
            break;
         }
      }
   }

   return st.top();
}

int main()
{
   cout << pfxe("-+7*45+20") << endl;

   return 0;
}
