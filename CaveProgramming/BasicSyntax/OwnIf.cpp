#include<iostream>

using namespace std;


int main(){


    int password = 1525;

    cout << "Enter your password " << flush;

    int valueEntered;

    cin >> valueEntered;


    if(valueEntered == password){

        cout << "You're fucking right. " << endl;



    }
    if (valueEntered != password){

        cout << "Try again. " << endl;

    }









    return 0;
}