#include <iostream>
using namespace std;

int findHighest(const int array[], size_t size) {

    int highest = array[0]; // Assume the first element is the highest

    for (int i = 1; i < size; ++i) {
        if (array[i] > highest) {
            highest = array[i]; 
        }
    }

    return highest;
}


int main() {
    // Printing even numbers from 1 to 20
    int x = 10;
    cout << x++ << " " << ++x;
}

// int main() {
    // // Array declaration and initialization
    // int numbers[5] = {1, 2, 3, 4, 5}; 
    // // 200 
    // // Accessing array elements
    // // cout << numbers[1] << endl; // Outputs the first element
    
    // size_t arraySize = sizeof(numbers) / sizeof(numbers[0]);
    // cout << "Array Size is equal to " <<arraySize << endl; // Outputs the length of the array

    // for (int i = 0; i < arraySize; i=i+1) {
    //     cout << numbers[i] << " ";
        
    // }
    // cout << endl;
    // numbers[1] = 6;

    //  for (int i = 0; i < arraySize; i=i+1) {
    //     cout << numbers[i] << " ";
    // }


    // //Modify the third element
    // return 0;

    //------------------------------------------------------

    // string words[] = {"Hello", "World", "in", "C++"};
    // string findWord = "World";

    // size_t arraySize = sizeof(words) / sizeof(words[0]); // 4

    // for (size_t i = 0; i < arraySize; i=i+1) {
    //     if(words[i] == findWord){ // World == Worl
    //         cout << "Found Target "  << words[i] << endl;
    //     }else{
    //         cout<< words[i] << " did not match " << findWord << endl;
    //     }
    // }
    // return 0;

    //------------------------------------------------------

    // int numbers[] = {14, 30, 8, 25, 18}; // Sample array

    // size_t arraySize = sizeof(numbers) / sizeof(numbers[0]);

    // int highestNumber = findHighest(numbers, arraySize);

    // cout << "The highest number in the array is: " << highestNumber << endl;

    // return 0;
// }

