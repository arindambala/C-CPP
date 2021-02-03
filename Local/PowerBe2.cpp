#include <iostream>
using namespace std;

bool iPow2(int n)
{
   return (n && !(n & n - 1));
}

int main()
{
   cout << iPow2(16) << endl;

   return 0;
}
