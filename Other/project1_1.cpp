#include<iostream>      //always include
#include<stdlib.h>
#include<stdio.h>
#include<string.h>      //string class


using namespace std;    //always include


// read input from stdin and store word or sentence into a string var
// line feed char denoting the end of string (careful for windows end lines)
// after the store do a left shift operation to each char for length - 1 iterations
// we store each left shift into an array with element[0] being oringinal string until element[length-1]
// sort using compare() method to order each element of the array of strings in increasing/decreasing order



//numbers before the chars indicate the number of repeated chars ss = 2 s
//use str.compare() to sort the full list when done


//Insertion Sort
void insertionSort(char arr[],int n)
{
    //initialize values 
    char key;
    int j;
    int i;
    //n = sizeof(arr);
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
} //end of insertionSort




int i = 0;                                  //variable used in for loops
/*
int main(int argc, char** args) {
    for(int i = 0; i <argc; i++) {
        printf("%d: %s\n", i, args[i]);
    } 
    if(strcmp(argv[1], "insertion") ==0 )               //if insertion it equals zero
    */


int main(){

//cin >> sortType; 
string sortType;

string  sTxt;                                //string to store text
cout << "Enter a word or sentence \n";      //ask for input

getline(cin, sTxt);                          //store input into string sTxt, cin only will get the first word not the whole line

int n = sTxt.length();                      //assign the size of sTxt


char cTxt[n + 1];                           //create a char array with the size of sTxt

for(i = 0; i < sizeof(cTxt); i++)                   //adds sTxt to cTxt[]
{
    cTxt[i] = sTxt[i];                               //iterates through sTxt and adds each letter individually
    cout << "["<< i <<"] " << cTxt[i] << " ";     //print sTxt for testing purposes
}

cout << "\n" << "\n Size of cTxt: " << n << "\n";


//left shift stuff
char temp = cTxt[0];                        //set temp as the first element

int x;
int index = 0;
char newArray[n+1];

//do a while loop here?
//while(x >= n){
    
for(i = 0; i < n-1; i++)                    //iterate the array starting with the max size 1 less than cTxt
{
    cTxt[i] = cTxt[i+1];                    //In each iteration it sets the current to the element on the right (left shift)
    //string *tempTxt = &cTxt[i];
    //tempTxt[i] = cTxt[i];
    index++;
    for(int y = 0; y <= n-1; y++){
        cout << "Iteration: [" << y << "] " << cTxt[y];

        //newArray[i] = cTxt[i];
    }
}

//x++;
//}



//insertionSort(cTxt, n);

//newArray[i] = temp;
cTxt[i] = temp;                         //last element set to temp


//print out the array
cout <<"\nSorrted array \n";

for(int i = 0; i<n +1 ; i++)                   //print array
{   
   // for (int y = 0; y < n -1; y++)
    //{
    //cout << newArray[i];
    cout << cTxt[i];                      //print element each iteration
  //  }
}

return 0;

} //end of main

