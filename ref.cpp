#include<iostream>
    using namespace std;
    
    void modify(int a){
        a++;
    }

    void modifyref(int &a){
        a++;
    }

int main()

{
    int a = 11;
    int b = a;
    int &ref = a;

    a = a + 1;


    cout<< "a : "<<a<<endl;
    cout<< "b : "<<b<<endl;
    cout<< "ref : "<<ref<<endl;
    cout<< "     " <<endl;

    a=11;
    b=a;
    ref=a;

    b=b+1;

    cout<< "a : "  << a <<endl;
    cout<< "b : "  << b <<endl;
    cout<< "ref : "<< ref <<endl;
    cout<< "     " << endl;

    a=11;
    b=a;
    ref=a;

    ref=ref+1;

    cout<< "a : "  << a <<endl;
    cout<< "b : "  << b <<endl;
    cout<< "ref : "<< ref <<endl;
    cout<< "     " << endl;

    b=10;
        cout<<"Bedore modify function call : b ="<<b<<endl;
        modify(b);
        cout<<"After modify function call : b ="<<b<<endl;
        cout<< "_____________"<<endl;
    
    b=10;
    cout<<"Bedore modify reference function call : b ="<<b<<endl;
    modifyref(b);
    cout<<"After modify reference function call : b ="<<b<<endl;
    
    return 0;
}