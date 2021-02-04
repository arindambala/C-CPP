#include <iostream>
using namespace std;

class node
{
public:
   int data;
   node *next;

   node(int val)
   {
      data = val;
      next = NULL;
   }
};

void atHd(node *&head, int val) // Insertion at head
{
   node *n = new node(val);
   n->next = head;
   head = n;
}

void atTl(node *&head, int val) // Insertion at tail
{

   node *n = new node(val);

   if (head == NULL)
   {
      head = n;
      return;
   }

   node *temp = head;
   while (temp->next != NULL)
   {
      temp = temp->next;
   }
   temp->next = n;
}

void delatHd(node *&head) // Deletion at head
{
   node *todel = head;
   head = head->next;

   delete todel;
}

void del(node *&head, int val) // Deletion
{
   if (head == NULL) // corner case
      return;

   if (head->next == NULL) // corner case
   {
      delatHd(head);
      return;
   }

   node *temp = head;
   while (temp->next->data != val)
   {
      temp = temp->next;
   }

   node *todel = temp->next;
   temp->next = temp->next->next;

   delete todel;
}

void disp(node *head)
{
   node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << " -> ";
      temp = temp->next;
   }
   cout << "NULL" << endl;
}

bool srch(node *head, int key) // Searching
{
   node *temp = head;
   while (temp != NULL)
   {
      if (temp->data == key)
         return key;
      temp = temp->next;
   }
   return false;
}

int main()
{
   node *head = NULL;

   atTl(head, 1);
   atTl(head, 2);
   atTl(head, 3);
   disp(head);

   atHd(head, 4);
   disp(head);

   cout << srch(head, 3) << endl;

   del(head, 2);
   disp(head);

   delatHd(head);
   disp(head);

   return 0;
}
