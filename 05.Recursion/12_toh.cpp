#include <iostream>
using namespace std;
void toh(int n, char src, char dest,char help){
    if(n==0){
        return;
    }else
    {toh(n-1,src,help,dest);
    cout<<"move from "<<src<<" to "<<dest<<endl;
    toh(n-1,help,dest,src);
    }

}

int main(){
    toh(3,'A','C','B');
    return 0;
}