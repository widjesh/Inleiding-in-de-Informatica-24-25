#include <iostream>
using namespace std;

int main() {
    int numbers[] = {45, 22, 78, 34, 89, 12};
    int max = numbers[0]; 

    for (int i = 1; i < 6; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    cout << "Largest element: " << max << endl;
    return 0;
}
