#include <iostream>
using namespace std;

// Function prototypes (declarations):
void printCrap(int x);              // void: does NOT return a value, just does something
int addNumbers(int a, int b);       // int: RETURNS an int value to the caller

int main() {
    printCrap(3); // Calls the void function, just prints a message

    int result = addNumbers(4, 5); // Calls the int function, stores the returned value
    cout << "The sum is " << result << endl;

    return 0;
}

// Definition of void function: does NOT return anything
void printCrap(int x) {
    cout << "Bucky's favorite number is " << x << endl;
    // No 'return' statement needed, because return type is void
}

// Definition of int function: RETURNS a value of type int
int addNumbers(int a, int b) {
    int answer = a + b;
    // Calculates sum and returns it to the caller (main)
    return answer;
}