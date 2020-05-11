  #include<iostream>

  using namespace std;



 /**
  * == equality test
  * != not equal
  * < less than
  * > greater than
  * <= less than or equal to
  * >= greather than or equal to
 */


  int main(){


    int value1 = 7;
    int value2 = 4;

    if(value1 >= 7 ){

        cout << "Condition1: true" << endl;

    }
    else{

        cout << "Condition1: false" << endl;
    }

    if(value1 == 7 && value2 ==  4 ){

        cout << "Condition2: true" << endl;

    }
    else{

        cout << "Condition2: false" << endl;
    }

    if(value1 >  7 || value2 == 4 ){

        cout << "Condition3: true" << endl;

    }
    else{

        cout << "Condition3: false" << endl;
    }

    if((value1 !=  7 && value2 <  4) || value1 > 6){

        cout << "Condition4: true" << endl;

    } 
    else{

        cout << "Condition4: false" << endl;
    }

    bool condition1 = (value2 != 8) && (value1 == 7);
        cout << condition1 << endl;

    bool condition2 = value1 < 10;
        cout << condition2 << endl; 


    if( condition1 || condition2 ){

        cout << "Condition5: true" << endl;

    } 
    else{

        cout << "Condition5: false" << endl;
    }



    return 0;
  }