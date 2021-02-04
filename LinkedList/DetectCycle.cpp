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

void mkcyc(node *&head, int pos) // Making cycle
{
   node *temp = head;
   node *stnode;

   int cnt = 1;
   while (temp->next != NULL)
   {
      if (cnt == pos)
         stnode = temp;
      temp = temp->next;
      cnt++;
   }
   temp->next = stnode;
}

bool dtcyc(node *&head) // Detecting cycle
{
   node *slow = head;
   node *fast = head;

   while (fast != NULL && fast->next != NULL)
   {
      slow = slow->next;
      fast = fast->next->next;

      if (fast == slow)
         return true;
   }
   return false;
}

void rmcyc(node *&head) // Removing cycle
{
   node *slow = head;
   node *fast = head;

   do
   {
      slow = slow->next;
      fast = fast->next->next;
   } while (slow != fast);

   fast = head;
   while (slow->next != fast->next)
   {
      slow = slow->next;
      fast = fast->next;
   }
   slow->next = NULL;
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
   atTl(head, 4);
   atTl(head, 5);
   atTl(head, 6);
   disp(head);

   mkcyc(head, 3);

   cout << dtcyc(head) << endl;

   rmcyc(head);

   cout << dtcyc(head) << endl;
   disp(head);

   return 0;
}
