#include<iostream>

using namespace std;


int  main(){

    int BryanAge = 22;
    int MariaLauraAge = 18;
    int Ages = BryanAge + MariaLauraAge;



    cout << "Bryan's Age: " << BryanAge << endl;
    cout << "MariaLaura's Age: " << MariaLauraAge << endl;

    cout << "Both Ages: " << Ages << endl;

    cout << "Maria Laura's birthday is on May 25 so she will has 19 soon " << endl;

    MariaLauraAge = MariaLauraAge + 2;

    cout << "MariaLaura's Age: " << MariaLauraAge << endl;

    Ages = BryanAge + MariaLauraAge;

    cout << "Now our ages are equal to: " << Ages << endl;







    return 0;
}