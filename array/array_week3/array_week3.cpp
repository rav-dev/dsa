//2D ARRAY
/*
#include<iostream>
using namespace std;
int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int rows = 2;
    int cols = 3;
    cout<<"total rows in an array are: "<<rows<<endl;
    cout<<"total cols in an array are: "<<cols<<endl;
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/


//diagianal element in an array 
/*
#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;
    cout<<"total rows in an array are: "<<rows<<endl;
    cout<<"total cols in an array are: "<<cols<<endl;
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<cols; j++){
            if(i == j){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
*/

//in static array if we do not fill all the values eg values are < size then there can be 
//chances of garbage value or zero depending upon the compiler



//Take input from the user and print a 2D array. Use vectors 
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the rows"<<endl;
    int rows;
    cin>>rows;
    cout<<"enter the cols"<<endl;
    int cols;
    cin>>cols;
    cout<<"initializing the array"<<endl;
    vector<vector<int>>arr(rows,vector<int>(cols,0));
    cout<<"lets now enter the data in the array"<<endl;
    for(int i = 0; i<rows;i++){
        
        for(int j = 0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"printing the array"<<endl;
    for(int i = 0; i<rows;i++){
        for(int j = 0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/



//SEARCHING IN THE 2 D ARRAY 
//when we pass the static array it is always passed as a refeence
//but when we pass the vector it can be passed as a value or reference
//if we pass it without & operator it will be passed as a value 
//if we pass it with & operator it will be passed as a reference

/*
#include<iostream>
#include<vector>
using namespace std;

int searchTheTarget(vector<vector<int>>&arr,int target){
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr[0].size();j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int rows;
    int cols;
    cout<<"enter the rows"<<endl;
    cin>>rows;
    cout<<"enter the cols"<<endl;
    cin>>cols;
    cout<<"enter the target you would like to search"<<endl;
    int target;
    cin>>target;
    
    vector<vector<int>>arr(rows,vector<int>(cols,0));
    
    cout<<"now fill the array"<<endl;
    for(int i = 0; i<arr.size();i++){
        for(int j = 0;  j<arr[0].size();j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"printing the array"<<endl;
    for(int i = 0; i<arr.size();i++){
        for(int j = 0;  j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int ans = searchTheTarget(arr,target);
    if(ans == false){
        cout<<"the target is not present"<<endl;
    }
    else{
        cout<<"the target is present"<<endl;
    }
    return 0;
}
*/



//FIND THE MINIMUM ELEMENT IN THE 2D array
/*
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int minimumElementFinder(vector<vector<int>>arr){
    int minAns = INT_MAX;
    for(int i = 0; i<arr.size();i++){
        for(int j = 0; j<arr[0].size(); j++){
            minAns = min(minAns,arr[i][j]);
        }
    }
    return minAns;
}
int main(){
 
    vector<vector<int>>arr{
        
        {-100,2,3,4},
        {5,6,7,8}
    };
    
    int ans = minimumElementFinder(arr);
    cout<<"the minium element in this 2D array is: "<<ans<<endl;
    return 0;
}
*/



//TRANSPOSE A MATRIX 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    for(int i = 0; i<arr.size(); i++){
        for(int j = i; j<arr[0].size(); j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    
    for(int i = 0; i<arr.size(); i++){
        for(int j = i; j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}