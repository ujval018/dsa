#include <iostream>
using namespace std;

void tail(int n){
    if(n>0){
        printf("%d \n",n);
        tail(n-1);
    }
}
void head(int n){
    if(n>0){
        head(n-1);
        printf("%d \n",n);
    }
}
int main (){

    tail(3);
    head(5);
    return 0;
}