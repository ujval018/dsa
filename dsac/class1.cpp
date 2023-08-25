//Write a program to read two numbers and compare the numbers using function call by address.
#include <iostream>
using namespace std;
void compare(int &a, int &b){
    int *p1=&a;
    int *p2=&b;
    if(*p1>*p2){
        cout<<*p1<<" is greater than "<<*p2;
    }else  if(*p2>*p1){
        cout<<*p2<<" is greater than "<<*p1;
    }else  if(*p1=*p2){
        cout<<"given numbers are equal";
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    int *p=&m;
    int *pp=&n;
    compare(*p ,*pp);
    return 0;
}