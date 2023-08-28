#include <iostream>
using namespace std;
struct Array
{ // data members of array
  int *A;
  int size;
  int length;
};
// Display function to transverse an array
void Display(struct Array &arr1)
{
  int i;
  cout<<"Array is :-";
  for (i = 0; i < arr1.length; i++)
  {
    cout << arr1.A[i] << endl;
  }
}
// Add function to add elements
void Add(struct Array &arr1, int a)
{

  arr1.A[arr1.length] = a;
  arr1.length++;
}
// Insert function to insert a function in an array;
bool Insert(struct Array &arr1, int n, int a)
{
  if (n < 0)
  {
    return false;
  }
  else if (n > arr1.length)
  {
    return false;
  }
  else
  {
    for (int i = arr1.length; i > n; i++)
    {
      arr1.A[arr1.length] = arr1.A[arr1.length - 1];
    }
    arr1.A[n] = a;
  }
}
// Delete function to delete an element form an array
bool Delete(struct Array &arr1, int n)
{
  if (n < 0)
  {
    return false;
  }
  else if (n > arr1.length)
  {
    return false;
  }
  else
  {
    int x = arr1.A[n];
    for (int i = n; i < arr1.length; i++)
    {
      arr1.A[i] = arr1.A[i + 1];
    }
    arr1.length--;
    cout << x << " deleted" << endl;
  }
}
//linear search
void Lsearch(struct Array &arr1, int key){
  
  for (int i = 0; i < arr1.length; i++)
  {
    if (arr1.A[i]==key)
    {
      cout<<key<<"found at "<<i<<endl;
    }else 
    {
      cout<<key<<"not found"<<endl;
    }
  }
  
}
//Binary search
void Bsearch(struct Array &arr1, int key){
  
}

int main()
{
  struct Array arr; // declaration of data type
  int i;
  cout << "enter size of array" << endl;
  cin >> arr.size;
  arr.A = new int[arr.size];
  cout << "enter length" << endl;
  cin >> arr.length;
  //taking basic array input
  cout << "enter array" << endl;
  for (i = 0; i < arr.length; i++)
  {
    cin >> arr.A[i];
  }
  int choice;
  cout<<"menu :- "<<endl
  <<"1. Display"<<endl
  <<"2. Add"<<endl
  <<"3. Insert"<<endl
  <<"4. Delete"<<endl;
  while (true)
  {
    cin>>choice;
    switch (choice)
    {
    case 1:
      Display(arr);
      break;
    case 2:
      int n;
      cout<<"enter number"<<endl;
      cin>>n;
      Add(arr, n);
      break;
    case 3:
      int index;
      int n;
      cout<<"enter index "<<endl;
      cin>>index;
      cout<<"enter number "<<endl;
      cin>>n;
      Insert(arr, index, n);
      break;
    case 4:
      int index;
      cout<<"enter index "<<endl;
      cin>>index;
      Delete(arr,index);
      break;
    case 5:
      Display(arr);
      break;
    default:
      break;
    }
  }

  delete[] arr.A;
  arr.A = nullptr;
  return 0;
}