#include<iostream>
using namespace std;
void fun(int n){
    static int x=10;
    if(n==0){
        return;
    }
    else
    {
        fun(n-1)+x;
        x--;
        cout<<x<<endl;
         
    }
    return;
}
int main(){
    fun(5);
   return 0;
}