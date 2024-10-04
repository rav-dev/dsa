//creating the dynamic array 
//vector<int>arr;


//total capacity of the array 
//arr.capacity();


//size of the array 
//arr.size();


//inserting elements in the array 
//arr.push_back(2);
//arr.push_back(3);


//printing elements of the dyanamic array
//for(int i = 0; i<arr.size();i++){
//    cout<<arr[i]<<" ";
//}


//remove elements of the array 
//arr.pop_back();


//taking user i/p
//int n;
//cin>>n;


//creating the dyanamic array and initialize it also 
//vector<int>arr{1,2,3,4};


//to check whether the dyanamic array is empty or not 
//arr.empty();


//FIND THE UNIQUE ELEMENTS IN THE ARRAY 
/*
#include<iostream>
#include<vector>
using namespace std;
int uniqueElementFinder(vector<int>arr){
    int ans = 0;
    for(int i = 0; i<arr.size();i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    vector<int>arr{1,1,2,2,3,4,4};
    int ans = uniqueElementFinder(arr);
    cout<<"the unique element in the array is: "<<ans<<endl;
    return 0;
}
*/


//UNION 
/*
#include<iostream>
#include<vector>
using namespace std;
void unionFinder(vector<int>arr1, vector<int>arr2){
    vector<int>ans;
    for(int i = 0; i<arr1.size();i++){
        ans.push_back(arr1[i]);
    }
    for(int i = 0; i<arr2.size();i++){
        ans.push_back(arr2[i]);
    }
    for(int i = 0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}
int main(){
    vector<int>arr1{1,2,3,4};
    vector<int>arr2{5,6,7,8};
    unionFinder(arr1,arr2);
    return 0;
    
}
*/


//INTERSECTION 
/*
#include<iostream>
#include<vector>
using namespace std;
void intersectionFinder(vector<int>arr1,vector<int>arr2){
    vector<int>ans;
    for(int i = 0; i<arr1.size(); i++){
        int element = arr1[i];
        for(int j = 0; j<arr2.size();  j++){
            if(element == arr2[j]){
                arr2[j] = -1;
                ans.push_back(element);
            }
        }
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    vector<int>arr1{1,2,3,4,5};
    vector<int>arr2{1,2,3};
    intersectionFinder(arr1,arr2);
    return 0;
}
*/



//PAIR SUM 

/*
#include<iostream>
#include<vector>
using namespace std;
void pairSumFinder(vector<int>arr,int sum){
    for(int i = 0; i<arr.size(); i++){
        int element = arr[i];
        for(int j =i+1; j<arr.size(); j++){
            if(element + arr[j] == sum){
                cout<<"the required pairs are "<<element<<" "<<arr[j]<<endl;
            }
        }
    }
}
int main(){
    vector<int>arr{1,2,3,4,5,6,7,8};
    cout<<"enter the sum"<<endl;
    int sum;
    cin>>sum;
    pairSumFinder(arr,sum);
    return 0;
}
*/


//TRIPLET SUM IS SIMILAR TO PAIR SUM 


//SORT 0's and 1's

/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{0,1,0,0,1,1,0,1};
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        if(arr[start] == 0){
            swap(arr[start], arr[end]);
            end--;
        }
        else{
            start++;
        }
    }
    cout<<"the sorted 0s and 1s are"<<endl;
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
*/


//LC 136 SINGLE NUMBER https://leetcode.com/problems/single-number/description/

/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{2,4,5,7,7,10,4,2,5};
    int ans = 0;
    for(int i = 0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
     cout<<"the single number is: "<<ans<<endl;
}
*/



//SORTING 0s. and 1s

//APPROACH1 counting method
//TC O(n)
//SC O(n)
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,0,1,1,0,0,1,0,0,0,1};
    int zeroCount = 0;
    int oneCount = 0;
    vector<int>ans;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1){
            oneCount++;
        }
    }
    
    //inserting
    for(int i = 0; i<zeroCount; i++){
        ans.push_back(0);
    }
    for(int i = 0; i<oneCount; i++){
        ans.push_back(1);
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
*/


//APPROACH2 USING IN-BUILT SORTING METHOD 
//TC O(nlogn)
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr{1,0,1,1,0,0,1,0,0,0,1};
    sort(arr.begin(),arr.end());
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
*/


//APPROACH3 TWO POINTER APPROACH DONE ABOVE 


//PAIR PRINTING 

//Print all the pair ignoring dups 
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{10,20,30,40};
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr.size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/


//LC 1. Two Sum
/*
#include<iostream>
#include<vector>
using namespace std;
pair<int,int> twoSum(vector<int>arr,int target){
    pair<int,int>p = make_pair(-1,-1);
    for(int i = 0; i<arr.size(); i++){
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i]+arr[j] == target){
                p.first = arr[i];
                p.second = arr[j];
            }
        }
    }
    return p;
}
int main(){
    vector<int>arr{10,20,30,40};
    int target = 30;
    pair<int,int>p = twoSum(arr,target);
    if(p.first == -1 && p.second == -1){
        cout<<"the pair does not exist";
    }
    else{
        cout<<"the required pair is: "<<endl;
        cout<<p.first<<endl;
        cout<<p.second<<endl;
    }
}
*/



//ROTATION ARRAY 
/*
#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int>arr,int shift){
    int size = arr.size();
    int finalShift = shift%size;
    if(finalShift == 0){
        return;
    }
    //STEP1: COPY LAST FINAL SHIFT ELEMENTS TO THE TEMP ARRAY
    int temp[1000];
    int index = 0;
    for(int i = size - finalShift;i<size;i++){
        temp[index] = arr[i];
        index++;
    }
    
    //STEP2: SHIFT THE ARRAY ELEMENTS BY FINALSHIFT PLACES
    for(int i = size-1; i>=0; i--){
        arr[i] = arr[i-finalShift];
    }
    
    //STEP3: COPY THE TEMP ELEMENTS INTO THE ORIGINAL ARRAY
    for(int i = 0; i<finalShift; i++){
        arr[i] = temp[i];
    }
    cout<<"printing the result"<<endl;
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    vector<int>arr{10,20,30,40,50,60};
    int shift = 2;
    rotateArray(arr,shift);
    
    return 0;
}
*/



#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int>arr,int shift){
    int size = arr.size();
    int finalShift = shift%size;
    if(finalShift == 0){
        return;
    }
    //STEP1: Copy the finalShift elements to the temp array 
    int temp[1000];
    int index = 0;
    for(int i = size-finalShift;i<size;i++){
        temp[index] = arr[i];
        index++;
    }
    //STEP2: shift the elements of the array to the finalShift positions
    for(int i = size; i>=0; i--){
        arr[i] = arr[i-finalShift];
    }
    //STEP3: copy the elements from the temp array to the starting positions
    for(int i = 0; i<finalShift; i++){
        arr[i] = temp[i];
    }
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    vector<int>arr{10,20,30,40,50};
    int shift = 1;
    rotateArray(arr,shift);
    return 0;
}




