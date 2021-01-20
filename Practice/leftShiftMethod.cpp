#include<iostream>      //always include
#include<stdlib.h>
#include<stdio.h>
#include<string.h>      //string class

using namespace std;

void leftShift(char arr[], int size)
{
char newTxt[size][size]; 
char temp = arr[0];
int index = 0; 
char first;

for(int x = 0; x <= size-2; x++)
{
index++;
    char first = arr[0];
    for(int i = 0; i <= size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size -1] = first;
}

cout << "\nLast index: " << index << endl; 
for(int x = 0; x <= size; x++)
{
    cout << arr[x];
}

}



//Sorting methods
/*void insertionSort(string* arr[], int n)
{
    //initialize values 
    string key;
    int j;
    int i;
    n = arr.length();
    cout << "Insertion sort arr size: " << n << endl;
    //loop 
    for(int i = 1; i < n; i++)          //5 because the array is hardcoded as 5 and it will run from 1 to 4 because we run from n-1
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
} //end of insertionSort*/