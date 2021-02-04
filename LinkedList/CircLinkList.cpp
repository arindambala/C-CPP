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
   if (head == NULL)
   {
      n->next = n;
      head = n;
      return;
   }

   node *temp = head;
   while (temp->next != head)
   {
      temp = temp->next;
   }

   temp->next = n;
   n->next = head;
   head = n;
}

void atTl(node *&head, int val) // Insertion at tail
{
   if (head == NULL)
   {
      atHd(head, val);
      return;
   }

   node *n = new node(val);
   node *temp = head;

   while (temp->next != head)
   {
      temp = temp->next;
   }

   temp->next = n;
   n->next = head;
}

void delHd(node *&head) // Deletion at head
{
   node *temp = head;
   while (temp->next != head)
   {
      temp = temp->next;
   }

   node *todel = head;
   temp->next = head->next;
   head = head->next;

   delete todel;
}

void del(node *&head, int pos) // Deletion
{
   if (pos == 1)
   {
      delHd(head);
      return;
   }

   node *temp = head;
   int cnt = 1;
   while (cnt != pos - 1)
   {
      temp = temp->next;
      cnt++;
   }

   node *todel = temp->next;
   temp->next = temp->next->next;

   delete todel;
}

void disp(node *head)
{
   node *temp = head;
   do
   {
      cout << temp->data << " ";
      temp = temp->next;
   } while (temp != head);
   cout << endl;
}

int main()
{
   node *head = NULL;
   atTl(head, 1);
   atTl(head, 2);
   atTl(head, 3);
   atTl(head, 4);
   disp(head);

   atHd(head, 5);
   disp(head);

   del(head,1);
   disp(head);

   return 0;
}
