#include <iostream>
using namespace std;
void fun2(int n);
void fun1(int n){

    if(n>0){
        cout<<n<<endl;
        fun2(n);

    }
}
void fun2(int n){
    if(n>1){
        
        fun1(n/2);
    }
}
int main (){
       fun1(20);
    return 0;
}