#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 15, 25, 30};
    int target = 15;
    int index = -1;

    for (int i = 0; i < 5; i++) {
        if (numbers[i] == target) {
            index = i;
            break;
        }
    }

    cout << "Index of " << target << ": " << index << endl;
    return 0;
}
