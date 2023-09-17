#include<iostream>
using namespace std;
int nested(int n){
    if(n>1){
        cout<<n<<endl;
        nested(nested(n/10));
    }


}

int main(){
        nested(100);
    return 0;
}