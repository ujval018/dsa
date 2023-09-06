#include <iostream>
using namespace std;

void length(char str[]){
    int i=0;
    int c=0;
    while (str[i]!='\0')
    {
        c++;
        i++;
    }
    cout<<"length is "<<c<<endl;
    
}
int main (){
    char str[]="Welcome";
    cout<<str;
    length(str);
    return 0;
}