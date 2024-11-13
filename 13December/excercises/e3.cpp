
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;

int main() {
    int number;
    cin >> number;
    for(int i=1;i<=10;i++){
        cout << i << " X " << number << " = " << i*number << endl;
    }
    return 0;
}


