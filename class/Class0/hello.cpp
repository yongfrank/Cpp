#include <iostream>

using namespace std;

int main() {
    srand((int) time(0));
    cout << rand() % 100 + 1 << endl;

    int randonInt = rand() % 100 + 1;
    cout << "A random integer (1 to 100) has been created" << endl;
}