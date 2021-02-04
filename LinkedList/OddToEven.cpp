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

void oddEven(node *&head) // Even nodes after odd ones
{
   node *odd = head;
   node *even = head->next;
   node *evbgn = even;

   while (odd->next != NULL && even->next != NULL)
   {
      odd->next = even->next;
      odd = odd->next;
      even->next = odd->next;
      even = even->next;
   }

   odd->next = evbgn;
   if (odd->next != NULL)
      even->next = NULL;
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

   oddEven(head);
   disp(head);

   return 0;
}
