#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <iostream> 

using namespace std;


int main()
{
    //video 1
    char movie1[] = "The Return of Buckyman!";      //movie1 is a pointer constant Can't be changed

    //movie1 = "hey now";         //error because you can't change the array CANT have array name on left side

    char * movie2 = "Bucky is awesome!";            //movie2 is not a constant; it is a pointer variable

    puts(movie2);            //this command takes a string and prints until null 0 character; doesnt store characters but instead stores the address 

    movie2 = "New Movie Title";

    puts(movie2);
    

    //video 2
    /*const*/ string name = "Cherno";    //const makes it where you can't modify the string


    cout << "name: " << name << endl;
    //cout<< "name2: " << name2 << endl;


    //name[2] = 'a';
        


    return 0;
}