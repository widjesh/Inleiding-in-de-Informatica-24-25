#include <iostream> // input/output

int main() {
    std::cout << "Hello, students!" << std::endl;
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You entered: " << age << std::endl;
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
    return 0;
}
