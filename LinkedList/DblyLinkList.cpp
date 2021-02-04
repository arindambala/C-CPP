#include <iostream>
using namespace std;

class node
{
public:
   int data;
   node *next;
   node *prev;

   node(int val)
   {
      data = val;
      next = NULL;
      prev = NULL;
   }
};

void atHd(node *&head, int val) // Insertion at head
{
   node *n = new node(val);
   n->next = head;

   if (head != NULL)
      head->prev = n;

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

   while (temp->next != NULL)
   {
      temp = temp->next;
   }

   temp->next = n;
   n->prev = temp;
}

void delHd(node *&head) // Deletion at head
{
   node *todel = head;

   head = head->next;
   head->prev = NULL;

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
   int cnt = 0;

   while (temp != NULL && cnt != pos)
   {
      temp = temp->next;
      cnt++;
   }

   temp->prev->next = temp->next;
   if (temp->next != NULL)
      temp->next->prev = temp->prev;

   delete temp;
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

int main()
{
   node *head = NULL;

   atTl(head, 1);
   atTl(head, 2);
   atTl(head, 3);
   disp(head);

   atHd(head, 4);
   disp(head);

   del(head, 1);
   disp(head);

   return 0;
}
