//SEARCH SORT 

//LC-704 Binary Search

/*
#include<iostream>
#include<vector>
using namespace std;
bool targetSearcher(vector<int>&arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid] == target){
            return true;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return false;
}
int main(){
    vector<int>arr{-1,0,3,5,9,12};
    cout<<"enter the target you would like to search: "<<endl;
    int target;
    cin>>target;
    bool ans = targetSearcher(arr,target);
    if(ans){
        cout<<"the target is present"<<endl;
    }
    else{
        cout<<"the target is not present"<<endl;
    }
    return 0;
}
*/



//FIRST OCCURANCE 
//target is occuring more than one times in the array 
//find the first occurance of the target 
/*
#include<iostream>
#include<vector>
using namespace std;
int firstOccuranceFinder(vector<int>&arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == target){
            //here we are using the store and compute pattern 
            //ans mil gaya but not sure ki ye hi ans hai 
            //to ans ko store kar do and then again continiue with the 
            //processing and dekho koi doosra ans milta hai 
            //mil jayega to ans ko update kar do agar nahi mila to wahi ans hai
            //jo pehle nikala tha
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    vector<int>arr{20,20,20,30,40,50,60,70};
    int target = 20;
    int ans = firstOccuranceFinder(arr,target);
    cout<<"the first occurance of the target is: "<<ans<<endl;
    return 0;
}
*/




//FIND THE LAST OCCURANCE OF THE TARGET 

/*
#include<iostream>
#include<vector>
using namespace std;
int lastOccuranceFinder(vector<int>&arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == target){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>target){
            end = start-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    vector<int>arr{10,20,20,20,20,20,20,20,20,20,30};
    int target = 20;
    int ans = lastOccuranceFinder(arr,target);
    cout<<"the last occurance of the targe is: "<<ans<<endl;
    return 0;
}
*/



//LC34. Find First and Last Position of Element in Sorted Array->(M)

//[5,7,7,8,8,10]
/*
#include<iostream>
#include<vector>
using namespace std;
int firstOccuranceFinder(vector<int>&arr, int element){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    int result = -1;
    while(start<=end){
        if(arr[mid] == element){
            result = mid;
            end = mid-1;
        }
        else if(arr[mid]>element){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return result;
}

int lastOccuranceFinder(vector<int>&arr, int element){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    int result = -1;
    while(start<=end){
        if(arr[mid] == element){
            result = mid;
            start = mid+1;
        }
        else if(arr[mid]>element){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return result;
}

vector<int> firstAndLastOccuranceFinder(vector<int>&arr,int element){
    int first_occurance = firstOccuranceFinder(arr,element);
    int last_occurance = lastOccuranceFinder(arr,element);
    vector<int>res;
    res.push_back(first_occurance);
    res.push_back(last_occurance);
    return res;
}
int main(){
    vector<int>arr{5,7,7,7,8,8,10};
    int element = 7;
    vector<int>ans = firstAndLastOccuranceFinder(arr,element);
    cout<<"the first occurance of the ans is: "<<ans[0]<<" and the last occurance of the element is: "<<ans[1]<<endl;
    return 0;
}
*/




//TOTAL OCCURANCE OF THE TARGET ELEMENT 
/*
#include<iostream>
#include<vector>
using namespace std;
int firstOccuranceFinder(vector<int>&arr, int element){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    int result = -1;
    while(start<=end){
        if(arr[mid] == element){
            result = mid;
            end = mid-1;
        }
        else if(arr[mid]>element){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return result;
}

int lastOccuranceFinder(vector<int>&arr, int element){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    int result = -1;
    while(start<=end){
        if(arr[mid] == element){
            result = mid;
            start = mid+1;
        }
        else if(arr[mid]>element){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return result;
}

int totalOccuranceFinder(vector<int>&arr,int element){
    int first_occurance = firstOccuranceFinder(arr,element);
    int last_occurance = lastOccuranceFinder(arr,element);
    int totalOccurance = (last_occurance - first_occurance) +1;
    return totalOccurance;
}
int main(){
    vector<int>arr{5,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,77,7,7,7,7,7,7,7,7,7,7,7,7,7,77,7,7,7,7,7,7,8,8,10};
    int element = 7;
    int ans = totalOccuranceFinder(arr,element);
    cout<<"the total occurance of the target element is: "<<ans;
    return 0;
}
*/

//(MISSING NUMBER REDO BS-1 last question)


//LC-852. Peak Index in a Mountain Array (M)
//remember when we are using e = mid, then we must use start<end (not start<=end)
//but since we are using the store and compute pattern to solve this question so no need 
//to do the above trick :D

/*
#include<iostream>
#include<vector>
using namespace std;
int peakIndexFinder(vector<int>&arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    int ansIndx = -1;
    while(start<end){
        if(arr[mid]>arr[mid+1]){
            ansIndx = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-mid)/2;
    }
    return ansIndx;
}
int main(){
    vector<int>arr{0,2,1,0};
    int ans = peakIndexFinder(arr);
    cout<<"the peak element in the mountain array is: "<<ans<<endl;
    return 0;
}
*/



//FIND THE PIVOT ELEMENT IN A ROTATED ARRAY 
/*
#include<iostream>
#include<vector>
using namespace std;
int pivotElementFinder(vector<int>&arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[start] == arr[mid]){
            return start;
        }
        if(arr[mid]>arr[mid+1]){
            return mid;
        }
        //we are on LINEB
        else if(arr[start]>arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    vector<int>arr{50};
    int ans = pivotElementFinder(arr);
    cout<<"the pivot element in the rotated sorted array is: "<<ans<<endl;
    return 0;
}
*/



//LC-33. Search in Rotated Sorted Array (M)
/*
class Solution {
public:
    int binarySearcher(int start, int end, vector<int>&nums, int target){
        int mid = start + (end-start)/2;
        while(start<=end){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }
    int pivotElementFinder(vector<int>&nums){
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(start==end){
                return start;
            }
            if(mid+1 <nums.size() && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[start]>nums[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return -1;
    }
    int roatedSortedArraySearcher(vector<int>&nums,int target){
        int pivotElement = pivotElementFinder(nums);
        if(target>=nums[0] && target<=nums[pivotElement]){
            int ans = binarySearcher(0,pivotElement,nums,target);
            return ans;
        }
        else{
            int ans = binarySearcher(pivotElement+1,nums.size()-1,nums,target);
            return ans;
        }
    }
    int search(vector<int>& nums, int target) {
        int ans_index = roatedSortedArraySearcher(nums,target);
        return ans_index;
    }
};
*/




//LC-69  Sqrt(x) (E)
/*
#include<iostream>
#include<vector>
using namespace std;
int sqrtFinder(int num){
    //we are suing the search space pattern
    //so basically let say we want to calculate the sqrt of 51 
    //the ans will lie in the search space of 0 to 51 
    //and this will become the range where our ans might lie 
    //in this pattern we ususally use the search and space pattern along with store and compute pattern 
    int start = 0;
    int end = num;
    long long int  mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        long long int prod = mid*mid;
        if(prod == num){
            return mid;
        }
        
        else if(prod< num){
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
    cout<<"enter the number whose sqrt you want"<<endl;
    int num;
    cin>>num;
    int ans = sqrtFinder(num);
    cout<<"the sqrt of the number is (only the int part) "<<ans<<endl;
    return 0;
}
*/



//BINARY SEARCH IN 2D ARRAY 
/*
#include<iostream>
#include<vector>
using namespace std;
bool binarySearcher(vector<vector<int>>&arr,int target){
    //converting the oneD to twoD
    int nrows = arr.size();
    int ncols = arr[0].size();
    int n = nrows*ncols;
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        int rowIndex = mid/ncols;
        int colIndex = mid%ncols;
        if(arr[rowIndex][colIndex] == target){
            return true;
        }
        else if(arr[rowIndex][colIndex] > target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return false;
}
int main(){
    cout<<"lets first make the 2D array matrix"<<endl;
    cout<<"how many rows you want: "<<endl;
    int row;
    cin>>row;
    cout<<"how many cols you want: "<<endl;
    int col;
    cin>>col;
    vector<vector<int>>arr(row,vector<int>(col,0));
    cout<<"enter the data and fill the 2D matrix"<<endl;
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr[0].size(); j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter the target you would like to search in the matrix"<<endl;
    int target;
    cin>>target;
    bool ans = binarySearcher(arr,target);
    if(ans){
        cout<<"yes the value is present in the matrix"<<endl;
    }
    else{
        cout<<"nope the value is not present in the matrox"<<endl;
    }
    return 0;
}
*/



