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

node *revKds(node *&head, int k) // Reversing k nodes
{
   node *prev = NULL;
   node *curr = head;
   node *next;

   int cnt = 0;
   while (curr != NULL && cnt < k)
   {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
      cnt++;
   }

   if (next != NULL)
      head->next = revKds(next, k);

   return prev;
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

   int k;
   cin >> k;

   node *nhead = revKds(head, k);
   disp(nhead);

   return 0;
}
