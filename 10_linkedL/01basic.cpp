#include <iostream>
using namespace std;
struct node{
    int info;
    struct node *next;//self referential structure
};

node *createNode(int data){
    node *newNode=new node;
    newNode->info=data;
    newNode->next=nullptr;
    return newNode;
}
void create (node ** first,int size){
    int data;
    node *temp1=nullptr;
    node *temp2=nullptr;
    for (int i=1;i<=size;i++){
        cout<<"enter data\n";
        cin>>data;
        temp2=createNode(data);
        if(temp1==nullptr){
            *first =temp2;
            temp1 =temp2;
        }else{
            temp1->next=temp2;
            temp1=temp2;
        }
    }
    
}
int count(node *h1){
    int count =0;
    node *p=h1;
    while (p != nullptr)
    {
        count++;
        cout<<p->info<<"\n";
        p=p->next;
    }
    return count;
}
int main (){
    node *head;
    head=nullptr;
    create(&head,5);
    cout<<"\n"<<count(head);

    return 0;
}