#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }
    return 0;
}