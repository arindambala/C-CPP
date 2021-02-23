#include<iostream>
#include<stack>
#include<math.h>

using namespace std;

int pofxe(string str)
{
   stack<int> st;
   for(int i = 0; i < str.length(); i++)
   {
      if(str[i] >= '0' && str[i] <= '9')
         st.push(str[i] - '0');

      else
      {
         int opr2 = st.top();
         st.pop();
         int opr1 = st.top();
         st.pop();

         switch(str[i])
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
               st.push(pow(opr1,opr2));
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
   cout << pofxe("46+2/5*7+") << endl;

   return 0;
}
