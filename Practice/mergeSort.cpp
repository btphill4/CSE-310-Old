#include<iostream>
using namespace std;

/*psuedo code

//merge 
merge(arr,l,m,r)    //l = left m = middle, r = right
{
i = l;
j = m + 1;
k = l

temp[]

while(i < m && j <= r)  //while left is bigger than middle and index j is larger than right
    if(arr[i] <= arr[j])    //if left value is smaller than the value to the right 
        temp[k] = arr[i]        //set the value to the current index 
    else 
        temp[k] = arr[i]    //if the temp value equals the value to the right 
        j++, k++;           //increment the current indexes by one (shift to the next number to the right)
    while(i <= m)           //check if left values is less than or equal to the middle value
        temp[k] = arr[i]    //if it is set the array to the current value
        i++, k++;           //increment the index and increment left index
    while (j <= r)          //check if the middle value + 1 is smaller than or equal to right value
        temp[k] = arr[j]    
        j++,k++;
    for(int p = l; p <= r; p++) //iterates through to check if the current position index (p) is less than or equal to the right value
        arr[p] = temp[p]
}

//mergeSort 
mergeSort(arr[],l,r)
{
    if (l<r)
    {
        1. m = (l+r)/2
        2. mergeSort(arr,l,m)
        3. mergeSort(arr, m+1, r)
        4. merge(arr, l,m,r)
    }
}


*/

//merge algorithm
void merge(int arr[], int l, int m, int r)
{
    int i = l;                  //starting index for left subarray           
    int j = m+1;                //starting index for right subarray (one to the right of mid)
    int k = l;                  //starting index for the temporary index

    int size = (r-1) +1;        //calculates the size of the array using right value and adding one extra character
    int temp[size];                //temp array

    while(i <= m && j <=r)      //i is the left most index of the left array, j is the first index after the mid(m+1)
    {
        if(arr[i]<= arr[j])     //i element in left subarray is smaller than the right subarray of the element j
        {   
            temp[k] = arr[i];   //arr[i] is smaller than arr[j]
            i++;                //moves to next element in left subarray
            k++;                //moves to the next element 
        }
        else
        {
            temp[k] = arr[j];   //arr[i] is larger than arr[j]
            j++;                //moves to next element in right subarray
            k++;                //moves to the next element in left array
        }
    }
        while(i <= m)
        {
            temp[k] = arr[i];   //copying all elements from left subarray to temp as it is
            i++;                //increment left element
            k++;                //moves to next element on the temparray
        }
        while(j <= r)
        {
            temp[k] = arr[j];   //copying all elements from right subarray to temp as it is
            j++;                //increment right element
            k++;                //moves to next element on the temparray
        }
    for(int s = l; s<=r;s++)
    {
        arr[s]=temp[s];
    }
}   //end merge()

//merge sort algorithm
void mergeSort(int arr[],int l, int r)
{
    if(l < r)   //check that the left value is less than the right
    {
        int m = (l+r)/2;         //calculates the midpoint by dividing the sum of left and right divided by 2
        mergeSort(arr,l,m);     //right is the new midpoint
        mergeSort(arr,m+1,r);   //right subarray is m+1
        merge(arr,l,m,r);       //merge function is called
    }
}   //end mergeSort()

int main(){
    
    //initialize
    int size;

    cout <<"How many numbers do you want to add" << endl;
    cin >> size;
    //user input
    int myArr[size];
    cout << "Please enter "<< size << " numbers" << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> myArr[i];
    }

    //print input
    cout << "Before mergeSort" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << myArr[i] << ", ";
    }

    //mergeSort function
    mergeSort(myArr,0,size -1);       //0 start index and 4 is size - 1       

    cout << "After mergeSort" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << myArr[i] << ", ";
    }


    return 0;
}   //end main()