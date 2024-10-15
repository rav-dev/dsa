//POINTER 
//SCENARIO-1
/*
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *p = &a;
    cout<<"the address of the pointer is: "<<&p<<endl;
    cout<<"the address to which the pointer is pointing to: "<<p<<endl;
    cout<<"address of variable a is: "<<&a<<endl;
    cout<<"*p is: "<<*p<<endl;
    return 0;
}
*/


//SCENARIO-2
/*
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *p = &a;
    //copy pointer
    int *q = p;
    cout<<"p: "<<p<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"q: "<<q<<endl;
    cout<<"*q: "<<*q<<endl;
    cout<<"&q: "<<&q<<endl;
    return 0;
}
*/

//THE SIZE OF THE POINTER IS ALWAYS 8 BYTES

//SCENARIO-3
//WILD POINTER EXAMPLE 
/*
#include<iostream>
using namespace std;
int main(){
    int *p;
    cout<<"p: "<<p<<endl;
    cout<<"&p: "<<&p<<endl;
    cout<<"*p: "<<*p<<endl;
    return 0;
}
*/



//SCENARIO-4
//CHAR ARRAY
/*
#include<iostream>
using namespace std;
int main(){
    char ch[50] = "lovebabbar";
    char* ptr = ch;
    cout<<"ch: "<<ch<<endl;
    cout<<"&ch: "<<&ch<<endl;
    cout<<"ch[0]: "<<ch[0]<<endl;
    cout<<"&ptr: "<<&ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"*(ptr+2): "<<*(ptr+2)<<endl;
    return 0;
    
}
*/


//SCENARIO-5
//MULTI LEVEL POINTER 
/*
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *p = &a;
    int **q = &p;
    cout<<"(a: )"<<a<<endl;
    cout<<"(&a: )"<<&a<<endl;
    cout<<"(p: )"<<p<<endl;
    cout<<"(&p: )"<<&p<<endl;
    cout<<"(*p: )"<<*p<<endl;
    cout<<"(q: )"<<q<<endl;
    cout<<"(&q: )"<<&p<<endl;
    cout<<"(*q: )"<<*q<<endl;
    cout<<"(**q: )"<<**q<<endl;
    return 0;
}
*/



//SCENARIO-6

//creating variable using heap 
/*
#include<iostream>
using namespace std;
int main(){
    //int *p = new int;
    //*p = 5;
    //cout<<*p<<endl;
    //de-allocaing
    //delete p;
    //creating array using heap
    int *arr =new int[3];
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;
    //de-allocating array
    delete[] arr;
    return 0;
}
*/


//creating 2-d array using heap 
/*
#include<iostream>
using namespace std;
int main(){
    //4 rows 
    //3 cols
    //creating the array of pointers
    int** arr = new int*[4];
    //creating 1 D array
    for(int i = 0; i<4;i++){
        arr[i] = new int[3];
    }
}
*/

