//STL 

/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,4,5,6,7};
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    arr.push_back(9);
    //arr.erase(arr.begin(),arr.end());
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    
}
*/


//SWAP
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr1 = {1,2,3,4};
    vector<int>arr2 = {100,200,300,400};
    arr1.swap(arr2);
    cout<<"printing arr1"<<endl;
    //normal for loop
    for(int i = 0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    //for each loop 
    //for(int i : arr2){
    //    cout<<i<<" ";
    //}#
    
    //iterator
    vector<int>::iterator it;
    for(it = arr2.begin(); it != arr2.end(); it++){
        cout<<*it<<" ";
    }
}
*/



//2D vector
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr(4,vector<int>(4,0));
    cout<<"printing the 2arrray"<<endl;
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/



//LIST 
/*
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_front(10);
    //myList.pop_front();
    //myList.pop_back();#
    myList.remove(10);//removes all the occurances of 10 in the list 
    cout<<"printing the list"<<endl;
    list<int>::iterator it;
    for(it = myList.begin(); it!=myList.end(); it++){
        cout<<*it<<" ";
    }
    
}
*/

//QUEUE


//Queue cannot be iterated
//accessing elements in queue is using push pop only 
//queue mein insertion karne ke liye push use hoga not push_back
//queue is a FIFO - FIRST IN FIRST OUT 
//deletion in queue is only in the front 
//addition in the queue is only in the end of the queue

/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"the front element of the queue is: "<<q.front()<<endl;
    q.pop();
    cout<<"the front element of the queue is: "<<q.front()<<endl;
    q.push(100);
    cout<<"the last element of the queue is: "<<q.back()<<endl;
}
*/




//SWAP IN queue
/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    
    queue<int>q2;
    q2.push(10);
    q2.push(20);
    q2.push(30);
    
    q1.swap(q2);
    cout<<"the first element of the queue is: "<<q1.front()<<endl;
    cout<<"the last element of the queue is: "<<q1.back()<<endl;
    
    if(q1.empty()){
        cout<<"yes it is empty"<<endl;
    }
    else{
        cout<<"nope it is not empty"<<endl;
    }
}
*/



//STACK 
//LIFO _ LAST IN FIRST OUT SHAADI KI PLATE 
//element top se hi remove hoga and top se hi insert hoga 
//jo last mein ayega wo pehle jayega 
/*
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    cout<<"the top element of the stack is: "<<stk.top()<<endl;
    stk.pop();
    cout<<"the top element of the stack is: "<<stk.top()<<endl;
}
*/



