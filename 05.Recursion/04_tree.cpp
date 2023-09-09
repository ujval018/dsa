#include <iostream>
using namespace std;

void tree(int n){
            if(n>0){
                    cout<<n<<endl;
                    tree(n-1);  
                    
                    tree(n-1);  
            }

}

int main (){
    tree(2);

    return 0;
}