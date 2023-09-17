#include<iostream>
using namespace std;

int add(int n){
                if (n>0)
                {
                    return add(n-1)+n;
                }
                

}

int main (){
    cout<<add(5);

    return 0;
}