#include<iostream>
#include<string.h>
    using namespace std;
int main()
{
    // char arr1[100] = "Hello";
    // char arr2[100] = "Hello";

    // char *arr3 = "New string";

    // cout<<strlen(arr1)<<endl;

    // cout<<strcmp(arr1,arr2)<<endl;

    // cout<<arr3<<endl;

    // for(char ch : arr1){
    //     cout<<(int)ch << endl;
    //     if((int)ch == 0 ) break;
    //     // The ASCII value for '\0' is  indeed 0;
    // }
    string s;
    cout<<"Enter String :"<<endl;
    getline(cin,s);
    cout<<"S before : "<< s <<endl;
    cout<<s.length()<<endl;
    s.push_back('!');
    cout<<"S After :"<<s<<endl;
    cout<<s.length()<<endl;
    cout<<s.substr(1,3)<<endl;
    string s2 (s,2,2);
    cout<<s2<<endl; 
    
    int pos = s.find("a");
        if (pos == string::npos) {
            cout<<"Not found"<<endl;
        }
        else{
            cout<<"Found at : "<<pos<<" ,"<<s.at(pos)<<endl;
        }

        cout<<s.compare(s2)<<endl;
        cout<<s+s2<<endl;
        s.append(s2);
        cout<<s<<endl;
    return 0;
}
