#include<iostream>      //always include
#include<stdlib.h>
#include<stdio.h>
#include<string.h>      //string class

using namespace std;

void countLetters(char arr2[], int count[])
{
int size = sizeof(arr2);

for(int i = 0; i < size; i++)
{
    if(arr2[i] <= size)
    {
        count[arr2[i]]++;
    }
}

for(int x = 0; x <= size+1; x++)
{
   // cout << "char: " << arr2[x] << " number of times: " << count[x] << endl;
}
}//end countLetters


int count = 0;
char *removeDuplicate(char str[], int size)
{   
    //index of in the modified string
    int index = 0;

    //traverse all elements
    for(int x = 0; x < size; x++)
    {
        //see if str[x] is present
        int j;
        for(j = 0;  j < x; j++)
        {
            if(str[x] == str[j])
            count++;
            break;
        }

        //if it is not, then add it to the result
        if (j == x)
        {
            str[index++] = str[x];
        }
    }
    return str;
}


void leftShift(char arr[], int size)
{
char newTxt[size]; 
//char temp = arr[0];         //set temp equal to first element
int index = 0;              //index for iteration #
char first;                 //initializae first char in array
int count = 0;              //count for counting occurence of element
//char tempArr[size];

for(int x = 0; x <= size-2; x++)
{
index++;                                //increment the index after each shift
    char first = arr[0];
    for(int i = 0; i <= size-1; i++)
    {
        arr[i] = arr[i+1];              //set arr[i] to element on right
    }
    arr[size -1] = first;               //sets first element as last
}

cout << "\n";
for(int x = 0; x <= size; x++)
{
    cout << arr[x] << "\n ";
}
int curr = 0;
char tempA[size];

//prints last index
cout << "\nLast index: " << index << endl; 
for(int x = 0; x <= size; x++)      //iterate through the entire array
{   
    int j;
    for(j = 0; j < x; j++)          //iterate through the array for x
    {
        count = 1;  
        if(arr[x] == arr[j])      //if the element matches count increments
        {
            count++;
            break;                //breaks the loop
        }
    }
    if(j == x)                  //if it is present, add it to an array
    {
        arr[curr++] = arr[j] ;
        count = 1;
    }
        
    
    cout  << count << " " << arr[j] << " ";
}

}//end of leftShift





int main()
{

 string sTxt;
 cout << "Please enter a string" << endl;


getline(cin, sTxt);

int sSize = sTxt.length();

char* cTxt = new char[sSize];

cout << "main print: " ;

//add string into a char array
for(int x = 0; x <= sSize; x++)
{
    cTxt[x] = sTxt[x];
    cout << cTxt[x]; // << " ";     //prints the test word
}
int count[sSize];
leftShift(cTxt, sSize);
cout << endl;
countLetters(cTxt, count);



/*
cout << "Size: " << sSize << endl;
char newTxt[sSize]; 
char temp = cTxt[0];
int index = 0; 
char first;
for(int x = 0; x <= sSize-2; x++)
//while(temp != first)
{
    index++;
    char first = cTxt[0];
    for(int i = 0; i <= sSize-1; i++)
    {
        cTxt[i] = cTxt[i+1];
        //newTxt[i] = cTxt[i];
        cout << " [" << i << "] "<< cTxt[i] << " ";
    }
    cTxt[sSize -1] = first;
    cout << " Iterations: " << index << endl;

 cout << endl;
}

cout << "Last index: " << index << endl; 
for(int x = 0; x <= sSize; x++)
{
    cout  << cTxt[x];
}
*/

    return 0;
}