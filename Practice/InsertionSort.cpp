#include <iostream>
using namespace std;

//pesudo code
/*
declare variables - i, key, j
loop : 1 to n-1     //outer loop
    key = a[i];
    j = i -1;
    loop (j >= 0 && arr[j] > key)   //inner loop
        arr[j + 1]= arr [j];
        j = j-1;
        end loop    //inner loop
    arr[j + 1] = key;
end loop    //outer loop
*/

void insertionSort(int arr[])
{
    //initialize values
    int j = 0;
    int key;

    //loop 
    for(int i = 1; i < 5; i++)          //5 because the array is hardcoded as 5 and it will run from 1 to 4 because we run from n-1
    {
        key = arr[i];   //picking an element
        j = i - 1;      //will make j the element to the left of the key (we compare the key)

        while(j >= 0 && arr[j] > key)   //check to see if j index position is zero or greater than 0 and that arr[j] is larger than the key 
        {
            arr[j+1] = arr[j];          //shift the larger elements one to the right (iterate through ascending order)
            j = j - 1;                  //set j index to the value to the left until it reaches the key or 0 (decrementing)
        }
        arr[j + 1] = key; 
    }
} //end of insertionSort




int main(){

//initialization
int myArray[5];         //initialize myArry
cout << "Enter 5 integers in any order" << endl;

//add to array
for(int i = 0; i < 5; i++) //loops to 5 so we can get 5 digits
{
    cin >> myArray[i];  //adds values to the array in position i 
}

//print before sorting
cout << "Before Sorting" << endl;
for(int i = 0; i < 5; i++) //loops to 5 so we can get 5 digits
{
    cout << myArray[i] << ", ";  //prints value and a comma between 
}

//Sorting
insertionSort(myArray);     //call to insertion sort on myArry

//print out sorted array
cout << endl << "After Sorting" << endl;
for(int i = 0; i < 5; i++) //loops to 5 so we can get 5 digits
{
    cout << myArray[i] << ", ";  //prints value and a comma between 
}

    return 0;
} //end of main