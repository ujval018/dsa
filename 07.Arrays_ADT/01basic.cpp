#include <iostream>
#include <array.h>
using namespace std;
/*structure*/

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
         << "0. Bye Bye " << endl;

    cin >> choice;

    int index; // to take index input for function req.
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
      cout << "enter index" << endl;
      cin >> index;
      Get(arr, index);
      break;
    case 9:
      int nn;
      cout << "enter index" << endl;
      cin >> index;
      cout << "enter element" << endl;
      cin >> nn;
      Set(arr, index, nn);
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
      cout << "signing off" << endl;
      delete[] arr.A;
      arr.A = nullptr;
      exit(0);
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