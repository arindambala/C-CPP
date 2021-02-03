#include <iostream>
using namespace std;

void swap(int *a, int *b)
{

   int temp = *a;
   *a = *b;
   *b = temp;
}

int main()
{
   int a = 10;
   int *aptr = &a;

   cout << *aptr << endl;

   *aptr = 20;

   cout << a << endl;

   int arr[] = {10, 20, 30};
   cout << *arr << endl;

   int *ptr = arr;
   for (int i = 0; i < 3; i++)
   {
      cout << *ptr << endl;
      ptr++;

      cout << (*arr + i) << ' ' << *(arr + i) << endl;
   }

   int x = 2, y = 4;
   int *xptr = &x, *yptr=&y;
   swap(*xptr, *yptr);

   cout << x << ' ' << y << endl;

   return 0;
}
