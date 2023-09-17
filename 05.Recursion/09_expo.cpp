#include<iostream>
#include<math.h>
using namespace std;

double pow(double m,int n){
    if (n==0)
    {
        return 1;
    }
    else if(n>0)
    {
        return pow(m,n-1)*m;
    }else if(n<0)
    {
        return pow(1/m,n-1)*1/m;
    }
    
    
}

int main (){
        cout<<pow(5,-1);
    return 0;
}