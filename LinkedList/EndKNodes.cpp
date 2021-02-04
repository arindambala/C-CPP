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

int len(node *head) // Length of the linked list
{
   int l = 0;
   node *temp = head;
   while (temp != NULL)
   {
      l++;
      temp = temp->next;
   }
   return l;
}

node *appK(node *&head, int k) // Append K nodes
{
   node *nhead;
   node *ntail;
   node *tail = head;

   int l = len(head);
   k = k % l;
   int cnt = 1;
   while (tail->next != NULL)
   {
      if (cnt == l - k)
         ntail = tail;

      if (cnt == l - k + 1)
         nhead = tail;

      tail = tail->next;
      cnt++;
   }

   ntail->next = NULL;
   tail->next = head;

   return nhead;
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
   int arr[] = {1, 2, 3, 4, 5, 6};
   for (int i = 0; i < 6; i++)
   {
      atTl(head, arr[i]);
   }
   disp(head);

   node *nhead = appK(head, 2);
   disp(nhead);

   return 0;
}
