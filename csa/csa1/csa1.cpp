//CHAR ARRAY STRING 

//using cin>>arr when we input ravish aggarwal, the output will be ravish only
//when we use cin then it has inbuilt delimiter enter, tab, space 
//either of these delimiter when encountered it stops reading the input

/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    char arr[100];
    cout<<"enter your full name please: "<<endl;
    cin>>arr;
    cout<<"the name you have entered is: "<<arr<<endl;
    return 0;
}
*/


//for char inputs better use cin.getline(arr,100,delimiter) if no delimiter is mentioned it will be space 

/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    char arr[100];
    cout<<"enter your full name please: "<<endl;
    cin.getline(arr,100);
    cout<<"the required name you have entered are: "<<arr<<endl;
    return 0;
}
*/



//CHAR LENGTH 

/*
#include<iostream>
using namespace std;
int getLength(char arr[],int size){
    int index = 0;
    int count = 0;
    while(arr[index] != '\0'){
        count++;
        index++;
    }
    return count;
}
int main(){
    char arr[100];
    cout<<"enter your name and we will tell the length of your name: "<<endl;
    cin.getline(arr,100);
    int length = getLength(arr,100);
    cout<<"the length of your name is: "<<length<<endl;
    return 0;
}
*/


//REPLACE @ BY SPACE 
/*
#include<iostream>
using namespace std;
void replacer(char str[], int size, char originialVal,char newVal){
    for(int i = 0; i<size; i++){
        if(str[i] == originialVal){
            str[i] = newVal;
        }
    }
    cout<<"the replaced result is: "<<endl;
    cout<<str<<endl;
}
int main(){
    char str[1000];
    cout<<"enter the string"<<endl;
    cin>>str;
    char originialVal = '@';
    char newVal = ' ';
    replacer(str,1000, originialVal,newVal);
    return 0;
}
*/


//LOWER TO UPPER 
//UPPER TO LOWER 
/*
#include<iostream>
using namespace std;
int getLength(char arr[], int size){
    int index = 0;
    int count = 0;
    while(arr[index]!='\0'){
        count++;
        index++;
    }
    return count;
}
void lowerToUpper(char str[],int n){
    int len = getLength(str,n);
    for(int i = 0; i<len; i++){
        char res = str[i];
        if(res>='a' && res<='z'){
            res = res - 'a' + 'A';
        }
        str[i] = res;
    }
    for(int i = 0; i<n; i++){
        cout<<str[i]<<" ";
    }
}
int main(){
    char str[1000];
    cout<<"enter the string"<<endl;
    cin>>str;
    cout<<"here the string is converted from lower to upper"<<endl;
    lowerToUpper(str,1000);
    return 0;
}
*/



//UPPER TO LOWER 
/*
#include<iostream>
using namespace std;
int getLength(char arr[]){
    int index = 0;
    int count = 0;
    while(arr[index]!='\0'){
        count++;
        index++;
    }
    
    return count;
}
void upperToLower(char arr[], int size){
    int len = getLength(arr);
    for(int i = 0; i<size; i++){
        char res = arr[i];
        if(res>='A' && res<='Z'){
            res = res-'A' + 'a';
        }
        arr[i] = res;
    }
    cout<<"the required string in lower case is: "<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    char arr[100];
    cout<<"enter the string in upper case"<<endl;
    cin>>arr;
    upperToLower(arr,100);
    return 0;
}
*/


//REVERSE THE STRING 

/*
#include<iostream>
using namespace std;
int getLength(char arr[]){
    int index = 0;
    int count = 0;
    while(arr[index]!='\0'){
        count++;
        index++;
    }
    return count;
}
void stringReverser(char arr[],int size){
    int len = getLength(arr);
    int i = 0;
    int j = len-1;
    while(i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    char arr[100];
    cout<<"enter the string"<<endl;
    cin>>arr;
    stringReverser(arr,100);
    return 0;
}
*/



//PALINDROME 
/*
#include<iostream>
using namespace std;
int getLength(char arr[]){
    int index = 0;
    int count = 0;
    while(arr[index]!='\0'){
        count++;
        index++;
    }
    return count;
}

bool palindromeCheck(char arr[],int size){
    int len = getLength(arr);
    int i = 0;
    int j = len-1;
    while(i<=j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char arr[100];
    cout<<"enter the string and we will tell whether it is a palidrome or not"<<endl;
    cin>>arr;
    bool ans = palindromeCheck(arr,100);
    if(ans){
        cout<<"the entered string is a palindrome"<<endl;
    }
    else{
        cout<<"the entered string is not a palindrome"<<endl;
    }
    return 0;
}
*/



//STRING 
/*
#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter your name"<<endl;
    getline(cin,name);
    cout<<"your name is: "<<endl;
    cout<<name;
    cout<<name.front()<<""<<endl;
    cout<<name.back()<<""<<endl;
    cout<<"length of the string is"<<name.length()<<endl;
    if(name.empty()){
        cout<<"the string is empty"<<endl;
    }
    else{
        cout<<"the string is not empty"<<endl;
    }
    return 0;
}

*/


/*
#include<iostream>
using namespace std;
int main(){
    cout<<"enter your first name"<<endl;
    string fname;
    getline(cin,fname);
    cout<<"enter your second name"<<endl;
    string lname;
    getline(cin,lname);
    cout<<"showcasing string concatination"<<endl;
    string ans = fname + " "+lname;
    cout<<"your fullname is: "<<ans<<endl;
    
}
*/



//SUBSTRING
/*
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    cout<<"substringing 0 until 5"<<endl;
    cout<<str.substr(0,5)<<" ";
    cout<<"substringing from 0 all"<<endl;
    cout<<str.substr(0)<<" ";
    return 0;
}
*/


//FIND
/*
#include<iostream>
using namespace std;
int main(){
    cout<<"enter the string"<<endl;
    string str;
    getline(cin,str);
    cout<<"enter the word you would like to find"<<endl;
    string word;
    cin>>word;
    int finder =str.find(word);
    cout<<finder<<""<<endl;
    if(str.find(word)!=string::npos){
        cout<<"the word is present"<<endl;
    }
    else{
        cout<<"the word is not present"<<endl;
        }
}
*/


//COMPARE 
#include<iostream>
using namespace std;
int main(){
    cout<<"enter string 1"<<endl;
    string str1;
    cin>>str1;
    cout<<"enter string 2"<<endl;
    string str2;
    cin>>str2;
    cout<<"comparing both the strings"<<endl;
    cout<<str1.compare(str2);
}

