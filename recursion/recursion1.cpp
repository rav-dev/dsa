//RECURSION

//FACTORIAL 
/*
#include<iostream>
using namespace std;
int factorial(int n){
    //base condition
    if(n == 0 || n ==1){
        return 1;
    }
    
    //recursive relation 
    int ans = n * factorial(n-1);
    return ans;
    //processing
}
int main(){
    cout<<"enter the value for which you would like to find the factorial"<<endl;
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<"the required factorial value is: "<<ans<<endl;
}
*/


//PRINT REVERSE COUNTING 
/*
#include<iostream>
using namespace std;
void printCount(int n){
    //base condition 
    if(n == 0){
        return;
    }
    
    //processing 
    cout<<n<<" ";
    
    //recursive condition
    printCount(n-1);

}
int main(){
    cout<<"enter the value and we will print the reverse counting from that number until 1: "<<endl;
    int n;
    cin>>n;
    printCount(n);
    return 0;
}
*/



//PRINT NORMAL COUNT
/*
#include<iostream>
using namespace std;
void forwardCounter(int n){
    //base condition
    if(n == 0){
        return;
    }
    forwardCounter(n-1);
    cout<<n<<" ";
}
int main(){
    cout<<"enter the number and we will do a forward counting from 1 until that number"<<endl;
    int n;
    cin>>n;
    forwardCounter(n);
    return 0;
}
*/



//FIND 2^n 
/*
#include<iostream>
using namespace std;
int pow(int n){
    //base condition 
    if(n == 0){
        return 1;
    }
    //recursive cond 
    int ans = 2 * pow(n-1);
    //processing
}
int main(){
    cout<<"enter the power"<<endl;
    int n;
    cin>>n;
    int ans = pow(n);
    cout<<"the ans. is: "<<ans<<endl;
    return 0;
}
*/



//FIBO 0,1,1,2,3,5,8,13,31,34...
/*
#include<iostream>
using namespace std;
int fibo(int n){
    //base condition
    if(n == 0 || n == 1){
        return n;
    }
    //recursive condition
    int ans = fibo(n-1) +fibo(n-2);
    return ans;
    //processing
}
int main(){
    cout<<"enter the element you would like to access from the fibo series: "<<endl;
    int n;
    cin>>n;
    int ans = fibo(n);
    cout<<"the required ans is: "<<ans<<endl;
    return 0;
}
*/




