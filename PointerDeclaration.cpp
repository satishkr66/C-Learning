#include <iostream>
    using namespace std;
int main() {
    // int a = 10; // variable declearation and initialization 
    // int *ptr; //pointer declearation  
    //     ptr = &a; //pointer initialization
    //     // we can also delcare and initlization in sigle line like this (int *ptr = &a ).
    // cout << ptr <<endl; //0x9e03dff714
    // cout<< &a <<endl; //0x9e03dff714
    // cout<< *ptr <<endl; //10
    // cout<< a<<endl; //10

    // Dynamically allocation or Deallocation memory 
    // int a =10;
    // int *ptr= &a; 
    //     ptr = new int(10); // Dynamic allocation 
    //     delete  ptr;// deallocation
                // how to allocate and deallocate memory using pointer for array .
    int *ptr;
    int n = 10;
     ptr = new int [n];
     delete []ptr;
    cout<<*ptr<<endl;
    return 0;
}