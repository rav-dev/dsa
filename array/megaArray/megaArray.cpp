//MEGA ARRAY 

//UNORDERED MAP ->initialization and iteration
/*
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    //initializing the unordered map 
    unordered_map<int,int>mapper;
    //insertion
    mapper[1] = 22;
    mapper[2] = 33;
    mapper[3] = 44;
    mapper[5] = 55;
    //iteration
    unordered_map<int,int>::iterator it;
    for(it = mapper.begin(); it!= mapper.end(); it++){
        int key = it->first;
        int value = it->second;
        cout<<"the key is: "<<key<<"the value is: "<<value<<endl;
    }
    return 0;
    
}
*/



//FINDING THE ELEMEMNT IN THE MAP 
/*
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>mapper;
    mapper[1] = 22;
    mapper[2] = 33;
    mapper[3] = 44;
    mapper[4] = 55;
    
    int keyToFind = 2;
    unordered_map<int,int>::iterator it;
    for(it = mapper.begin(); it!=mapper.end();it++){
        if(it->first == keyToFind){
            int val = it->second;
            cout<<"yes the key exists"<<endl;
            cout<<"the value is: "<<val<<endl;
            break;
        }
        else{
            cout<<"the value is not there"<<endl;
        }
    }
}
*/




//CALCULATING THE 2'sCOMPLIMENT
/*
#include<iostream>
#include<vector>
using namespace std;
vector<int>twosComplementFinder(vector<int>binary){
    int size = binary.size();
    vector<int>twosComp(size,0);
    for(int i = 0; i<binary.size(); i++){
        if(binary[i] == 0){
            twosComp[i] = 1;
        }
        else if(binary[i] == 1){
            twosComp[i] = 0;
        }
    }
    int carry = 1;
    for(int i = twosComp.size()-1;i>=0;i--){
        int sum = twosComp[i]+carry;
        twosComp[i] = sum%2;
        carry = sum/2;
        if(carry == 0){
            break;
        }
    }
    return twosComp;
}
int main(){
    vector<int>binary = {0,0,1,1,1};
    vector<int>twosCompliment = twosComplementFinder(binary);
    for(int i = 0; i<twosCompliment.size(); i++){
        cout<<twosCompliment[i]<<" ";
    }
    return 0;
}
*/


//136. Single Number (E)

/*
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int singleNumberFinder(vector<int>&arr){
    int ans = -1;
    unordered_map<int,int>mapper;
    for(int i = 0; i<arr.size(); i++){
        int num = arr[i];
        mapper[num] = mapper[num] + 1;
    }
    unordered_map<int,int>::iterator it;
    for(it = mapper.begin(); it !=mapper.end(); it++){
        int key = it->first;
        int val = it->second;
        if(val == 1){
            ans = key;
            break;
        }
    }
    
    return ans;
}
int main(){
    vector<int>arr = {4,1,1,2,2};
    int ans = singleNumberFinder(arr);
    cout<<"the required single number is: "<<ans<<endl;
    return 0;
}
*/



//LC-48 48. Rotate Image (M)
/*
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //transposing the matrix
        int rowNum = matrix.size();
        int colNum = matrix[0].size();
        for(int i = 0; i<rowNum; i++){
            for(int j = i; j<colNum;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //reversing the row 
        for(int i = 0; i<rowNum;i++){
            reverse(matrix[i].begin(),  matrix[i].end());
        }
        
    }
};

*/




//FIND THE MISSING NUMBER FROM THE ARRAY WITH DUPLICATES -> GFG
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,3,5,3,4};
    //here we will assume the index of the array is arr[arr[i]]
    //here we will assume that the array index is started by 1 not zero 
    arr.insert(arr.begin(),787);
    for(int i = 1; i<arr.size();i++){
        int index = abs(arr[i]);
        if(arr[index]>0){
            arr[index] = arr[index]*-1;
        }
    }
    int missing = -1;
    for(int i = 1; i<arr.size(); i++){
        if(arr[i]>0){
            missing = i;
            break;
        }
    }
    cout<<"the missing element in the array is: "<<missing<<endl;
    return 0;
}
*/



//LC-53 MAXIMUM SUBARRAY -> NON OPTIMAL APPROACH
/*
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int maxSubarray(vector<int>&arr){
    int ans = INT_MIN;
    for(int i = 0; i<arr.size(); i++){
        int sum = 0;
        for(int j = i; j<arr.size(); j++){
            sum = sum + arr[j];
            ans = max(ans,sum);
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSubarray(arr);
    cout<<"the subarray with the largest sum is: "<<result<<endl;
    return 0;
}
*/



//OPTIMIZED APPROACH -> KADANES ALGO 

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int kadaneApproach(vector<int>&arr){
    int ans = INT_MIN;
    int sum = 0;
    for(int i = 0; i<arr.size(); i++){
        sum = sum + arr[i];
        ans = max(ans,sum);
        if(sum<0){
            sum = 0;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {-2,1,-3,4,-1,2,1,-5,4};
    int result = kadaneApproach(arr);
    cout<<"the subarray with the largest sum is: "<<result<<endl;
    return 0;
}
