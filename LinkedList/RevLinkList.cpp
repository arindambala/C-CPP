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

node *revItr(node *&head) // Reversing Iteratively
{
   if (head == NULL || head->next == NULL)
      return head;

   node *prev = NULL;
   node *curr = head;
   node *next;

   while (curr != NULL)
   {
      next = curr->next;
      curr->next = prev;

      prev = curr;
      curr = next;
   }
   return prev;
}

node *revRcr(node *&head) // Reversing Recursively
{
   if (head == NULL || head->next == NULL)
      return head;

   node *mhead = revRcr(head->next);
   head->next->next = head;
   head->next = NULL;

   return mhead;
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

   node *nhead = revItr(head);
   disp(nhead);

   node *ohead = revRcr(head);
   disp(ohead);
   // comment out any one function call at use

   return 0;
}
