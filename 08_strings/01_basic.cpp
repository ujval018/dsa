#include <iostream>
using namespace std;

int length(char str[]){
    int i=0;
    int c=0;
    while (str[i]!='\0')
    {
        c++;
        i++;
    }
    return c;
}
int main (){
    char str[]="Welcome";
    cout<<str;
    cout<<length(str);
    return 0;
}