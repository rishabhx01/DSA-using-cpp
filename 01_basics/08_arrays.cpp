// Basics of arrays in cpp

// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

/*
To declare an array, define the variable type, specify the name of the array followed by 
square brackets and specify the number of elements it should store: 

string cars[4];
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
*/


// Why arrays are introduced ?
// suppose you have to store 5 integers -> 1, 2, 3, 5, 7 so you'll make 5 variables to store this integers like:
/*
int main () {
  int a, b , c, d;
  cin >> a >> b >> c >> d;
  return 0;
}

Now Imagine if we have to store 5 lakh integers what will we do ?

that's how arrays are introduced if we have similar data type we can store it in a single variable so;

int arr [5];
int arr [500];
int arr [500000];
*/


// Representation of Array: 
/*
To declare an array, define the variable type, specify the name of the array followed by 
square brackets and specify the number of elements it should store.

int arr [5];
strings fruits [10];
*/



// Indexing in Arrays:
// Indexing starts from 0.
// int arr[5] so the size of array is Five and Indeces are 0, 1, 2, 3, 4.


// Accessing elements in array:
/*
int main () {
  int arr [5];
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
  cout << arr[3];
  return 0;
}
*/
