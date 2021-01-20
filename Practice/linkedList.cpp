#include<iostream>      //always include
#include<stdlib.h>
#include<stdio.h>

using namespace std;    //always include

/* Linked List Notes
- holds 2 parts, data and reference to next node
- has a head pointer to first node
- used to identify linked lists
*/


//Defining a linked list node
struct LLNode {
    int data;               //for a link list of integers can exchange for char,double etc
    LLNode* next;       //creats a pointer to Node called link
}; 

//should create a pointer to Node to store the head node
struct LLNode* head;        //this pointer should point nowhere
                            //head = NULL; put into the the main function to initialize the linked list 



//methods 

//insert at the fron
void Insert(int x)
{
LLNode* temp = new LLNode();  //creates a new temp head locally
temp->data = x;     //makes the new int x the data for the temp node //same as (*temp).data = x;
temp->next = NULL; //sets the next node to NULL

if(head != NULL) temp -> next = head; //if the list is NOT Null it will set the temp node as the head

head = temp; //sets the head node as the new temp node
}

LLNode* Insert2(LLNode** pointerHead, int x)
{
LLNode* temp = new LLNode();  //creates a new temp head locally
temp->data = x;     //makes the new int x the data for the temp node //same as (*temp).data = x;
temp->next = NULL; //sets the next node to NULL

if(*pointerHead != NULL) temp -> next = *pointerHead; //if the list is NOT Null it will set the temp node as the head

*pointerHead = temp; //sets the head node as the new temp node
return *pointerHead;
}

//printing the linked lists
void Print()
{
struct LLNode* temp = head; //use a temp variable so we dont modify head
while(temp != NULL) //runs while the head node is NULL
{
    printf(" %d",temp->data);   //prints the data
    temp = temp->next;      //sets temp node to the next node in the list
}
printf("\n");
}

//alternative print (no global head variable)
void Print2(LLNode* head)
{
//struct LLNode* temp = head; //use a temp variable so we dont modify head
while(head != NULL) //runs while the head node is NULL
{
    printf(" %d",head->data);   //prints the data
    head = head->next;      //sets temp node to the next node in the list
}
printf("\n");
} 


//main()
int main() {

LLNode* head1 = NULL; //will cause head not to be a global value see print2
head = NULL;    //empty list and sets head to null

printf("How many numbers? \n");     //asks user for number of values
int n, i,x;                              //store number in n
scanf("%d",&n);                     //takes the int and assigns it to n (dereferencing the value n)

//using normal insert and print with global head
for(i = 0; i<n; i++){
    printf("Enter the number \n");
    scanf("%d",&x);
    Insert(x);
    Print();
}

//using 2nd methods when printing local 
for(i = 0; i<n; i++){
    printf("Enter the number2 \n");
    scanf("%d",&x);
    head = Insert(&head,x);
    Print(head);
}


}//end of main