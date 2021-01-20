#include<iostream>      //always include

using namespace std;    //always include


/* Notes
- left subtree is LESSER than or EQUAL TO right subtree
- right subtreee is GREATER than
- each node has atmost 2 child nodes
- the reference to child node can be NULL
- created in DYNAMIC MEMORY 
- saved in heap memory
- uses malloc function in c or new operator in c++
- declare rootPtr = null in main()
- rootPtr has to be local
- 
*/



//defining a node 
struct BstNode {
    int data;
    BstNode* left;  //pointer to address of left nodes
    BstNode* right; //poiner to address of right node
};


//methods 
//inserting a node
/*BstNode Insert1(BstNode** rootPtr, int data){ //using double pointer to make rootPtr global
    //base case
    if(*rootPtr == NULL) { //if tree is empty
        *rootPtr = GetNewNode(data); //rootPtr is only available in this function   
        //return rootPtr;
    }
    //recusrion checking
    

}*/

//create a new node in heap(dynamic) memory
BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode();  //create new pointer to newNode 
    newNode->left = newNode->right = NULL; //sets left and right nodes to NULL
    return newNode;
}

BstNode* Insert(BstNode* rootPtr, int data){ //BstNode* creates a pointer to the rootPtr
    //base case
    if(rootPtr == NULL) { //if tree is empty
        rootPtr = GetNewNode(data); //rootPtr is only available in this function   
        return rootPtr;
    }
    //recursive functions
    else if(data <= rootPtr-> data){ //if the new data is equal to or less than insert it to the left subtree
        rootPtr->left = Insert(rootPtr->left,data); //creates a link to the new nodes
    }
    else { //if it is not less than or equal (is greater than it is placed in the right subtree)
        rootPtr->right = Insert(rootPtr->right,data);
    }

}


bool Search(BstNode* rootPtr, int data){
    if(rootPtr == NULL) return false; //if empty return false
    else if(rootPtr-> data == data) return true; //if found in pointer return true
    else if (data <= rootPtr-> data) return Search(rootPtr->left,data); //if data is less than it will search the left tree
    else return Search(rootPtr->right,data);
}

int main(){
//to save the address of the root node
BstNode* rootPtr; //pointer to root node
rootPtr = NULL; //sets the tree as an empty tree (REQUIRED)

//insert method 2 
rootPtr = Insert(rootPtr, 15);
rootPtr = Insert(rootPtr, 10);
rootPtr = Insert(rootPtr, 20); 
rootPtr = Insert(rootPtr, 25);
rootPtr = Insert(rootPtr, 8);
rootPtr = Insert(rootPtr, 12);

//searching 
int number; //number to store user input
cout << "Enter a number to be searched";
cin >> number;
if(Search(rootPtr,number) == true) cout <<"Found\n"; //returns found if found
else cout <<"Not Found\n";

/*
//insert method 1
Insert1(&rootPtr, 15);   //address of rootPtr because it isnt accessable globally in insertion function
Insert1(&rootPtr, 10);
Insert1(&rootPtr, 20);
*/




}
