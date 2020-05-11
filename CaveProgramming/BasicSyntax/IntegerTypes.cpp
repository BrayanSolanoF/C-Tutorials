#include<iostream>
#include<limits>

using namespace std; 


int main(){

    int value = 46426;
    cout << value << endl;

    cout << INT32_MAX << endl;
    cout << INT32_MIN << endl;


    long int lValue = 78238912348745;
    cout << lValue << endl;

    short int sValue = 3722;
    cout << sValue << endl;

    cout << "Size of int " << sizeof(int) << endl;
    cout << "Size of short int " << sizeof(short int) << endl;
    cout << "Size of value " << sizeof(value) << endl;

    


    return 0;
}