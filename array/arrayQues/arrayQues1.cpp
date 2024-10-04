//ALGO QUESTIONS 

//1. TWO SUM PROBLEM 
//We have a target == 16 and we need to find the pairs in the given array whose sum is 16
//this approach TLE marega as TC == O(n^2)
/*
#include<iostream>
#include<vector>
using namespace std;
bool twoSumPairFinder(vector<int>&arr, int target){
    int size = arr.size();
    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){ //so that we do not have dup pairs (1,3) or (3,1)
            if(arr[i]+arr[j] == target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int>arr{1,4,45,6,10,8};
    int target = 16;
    bool ans = twoSumPairFinder(arr,target);
    if(ans){
        cout<<"yes such a pair exists"<<endl;
    }
    else{
        cout<<"nope such a pair doesnt exist"<<endl;
    }
    return 0;
}
*/

//APPROACH 2 - Two pointer approach 
//this is still not working becasue the array is not sorted
/*
#include<iostream>
#include<vector>
using namespace std;
bool twoSumPairFinder(vector<int>&arr,int target){
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        int sum = arr[start] + arr[end];
        if(sum  == target){
            return true;
        }
        else if(sum  > target){
            end--;
        }
        else{
            start++;
        }
    }
    return false;
}

int main(){
    vector<int>arr{1,4,45,6,10,8};
    int target = 16;
    bool ans = twoSumPairFinder(arr,target);
    if(ans){
        cout<<"yes such a pair exists"<<endl;
    }
    else{
        cout<<"nope such a pair doesnt exist"<<endl;
    }
    return 0;
    
}
*/

//APPROACH 2 - Two pointer approach 
//lets sort the array 
//TC O(nlogn) + O(n) === O(nlogn)
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool twoSumPairFinder(vector<int>&arr,int target){
    sort(arr.begin(),arr.end());
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        int sum = arr[start]+arr[end];
        if(sum == target){
            return true;
        }
        else if(sum>target){
            end--;
        }
        else{
            start++;
        }
    }
    return false;
}
int main(){
    vector<int>arr{1,4,45,6,10,8};
    int target = 16;
    bool ans = twoSumPairFinder(arr,target);
    if(ans){
        cout<<"yes such a pair exists"<<endl;
    }
    else{
        cout<<"nope such a pair doesnt exist"<<endl;
    }
    return 0;
}
*/



//2. PIVOT INDEX
/*

#include<iostream>
#include<vector>
using namespace std;
int bruteForce(vector<int>&arr){
    for(int i = 0; i<arr.size(); i++){
        int lsum = 0;
        int rsum = 0;
        for(int j = 0; j<i; j++){
            lsum = lsum+arr[j];
        }
        for(int j = i+1; j<arr.size(); j++){
            rsum = rsum + arr[j];
        }
        if(lsum == rsum){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr{1,7,3,6,5,6};
    int ans = bruteForce(arr);
    if(ans == -1){
        cout<<"the pivot element doesn not exist"<<endl;
    }
    else{
        cout<<"the pivot element is: "<<ans<<endl;
    }
    return 0;
}
*/


//LC- 268 Missing Number
//TC == O(nlogn) because we sorted

/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingNumberFinder(vector<int>&arr){
    sort(arr.begin(),arr.end());
    for(int i = 0; i<arr.size(); i++){
        if(i == arr[i]){
            continue;
        }
        else{
            return i;
        }
    
    }
    return arr.size();
}
int main(){
    vector<int>arr{9,6,4,2,3,5,7,0,1};
    int ans = missingNumberFinder(arr);
    cout<<"the required missing number is: "<<ans<<endl;
    return 0;
}
*/


//APPROACH2 using XOR 
/*
#include<iostream>
#include<vector>
using namespace std;
int missingNumberFinder(vector<int>&arr){
    int ans = 0;
    for(int i = 0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    
    for(int i = 0; i<=arr.size(); i++){
        ans = ans^i;
    }
    return ans;
}
int main(){
    vector<int>arr{9,6,4,2,3,5,7,0,1};
    int ans = missingNumberFinder(arr);
    cout<<"the required missing number is: "<<ans<<endl;
    return 0;
}
*/



//LC: 643 MAX AVG SUB ARRAY 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int maxSum = INT_MIN;
    int i = 0;
    int j = k-1;
    while(j<)
}








