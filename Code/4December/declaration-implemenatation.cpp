#include <iostream>
using namespace std;

// Function Implementation (or Definition)
int addNumbers(int a, int b) {
    return a + b; // Adds two numbers and returns the result
}

int main() {
    int x = 5, y = 10;
    // Calling the function
    int result = addNumbers(x, y);
    // Printing the result
    cout << "The sum of " << x << " and " << y << " is " << result << endl;
    return 0;
}

