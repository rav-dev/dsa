//TC SC INTRO GENERAL 

//O(1)
//O(logn)
//O(sqrtn)
//O(n)
//O(nlogn)
//O(n^2)
//O(n^3)
//O(2^n)
//O(n!)
//O(n^n)


//ARRAY-PART1
/*
#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"the base address of the array is: "<<arr<<endl;
    cout<<"the base address of the array using & operator is: "<<&arr<<endl;
    cout<<"now lets see how can we initialize the array"<<endl;
    int zrr[] = {1,2,3,4,5,6};
    int brr[5] = {1,2,3,4,5};
    //here although array is created for size 5 but it is storing only 2 values, 
    //rest of the values can be zero or garbage values depending upon the compiler. 
    int crr[5] = {1,2};
    return 0;
}
*/





//arr[index] or index[arr] both are same -> *(arr+index) or *(index+arr) where arr is a base address

//sizeof(arr)/sizepof(int) == capacity of the array 
//this formula tells us the capacity of the array, meaning how many elements that array can store
//it does not. tell the size of the array (how many elements are there. in the array)




//Arrays and Functions 
/*
#include<iostream>
using namespace std;
void solve(int arr[],int size){
    arr[0] = 100;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {1,3,4,5};
    int size = 4;
    //1. whenever we pass array in the function always pass its size also, because with the 
    //sizeof formula we can calculate the capacity of the array but we cannot calculate the 
    //size of the array. And in cases like this where we need to run a loop in the function 
    //we need the size of the array
    
    //2. the array passed is always pass by reference
    //in this case the arr is passbyreference and size is passbyvalue
    solve(arr,size);
    return 0;
}
*/



//Linear Search 

/*

#include<iostream>
using namespace std;
bool targetFinder(int arr[], int size,int target){
    for(int i = 0; i<size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[] = {1,3,4,5};
    int size = 4;
    int target = 1;
    bool ans = targetFinder(arr,size,target);
    if(ans){
        cout<<"yes the target is present"<<endl;
    }
    cout<<"the target is not present"<<endl;
    return 0;
}
*/


//FINDING THE MAX NO IN THE ARRAY 
/*
#include<iostream>
#include<limits.h>
using namespace std;
int findMaximumElement(int arr[],int size){
    int maxAns = INT_MIN;
    for(int i = 0; i<size; i++){
        maxAns = max(maxAns,arr[i]);
    }
    return maxAns;
}
int main(){
    int arr[] = {100,2,3,4,5};
    int size = 5;
    int ans = findMaximumElement(arr,size);
    cout<<"the maximum element in the array is: "<<ans<<endl;
    return 0;
}
*/

//FINDING THE MIN NO IN THE ARRAY 

/*
#include<iostream>
#include<limits.h>
using namespace std;
int minimumElementFinder(int arr[],int size){
    int minAns = INT_MAX;
    for(int i = 0; i<size; i++){
        minAns = min(minAns,arr[i]);
    }
    return minAns;
}
int main(){
    int arr[] = {-100,-1,1,2,3,4,5};
    int size = 5;
    int ans = minimumElementFinder(arr,size);
    cout<<"the minimum element in the array is: "<<ans<<endl;
    return 0;
}
*/

//EXTREME PRINTING 
//Two Poiner Approach
/*
#include<iostream>
using namespace std;
void extremePrinter(int arr[],int size){
    int left = 0;
    int right = size-1;
    while(left<=right){
        if(left==right){
            cout<<arr[left]<<" ";
            break;
        }
        else{
        cout<<arr[left]<<" ";
        left++;
        cout<<arr[right]<<" ";
        right--;
    }
}
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;
    extremePrinter(arr,size);
    return 0;
}
*/





