#include<iostream>

using namespace std;
int facto(int n){
     if(n>0)
        return facto(n-1)*n;
    
}


void main (){
            cout<<facto(5);
    
}