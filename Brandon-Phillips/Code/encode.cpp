#include<iostream>      //always include
#include<stdlib.h>
#include<stdio.h>
#include<string.h>      //string class


using namespace std;    //always include



//Insertion Sort
void insertionSort(char arr[],int n)
{
    //initialize values 
    char key;
    int j;
    int i;

    //loop 
    for(int i = 1; i < n; i++)          
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
 

void leftShift(char arr[], int size)
{            
int index = 0; 
char first;                  //temp char to take first value
int count = 0;               

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


int curr = 0;                           //current value index
char *tempA = new char[size];           //pointer array

for(int x = 0; x <= size; x++)
{
    tempA[x] = arr[x];              //set temp array values to arr values
}

/*  TESTING FOR tempA value transfer
cout << "\n Temp Array: \n";
for(int x = 0; x <= size; x++)
{
    cout << tempA[x] << " ";
}
*/

//sorts the array before it counts recurrences
insertionSort(tempA, size);

//prints last index
cout << index << endl; 
for(int x = 0; x <= size; x++)      //iterate through the entire array
{   
    int j;
    for(j = 0; j < x; j++)          //iterate through the array for x
    {
        count = 1;  
        if(tempA[x] == tempA[j])      //if the element matches count increments
        {
            count++;
            break;                //breaks the loop
        }
    }
    if(j == x)                  //if j is in the array it increments 
    {
        tempA[curr++] = tempA[j] ;
        count = 1;
    }
        
    //removeDuplicate(tempA);
    cout  << count << " " << tempA[j] << " ";
}

}//end of leftShift





//main to use at submit

int main(int argc, char** args) {
    for(int i = 0; i <argc; i++) {
        printf("%d: %s\n", i, args[i]);
    } 
    if(strcmp(args[1], "insertion") ==0 ) ;              //if insertion it equals zero
    else
    {
        return 1;
    }
    


//testing main
//int main() {

string  sTxt;                                //string to store text

while(cin >> sTxt)                          //store input into string sTxt, cin only will get the first word not the whole line
{
    getline(cin,sTxt);
}

int sSize = sTxt.length();                      //assign the size of sTxt

//Convert sTxt into a char[]
char* cTxt = new char[sSize];                         //create a char array with the size of sTxt
    for(int i = 0; i < sSize; i++)                   //adds sTxt to cTxt[]
    {
        cTxt[i] = sTxt[i];                               //iterates through sTxt and adds each letter individually
    }    


leftShift(cTxt, sSize);     //this left shifts and counts the numbers 

/*for(int x = 0; x <= sSize; x++){
cout << cTxt << ;
}*/

//insertionSort call
//insertionSort(cTxt,sSize);

/*
//For Testing: prints the array
cout << "\n Sorted Array: \n";
for(int i = 0; i < sSize; i++)                    //iterate the array starting with the max size 1 less than cTxt
    {
    cout << cTxt[i];
    }
    */
    return 0;
}



