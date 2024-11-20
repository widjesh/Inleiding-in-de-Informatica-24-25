#include <iostream> // input/output

using namespace std;

int main() {
    cout << "Hello, students!" << endl;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You entered: " << age << endl;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}
