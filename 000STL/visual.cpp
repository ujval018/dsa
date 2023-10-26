#include<iostream>
using namespace std;
struct Array
{ 
  int *A;
  int size;
  int length;
};
void visual(struct Array &arr){

        for(int i=0;i<arr.length;i++)
        {
                cout<<"["<<arr.A[i]<<"]";
            }

}
// |
int main(){
    struct Array arr; // declaration of data type
  int i;
  cout << "enter size of array" << endl;
  cin >> arr.size;
  arr.A = new int[arr.size];
  cout << "enter length" << endl;
  cin >> arr.length;
  // taking basic array input
  cout << "enter array" << endl;
  for (i = 0; i < arr.length; i++)
  {
    cin >> arr.A[i];
  }
  
    visual(arr);
    
    
    return 0;
}