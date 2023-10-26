#include <iostream>
using namespace std;
struct node{
    int info;
    struct node *next;//self referential structure
};
int count(node *h1){
    int count =0;
    node *p=h1;
    while (p != 0)
    {
        count++;
        p=p->next;
    }
    return count;
}

int main (){
    node *head;
    head= new node;
    head->info=1;
    head->next= new node;
    head->next->info=2;
    head->next->next=0;
    cout<<count(head);

    return 0;
}