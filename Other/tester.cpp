#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{   
    /*
    vector<string> msg {"Hello", "C++", "World!"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    */

   string input;
   //getline(cin, input);
   while(!getline(cin, input).eof())
    {
    }

cout << "output: " << input << endl;
return 0;
}