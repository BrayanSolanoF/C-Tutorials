#include<iostream>


using namespace std;


int main(){


    cout << "Array of integers " << endl;
    cout << "================= " << endl;

    int values[3]; 

    values[0] = 23;
    values[1] = 63;
    values[2] = 76;


    cout << values[0] << endl;
    cout << values[1] << endl;
    cout << values[2] << endl;


    cout << "Array of doubles " << endl;
    cout << "================= " << endl;


    double decimals[4] = { 4.9, 0.8, 8.4, 6.5 };
    
    for(int i=0; i<4 ; i++){

        cout << "Element at index " << i << ": " << decimals[i] << endl;
    }

    cout << "Initializing with zero values " << endl;
    cout << "================= " << endl;

    int numberArray[8] = {};

    for(int i=0; i<8 ; i++){

        cout << "Element at index " << i << ": " << numberArray[i] << endl;
    }

    cout << "Array of strings " << endl;
    cout << "================   " << endl;


    string texts[] = {"hola", "guapo", "love u"};

    for(int i=0; i<3 ; i++){

        cout << "Element at index " << i << ": " << texts[i] << endl;
    }

    return 0;
}