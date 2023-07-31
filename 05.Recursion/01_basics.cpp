#include <iostream>
using namespace std;
int fun(int n){
    if(n>0){
        printf("%d\n",n);
        fun(n-1);
        printf("%d\n",n);
    }
    return 0;
}

int main(){
    fun(3);
    return 0;
}