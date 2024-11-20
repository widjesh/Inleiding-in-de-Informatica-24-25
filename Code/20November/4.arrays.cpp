#include <iostream>

int main() {
    // Initializing an array with 5 elements
    int numbers[5] = {10, 20, 30, 40, 50};

    // Retrieving data from the array
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers[1] << std::endl;
    std::cout << "Third element: " << numbers[2] << std::endl;
    std::cout << "Fourth element: " << numbers[3] << std::endl;
    std::cout << "Fifth element: " << numbers[4] << std::endl;

    // Setting data in the array
    numbers[0] = 100;
    numbers[1] = 200;
    numbers[2] = 300;
    numbers[3] = 400;
    numbers[4] = 500;

    // Retrieving data again to show the changes
    std::cout << "First element after setting new values: " << numbers[0] << std::endl;
    std::cout << "Second element after setting new values: " << numbers[1] << std::endl;
    std::cout << "Third element after setting new values: " << numbers[2] << std::endl;
    std::cout << "Fourth element after setting new values: " << numbers[3] << std::endl;
    std::cout << "Fifth element after setting new values: " << numbers[4] << std::endl;

    return 0;
}