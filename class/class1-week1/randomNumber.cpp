#include <iostream>

using namespace std;

int main() {
    // This is an initialization for rand()
    srand((int) time(0));

    int randomInt = rand() % 100 + 1;
    cout << "A random integer (1 to 100 ) has been created: " << randomInt << endl;

    int userInputX;
    do {
        cout << "\nPlease guess the number: " << endl;

        if(cin >> userInputX && cin.get() == '\n') {
            if (userInputX == randomInt) {
                cout << "That's right! The number is " << randomInt << endl;
                break;
            } else {
                if (userInputX < randomInt) {
                    cout << "The random number is higher" << endl;
                } else {
                    cout << "The random number is lower" << endl;
                }
            }
        } else {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Please input an integer!" << endl;
        }
    }while(true);
    return 0;
}