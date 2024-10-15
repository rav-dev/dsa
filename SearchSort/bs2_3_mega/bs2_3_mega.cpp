//BS2 
/*
#include<iostream>
#include<vector>
using namespace std;
int justDivideIt(int dividend,int divisor){
    int start = 0;
    int end = dividend;
    int mid = start+(end-start)>>1;
    int ans = -1;
    while(start<=end){
        if(divisor*mid == divisor){
            ans = mid;
            return ans;
        }
        else if(divisor*mid<divisor){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)>>1;
    }
    return ans;
}
int main(){
    cout<<"enter the dividend"<<endl;
    int dividend;
    cin>>dividend;
    cout<<"enter the divisor"<<endl;
    int divisor;
    cin>>divisor;
    int ans = justDivideIt(abs(dividend),abs(divisor));
    if((dividend<0 && divisor>0) || (dividend>0 && divisor<0)){
        ans = 0-ans;
    }
    cout<<"the quotient is: "<<ans<<endl;
    return 0;
}
*/




//NEARLY SORTED ARRAY - REDO WRONG SOL 

//nearly sorted array is an array where an element in a sorted array say at position arr[i]
//that element is found at position arr[i-1], arr[i] and arr[i+1]. Such an array is called 
//nearly sorted array 
/*
#include<iostream>
#include<vector>
using namespace std;
bool nearlySortedSearcher(vector<int>&arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == target){
            return mid;
        }
        else if((mid >0) && (arr[mid-1] == target)){
            return mid-1;
        }
        else if((mid<end) && (arr[mid+1] == target)){
            return mid+1;
        }
        else if(target>arr[mid]){
            start = mid+2;
        }
        else{
            end = mid-2;
        }
        mid = start + (end-start)/2;
    }
    return false;
}
int main(){
    vector<int>arr{10, 3, 40, 20, 50, 80, 70};
    cout<<"enter the target you would like to search in the nearly sorted array: "<<endl;
    int target;
    cin>>target;
    bool ans = nearlySortedSearcher(arr,target);
    if(ans){
        cout<<"yes the target is present"<<endl;
    }
    else{
        cout<<"nope the target is not present"<<endl;
    }
    return 0;
}
*/


//LC-540 ODD OCCURING ELEMENT 

//APPROACH 1- XOR 
//TC - O(n)
/*
#include<iostream>
#include<vector>
using namespace std;
int oddOccuringElementFinder(vector<int>&arr){
    int ans = 0;
    for(int i = 0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    vector<int>arr{1,1,2,2,3,3,4,4,7,5,5,3,3};
    int ans = oddOccuringElementFinder(arr);
    cout<<"the odd occuring element is: "<<ans<<endl;
    return 0;
}
*/


//APPROACH 2 
//USING MAP 
/*
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    vector<int>arr{1,1,2,3,3,4,4,8,8};
    unordered_map<int,int>mapper;
    for(int i = 0; i<arr.size(); i++){
        int num = arr[i];
        mapper[num] = mapper[num]+1;
    }
    unordered_map<int,int>::iterator it;
    int ans = -1;
    for(it = mapper.begin(); it!=mapper.end(); it++){
        int key = it->first;
        int val = it->second;
        if(val ==1){
            ans = key;
            cout<<"the odd occuring element is: "<<ans<<endl;
        }
    }
}
*/



//APPROACH 3 -> BINARY SEARCH APPROACH 
/*
#include<iostream>
#include<vector>
using namespace std;
int singleNonDuplicate(vector<int>&arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    while(start<=end){
        //single element 
        if(start == end){
            return arr[start];
        }
        //case1 when mid is the value
        int currVal = arr[mid];
        int leftVal = -1;
        if(mid-1>0){
            leftVal = arr[mid-1];
        }
        int rightVal = -1;
        if(mid+1<arr.size()){
            rightVal = arr[mid+1];
        }
        //Case2 non dups
        if(currVal!=leftVal && currVal != rightVal){
            return currVal;
        }
        //case 3 left mein duplicate value hogi
        if(currVal == leftVal && currVal != rightVal){
            int pairStartIndex = mid-1;
            if(pairStartIndex&1){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        //case4 right mein dup mila 
        if(currVal != leftVal && currVal == rightVal){
            int pairStartIndex = mid;
            if(pairStartIndex &1){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        mid = start + (end-mid)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{1,1,2,3,3,4,4,8,8};
    int ans = singleNonDuplicate(arr);
    cout<<"the odd occuring element is: "<<ans<<endl;
    return 0;
}
*/

/*
#include<iostream>
#include<vector>
using namespace std;
int singleNonDuplicate(vector<int>&arr){
    int start = 0;
    int end = arr.size();
    int mid = start + (end-start)/2;
    //CASE1 when there is only one element
    while(start<=end){
        if(start == end){
            return arr[start];
        }
        
        int currVal = arr[mid];
        int leftVal = -1;
        if(mid-1>=0){
            leftVal = arr[mid-1];
        }
        int rightVal = -1;
        if(mid+1<arr.size()){
            rightVal = arr[mid+1];
        }
        //CASE2: when there is no dup
        if(currVal!=leftVal && currVal!=rightVal){
            return currVal;
        }
        //CASE3: when the first index occurs in the left 
        if(currVal == leftVal && currVal != rightVal){
            int pairFirstIndex = mid-1;
            if(pairFirstIndex & 1){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        //CASE4: when the first index occurs in the right
        if(currVal != leftVal && currVal == rightVal){
            int pairFirstIndex = mid;
            if(pairFirstIndex &1){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{1,1,2,3,3,4,4,8,8,3,3};
    int ans = singleNonDuplicate(arr);
    cout<<"the odd occuring element is: "<<ans<<endl;
    return 0;
}
*/



//SQRT WITH PRECISION 
/*
#include<iostream>
#include<vector>
using namespace std;

double sqrtWithPrecision(int val){
    //using search space pattern 
    int start = 0;
    int end = val;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<= end){
        if (mid*mid == val){
            ans = mid;
            return ans;
        }
        else if(mid*mid< val){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    cout<<"enter the value for which you would like to have the sqrt value: "<<endl;
    int val;
    cin>>val;
    cout<<"enter the precision value: "<<endl;
    int precision;
    cin>>precision;
    double ans = sqrtWithPrecision(val);
    cout<<"the required sqrt is: "<<ans<<endl;
    return 0;
}
*/


//MULTIPLE PEAKS 
//LC 162 REDO 


///LC - 875. Koko Eating Bananas
/*
#include<iostream>
#include<vector>
#include <cmath>
using namespace std;
class Solution {
public:
    bool kokoFinishedEatingBanana(int k,int h,vector<int>&piles){
        long long timeTakenbykokoToFinishEatingBanana = 0;
        for(int i = 0; i<piles.size(); i++){
            timeTakenbykokoToFinishEatingBanana += ceil(piles[i]/(double)k);
        }
        return timeTakenbykokoToFinishEatingBanana <=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        auto it = max_element(piles.begin(), piles.end());
        int end  = *it;
        int mid = start + (end-start)/2;
        int ans = -1;
        while(start<=end){
            int k = mid;
            if(kokoFinishedEatingBanana(k,h,piles)){
                ans = k;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    }
};
*/



//LC -29. Divide Two Integers

class Solution {
public:
    int divide(int dividend, int divisor){
        int ans = 0;
        if(dividend == INT_MIN && divisor == -1){
            ans = INT_MAX;
            return ans;
        }
        int start = 0;
        int end = dividend;
        int mid = ((end-start)>>1) + start;
        bool ans_sign = true;
        if(dividend>0 && divisor<0){
            ans_sign = false;
        }
        if(dividend<0 && divisor>0){
            ans_sign = false;
        }
        dividend = abs(dividend);
        divisor = abs(divisor);
        while(start<=end){
            if(mid*divisor<=dividend){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = ((end-start)>>1) + start;
        }
        if(ans_sign == false){
         return -ans;
        }
        else{
         return ans;
    }

    }
};



