#include <iostream>
    using namespace std;
int main() {
    int a = 10; // variable declearation and initialization 
    int *ptr; //pointer declearation  
        ptr = &a; //pointer initialization
    cout << ptr <<endl; //0x5ffe94
    cout<< &a <<endl; //0x5ffe94

    return 0;
}