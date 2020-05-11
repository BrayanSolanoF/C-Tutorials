#include<iostream>

using namespace std;


int main() {

    int numberCats = 5;
    int numberDogs = 7;
    int numberAnimals = numberCats + numberDogs;

    cout << "Number of Cats: " << numberCats << endl;
    cout << "Number of Dogs: " << numberDogs << endl;

    cout << "Total number of animals: " << numberAnimals << endl;

    cout << "New dog acquired!" << endl;

    numberDogs = numberDogs + 1;

    numberAnimals = numberDogs + numberCats;

    cout << "New number of dogs: " << numberDogs << endl;

    cout << "New number of animals: " << numberAnimals << endl;

    return 0;

}