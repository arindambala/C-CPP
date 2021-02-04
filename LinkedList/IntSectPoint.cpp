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

int len(node *head)
{
   int l = 0;
   node *temp = head;
   while (temp != NULL)
   {
      temp = temp->next;
      l++;
   }
   return l;
}

void ntSc(node *&head1, node *&head2, int pos) // Intersection
{
   node *temp1 = head1;
   pos--;
   while (pos--)
   {
      temp1 = temp1->next;
   }

   node *temp2 = head2;
   while (temp2->next != NULL)
   {
      temp2 = temp2->next;
   }
   temp2->next = temp1;
}

int ntScp(node *&head1, node *&head2) // Intersection point
{
   int l1 = len(head1);
   int l2 = len(head2);

   int diff = 0;
   node *ptr1; // Longer linked list
   node *ptr2;

   if (l1 > l2)
   {
      diff = l1 - l2;
      ptr1 = head1;
      ptr2 = head2;
   }
   else
   {
      diff = l2 - l1;
      ptr1 = head2;
      ptr2 = head1;
   }

   while (diff)
   {
      ptr1 = ptr1->next;
      if (ptr1 == NULL)
         return -1;

      diff--;
   }

   while (ptr1 != NULL && ptr2 != NULL)
   {
      if (ptr1 == ptr2)
         return ptr1->data;
      ptr1 = ptr1->next;
      ptr2 = ptr2->next;
   }
   return -1;
}

int main()
{
   node *head1 = NULL;
   int arr[] = {1, 2, 3, 4, 5, 6};
   for (int i = 0; i < 6; i++)
   {
      atTl(head1, arr[i]);
   }

   node *head2 = NULL;
   atTl(head2, 9);
   atTl(head2, 10);

   ntSc(head1, head2, 3);
   disp(head1);
   disp(head2);

   cout << ntScp(head1, head2) << endl;

   return 0;
}
