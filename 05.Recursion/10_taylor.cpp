#include <iostream>
using namespace std;
int e(int x, int n){
    static int p=1,f=1;
    int r;
    if(n==0){
        return (1);
    }else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int ee(int x,int n){
    static int r=1;
    if(n==0){
        return r;
    }
    else{
        r*=(1+(x/n));
        return ee(x,n-1);
    }    
}
int e1(int x, int n)
{
    static int s=1;
    if(n==0)
       { return s;}
    else {s=1+x*s/n;
    return e1(x,n-1);}

}
int main(){
    cout<<e(4,3)<<endl;
    cout<<ee(4,3)<<endl;
    cout<<e1(4,3)<<endl;

    return 0;
}