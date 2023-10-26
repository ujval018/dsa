//Write a program to create a single linked list of n nodes and perform the following menu
//based operations on it using function:
//i. Insert a node at specific position 
//ii. Deletion of an element from specific position
//iii. Count nodes
//iv. Traverse the linked list

#include<iostream>
using namespace std;

struct Node {
  int info;
  struct Node *next;
};

void dis(struct Node *p) {
  while (p != NULL) {
    cout<<p->info<<"->";
    p = p->next;
  }
  cout<<"END";
}
struct Node * insertAtEnd(struct Node *head, int info){
    struct Node * ptr =new struct Node;
    ptr->info = info;
    struct Node * p = head;
 
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct Node * insertAtBegin(struct Node *head, int info){
    struct Node *ptr=new struct Node;
    ptr->info=info;   
    ptr->next=head; 
    head=ptr;
    return head;
}
struct Node* deletefirst(struct Node *head){
  struct Node*ptr=head;
  head=head->next;
  free(ptr);
  return head;
}

struct Node* deleteatindex(struct Node *head,int index){
  struct Node*p=head;
  struct Node*q=head->next;
  for(int i=0;i<index-1;i++){
    p=p->next;
    q=q->next;
  }
  p->next=q->next;
  free(q);
  return head;
  }

int main() {
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;
  head =new struct Node ;
  second = new struct Node;
  third = new struct Node;
  fourth = new struct Node;

  head->info = 7;
  head->next = second;

  second->info = 23;
  second->next = third;

  third->info = 55;
  third->next = fourth;

  fourth->info = 45;
  fourth->next = NULL;
  insertAtBegin(head,2);

  
  
  dis(head);
  return 0;
}

