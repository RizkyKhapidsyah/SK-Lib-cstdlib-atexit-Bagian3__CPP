#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

void first() {
    cout << "Exit first" << endl;
}

void second() {
    cout << "Exit Second" << endl;
}

void third() {
    cout << "Exit Third" << endl;
}

void fourth() {
    cout << "Exit Fourth" << endl;
}

int main() {
    int value1, value2, value3, value4;
    value1 = atexit(first);
    value2 = atexit(second);
    value3 = atexit(third);
    value4 = atexit(fourth);
    if ((value1 != 0) or (value2 != 0) or
        (value3 != 0) or (value4 != 0)) {
        cout << "atexit() function registration Failed" << endl;
        exit(1);
    }
    
    cout << "Registration successful" << endl;

    _getch();
    return 0;
}