#include<iostream>      //always include
#include<stdlib.h>
#include<stdio.h>
#include<string.h>      //string class

using namespace std;

char *removeDuplicate(char str[], int size)
{   
    //index of in the modified string
    int index = 0;
int count = 0;
    //traverse all elements
    for(int x = 0; x < size; x++)
    {
        //see if str[x] is present
        int j;
        for(j = 0;  j < x; j++)
        {
            int count = 1; 
            if(str[x] == str[j]){
            count++;
            break;
            }
        }

        //if it is not, then add it to the result
        if (j == x)
        {
            str[index++] = str[x];
        }
    }
    return str;
}


int main()
{
    char str[] = "mississippi";
    int size = sizeof(str);

    cout << removeDuplicate(str,size);
}