#include <iostream>
using namespace std;

class Student
{
   string dept;

public:
   string name;
   int age;
   bool gender;

   void setDept(string str)
   {
      dept = str;
   }

   void disp()
   {
      cout << "Name = ";
      cout << name << endl;

      cout << "Age = ";
      cout << age << endl;

      cout << "Gender = ";
      cout << gender << endl;

      cout << "Department = ";
      cout << dept << endl;

      cout << endl;
   }
};

int main()
{
   Student arr[3];
   for (int i = 0; i < 3; i++)
   {
      string dept;

      cout << "Name = ";
      cin >> arr[i].name;

      cout << "Age = ";
      cin >> arr[i].age;

      cout << "Gender = ";
      cin >> arr[i].gender;

      cout << "Department = ";
      cin >> dept;
      arr[i].setDept(dept);

      cout << endl;
   }

   for (int i = 0; i < 3; i++)
   {
      arr[i].disp();
   }

   return 0;
}
