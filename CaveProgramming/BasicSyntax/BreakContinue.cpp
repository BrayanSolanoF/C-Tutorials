#include <iostream>

using namespace std;

int main()
{

  /* break ... 
  
    for (int i = 0; i < 5; i++)
    {

        cout << "i is: " << i << endl;

        if (i == 4)
        {
            break;
        }

        cout << "looping... " << endl;
    } */

    /*  Continue ...
    for (int i = 0; i < 5; i++)
    {

        cout << "i is: " << i << endl;

        if (i == 3)
        {
            continue;
        }

        cout << "looping... " << endl;
    } */

    const string password = "Roadster2020";
    
    string input;
    
    do{

        cout << "Enter your password > " << flush;
        cin >> input;

        if(input == password){
            break;    
        }else{
            cout << "Password denied" << endl;
        }

    }while(true);

    cout << "Password accepted " << endl;


    

    return 0;
}