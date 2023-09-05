#include <iostream>
using namespace std;
/*structure*/
struct Array
{ // data members of array
  int *A;
  int size;
  int length;
};
///////////////////////swap function//////////////////////////////////
void swap(int *p1,int *p2){
  int temp;
  temp=*p1;
  *p1=*p2;
  *p2=temp;
}
////////////////////////// Display function to transverse an array/////////////////////////
void Display(struct Array &arr1)
{
  int i;
  cout << "Array is :-"<<endl;
  for (i = 0; i < arr1.length; i++)
  {
    cout << arr1.A[i] << endl;
  }
}
//////////////////////////////// Add function to add elements////////////////////////////
void Add(struct Array &arr1, int a)
{

  arr1.A[arr1.length] = a;
  arr1.length++;
}
////////////////// Insert function to insert a function in an array;////////////////////
int Insert(struct Array &arr1, int n, int a)
{//check if the given index n is in range
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
///////////////// Delete function to delete an element form an array
int Delete(struct Array &arr1, int n)
{//check if the given index n is in range
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
///////////////////////////////// linear search///////////////////////////////////////////
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
////////////////////////////////////// Binary search//////////////////////////////////
int Bsearch(struct Array &arr1, int key)
{
  int l = 0;
  int h = arr1.length - 1;
  int mid;
  while (l < h)
  {
    mid = (l + h) / 2;
    if (arr1.A[mid] == key)
    {
      cout << key << " found at " << mid << endl;
      return 0;
    }
    else if (arr1.A[mid] < key)
    {
      l = mid + 1;
    }
    else if (arr1.A[mid] > key)
    {
      h = mid - 1;
    }
  }
  cout << "not found" << endl;
  return 0;
}
//////////////////////////////////// reversing an array////////////////////////////////
void Reverse(struct Array &arr1)
{
  struct Array arrr;
  arrr.size = arr1.size;
  arrr.length = arr1.length;
  arrr.A = new int[arrr.size];
  for (int i = 0, j = arr1.length - 1; i < arr1.length; i++, j--)
  {
    arrr.A[i] = arr1.A[j];
  }
  for (int i = 0; i < arr1.length; i++)
  {
    arr1.A[i] = arrr.A[i];
  }
  delete[] arrr.A;
  arrr.A = nullptr;
  cout << "reversed" << endl;
}
//////////////////////////////////// reversing an array////////////////////////////////
void reverse(struct Array &arr1){
  for(int i =0, j=arr1.length-1;i<arr1.length/2,j>i;i++,j--){
    int temp;
    temp=arr1.A[i];
    arr1.A[i]=arr1.A[j];
    arr1.A[j]=temp;
  }
  cout << "reversed" << endl;
}
///////////////////////////////////////////GET/////////////////////////////////////////
void Get(struct Array &arr1,int n){
  cout<<arr1.A[n];
}
///////////////////////////////////////////SET/////////////////////////////////////////
void Set(struct Array &arr1, int index, int n){
  arr1.length+=1;
  for(int i=arr1.length-1 ; i>index;i--){
    arr1.A[i]=arr1.A[i-1];
  }
  arr1.A[index]=n;
  cout<<"element placed"<<endl;
}
///////////////////////////////////////////MAX/////////////////////////////////////////
void Max(struct Array &arr1){
  int max=0;
  for(int i=0; i<arr1.length;i++){
    if(max<arr1.A[i]){
      max=arr1.A[i];
    }
  }
  cout<<"max value of the element in the array is "<<max<<endl;
}
///////////////////////////////////////////MIN/////////////////////////////////////////
void Min(struct Array &arr1){
  int min=0;
  for(int i=0; i<arr1.length;i++){
    if(min>arr1.A[i]){
      min=arr1.A[i];
    }
  }
  cout<<"min value of the element in the array is "<<min<<endl;
}

///////////////////////////////////////////SUM/////////////////////////////////////////
void Sum(struct Array &arr1){
  int sum=0;
  for(int i=0 ;i<arr1.length;i++){
    sum+=arr1.A[i];
  }
  cout<<"sum is "<<sum<<endl;
}

////////////////////////////////////////MERGE/////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////MAIN/////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
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
         << "5. Linear Search" << endl
         << "6. Binary Search" << endl
         << "7. Reverse" << endl
         << "8. Get" << endl
         << "9. Set" << endl
         << "10. Max" << endl
         << "11. Min" << endl
         << "12. Sum" << endl
         <<"0. Bye Bye "<<endl;

    cin >> choice;
    
    int index;//to take index input for function req.
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
      int index;
      int m;
      cout << "enter index " << endl;
      cin >> index;
      cout << "enter number " << endl;
      cin >> m;
      Insert(arr, index, m);
      break;
    case 4:
      cout << "enter index " << endl;
      cin >> index;
      Delete(arr, index);
      break;
    case 5:
      int key;
      cout << "enter key" << endl;
      cin >> key;
      Lsearch(arr, key);
      break;
    case 6:
      int key1;
      cout << "enter key" << endl;
      cin >> key1;
      Bsearch(arr, key1);
      break;
    case 7:
      reverse(arr);
      break;
    case 8:
      cout<<"enter index"<<endl;
      cin>>index;
      Get(arr,index);
      break;
    case 9:
      int nn;
      cout<<"enter index"<<endl;
      cin>>index;
      cout<<"enter element"<<endl;
      cin>>nn;
      Set(arr,index,nn);
      break;
    case 10:
      Max(arr);
      break;
    case 11:
      Min(arr);
      break;
    case 12:
      Sum(arr);
      break;
    case 0:
      cout<<"signing off"<<endl;
      delete[] arr.A;
      arr.A = nullptr;
      exit (0);
      break;
    default:
      cout << "invalid choice";
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