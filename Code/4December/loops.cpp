#include <iostream>
using namespace std;

int main() {
    // 1. For Loop
    cout << "Using a for loop:" << endl;
    for (int i = 1; i <= 5; i++) { // Loop from 1 to 5
        cout << "Iteration: " << i << endl;
    }

    cout << endl;

    // 2. While Loop
    cout << "Using a while loop:" << endl;
    int counter = 1; // Initialize the counter
    while (counter <= 5) { // Loop as long as the condition is true
        cout << "Iteration: " << counter << endl;
        counter++; // Increment the counter
    }

    cout << endl;

    // 3. Do-While Loop
    cout << "Using a do-while loop:" << endl;
    int count = 1; // Initialize the count
    do {
        cout << "Iteration: " << count << endl;
        count++; // Increment the count
    } while (count <= 5); // Condition checked after the loop

    return 0;
}
