/*Write a program to create an array of n elements using dynamic memory allocation.
Calculate sum of all the prime elements of the array using function and de-allocate the memory
of the array after its use.*/
#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter length";
    cin>>n;
    int *p=new int[n];
    int sum=0;
    cout<<"enter array";
    for (int i=0; i<n; i++){
        cin>>p[i];
    }
    for (int i=0; i<n; i++){
        sum+=p[i];
    }
    cout<<sum;
    delete []p;
    p=nullptr;
    return 0;
}