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

node *imrg(node *&head1, node *&head2) // Merging by Iterating
{
   node *ptr1 = head1;
   node *ptr2 = head2;
   node *dn = new node(-1); // dummy node
   node *ptr3 = dn;

   while (ptr1 != NULL && ptr2 != NULL)
   {
      if (ptr1->data < ptr2->data)
      {
         ptr3->next = ptr1;
         ptr1 = ptr1->next;
      }
      else
      {
         ptr3->next = ptr2;
         ptr2 = ptr2->next;
      }
      ptr3 = ptr3->next;
   }

   while (ptr1 != NULL)
   {
      ptr3->next = ptr1;
      ptr1 = ptr1->next;
      ptr3 = ptr3->next;
   }

   while (ptr2 != NULL)
   {
      ptr3->next = ptr2;
      ptr2 = ptr2->next;
      ptr3 = ptr3->next;
   }
   return dn->next;
}

node *rmrg(node *&head1, node *&head2) // Merging by Recursing
{
   if (head1 == NULL)
      return head1;
   if (head2 == NULL)
      return head2;

   node *dn;
   if (head1->data < head2->data)
   {
      dn = head1;
      dn->next = rmrg(head1->next, head2);
   }
   else
   {
      dn = head2;
      dn->next = rmrg(head1, head2->next);
   }
   return dn;
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
   node *head1 = NULL;
   node *head2 = NULL;

   int arr1[] = {1, 4, 5, 7};
   int arr2[] = {2, 3, 6};

   for (int i = 0; i < 4; i++)
   {
      atTl(head1, arr1[i]);
   }
   for (int i = 0; i < 3; i++)
   {
      atTl(head2, arr2[i]);
   }

   disp(head1);
   disp(head2);

   node *ihead = imrg(head1, head2);
   disp(ihead);

   cout << endl;

   node *rhead = rmrg(head1, head2);
   disp(rhead);
   // comment out any one during function call

   return 0;
}
