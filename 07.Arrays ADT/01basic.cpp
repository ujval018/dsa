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
  cout << "Array is :-";
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
int Insert(struct Array &arr1, int n, int a)
{
  if (n < 0)
  {
    return 0;
  }
  else if (n > arr1.length)
  {
    return 0;
  }
  else
  {
    for (int i = arr1.length; i >= n; i--)
    {
      arr1.A[i] = arr1.A[i - 1];
    }
    arr1.A[n] = a;
  }
  return 0;
}
// Delete function to delete an element form an array
int Delete(struct Array &arr1, int n)
{
  if (n < 0)
  {
    return 0;
  }
  else if (n > arr1.length)
  {
    return 0;
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
    return 0;
  }
}
// linear search
void Lsearch(struct Array &arr1, int key)
{

  for (int i = 0; i < arr1.length; i++)
  {
    if (arr1.A[i] == key)
    {
      cout << key << "found at " << i << endl;
    }
    
  }
      cout << key << "not found" << endl;
    
}
// Binary search
int Bsearch(struct Array &arr1, int key)
{
  int l=0;
  int h=arr1.length-1;
  int mid;
    while(l<h){
      mid=(l+h)/2;
      if(arr1.A[mid]==key){
        cout<<key <<" found at "<<mid<<endl;
        return 0;
      }
      else if(arr1.A[mid]<key){
        l=mid+1;
      }else if(arr1.A[mid]>key){
        h=mid-1;
      }
    }
    cout<<"not found"<<endl;
    return 0;
}
//reversing an array
void Reverse(struct Array &arr1){
  struct Array arrr;
  arrr.size=arr1.size;
  arrr.length=arr1.length;
  arrr.A=new int[arrr.size];
  for(int i =0,j=arr1.length-1; i<arr1.length;i++,j--){
      arrr.A[i]=arr1.A[j];
  }
  for(int i=0;i<arr1.length;i++){
    arr1.A[i]=arrr.A[i];
  }
  delete[] arrr.A;
      arrr.A = nullptr;
  cout<<"reversed"<<endl;
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
  // taking basic array input
  cout << "enter array" << endl;
  for (i = 0; i < arr.length; i++)
  {
    cin >> arr.A[i];
  }
  int choice;
  
  while (true)
  {
    cout << "menu :- " << endl
       << "1. Display" << endl
       << "2. Add" << endl
       << "3. Insert" << endl
       << "4. Delete" << endl
       <<"5. Linear Search"<<endl
       <<"6. Binary Search"<<endl
       <<"7. Reverse"<<endl;

    cin >> choice;
    switch (choice)
    {
    case 1:
      Display(arr);
      break;
    case 2:
      int n;
      cout << "enter number" << endl;
      cin >> n;
      Add(arr, n);
      break;
    case 3:
      int index1;
      int m;
      cout << "enter index " << endl;
      cin >> index1;
      cout << "enter number " << endl;
      cin >> m;
      Insert(arr, index1, m);
      break;
    case 4:
      int index;
      cout << "enter index " << endl;
      cin >> index;
      Delete(arr, index);
      break;
    case 5:
      int key;
      cout<<"enter key"<<endl;
      cin>>key;
      Lsearch(arr,key);
      break;
    case 6:
      int key1;
      cout<<"enter key"<<endl;
      cin>>key1;
      Bsearch(arr,key1);
      break;
    case 7:
      Reverse(arr);
      break;
    default:
      cout<<"invalid choice";
      delete[] arr.A;
      arr.A = nullptr;
      return 0;
      break;
    }
  }

  delete[] arr.A;
  arr.A = nullptr;
  return 0;
}