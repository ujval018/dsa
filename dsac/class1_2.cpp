/*Write a program to create a structure to store the information of n number of Employees.
Employee’s information includes data members: Emp-id, Name, Designation, basic_salary, hra
%, da%. Display the information of employees with gross salary. Use array of structure. */
#include <iostream>
#include <string>
using namespace std;

struct employee{
    string name;
    string designation;
    int basic;
    int hra;
    int da;
    
};

int main (){
    int n;
    cout<<"enter number of empolyee "<<endl;
    cin>>n;
    employee *p=new employee[n];
  
    for(int i=0;i<n;i++){
        cout<<"enter employee "<<i+1<<" details "<<endl;
        cin>>p[i].name;
        cin>>p[i].designation;
        cin>>p[i].basic;
        cin>>p[i].hra;
        cin>>p[i].da;
    }
    for(int i=0;i<n;i++){
        cout<<"details of employee "<<i+1<<" are :-"<<endl;
        cout<<"Name "<<p[i].name<<endl;
        cout<<"Designaton "<<p[i].designation<<endl;
        cout<<"Basic salary "<<p[i].basic<<endl;
        cout<<"hra "<<p[i].hra<<"%"<<endl;
        cout<<"da "<<p[i].da<<"%"<<endl;
        int gross;
        gross=p[i].basic+p[i].hra+p[i].da;   
        cout<<gross<<endl;
    }

    delete []p;
    p=nullptr;

    return 0;
}