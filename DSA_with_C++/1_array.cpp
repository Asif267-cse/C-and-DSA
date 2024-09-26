#include<iostream>
using namespace std;

int main ()
{
    int arr[10];  // Use a smaller array, since you're only working with 10 numbers

    cout << "Enter 10 numbers: ";  // Prompt for input

    // Input loop (0-based index)
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Output loop (0-based index)
    cout << "You entered: ";
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    
int arr2[5]= {1,2,3,4,5}; // another way of intialization
   for(int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
  return 0;
}

