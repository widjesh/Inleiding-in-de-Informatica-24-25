#include <iostream>
using namespace std;

int main() {
    int numbers[] = {3, 8, 15, 22, 7, 14};
    int evenCount = 0;

    for (int i = 0; i < 6; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
    }

    cout << "Number of even elements: " << evenCount << endl;
    return 0;
}
