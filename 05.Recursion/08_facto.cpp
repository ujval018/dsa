#include<iostream>

using namespace std;
int facto(int n){
     if(n==0)
        {
                return (1);
        }
     else
        {
                return facto(n-1)*n;
        }
    
}


int main (){
            cout<<facto(5);
 return 0;   
}