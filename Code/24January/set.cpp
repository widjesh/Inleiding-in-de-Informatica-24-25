#include <iostream> // input/output
#include <set> // To inlcude set as datastructures

int main() {
    // Declare a set of integers
    std::set<int> mySet;

    // Insert elements into the set
    //containers = data structure = set, list , ...
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(30);

    //input --> list = [10,30,50,20,10,30,80,20]
    //output --> uniqueList = [10,30,50,20,80]


    // Print elements of the set
    std::cout << "Set contains:";
    for (std::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << ' ' <<*it;
    }

    // std::cout << std::endl;

    // // Search for an element in the set
    // std::set<int>::iterator searchResult = mySet.find(20);
    // if (searchResult != mySet.end()) {
    //     std::cout << "Element 20 found in the set.\n";
    // } else {
    //     std::cout << "Element 20 not found in the set.\n";
    // }

    // // Erase an element from the set
    // mySet.erase(20);

    // // Print elements of the modified set
    // std::cout << "After erasing, set contains:";
    // for (std::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it) {
    //     std::cout << ' ' << *it;
    // }
    // std::cout << std::endl;

    return 0;
}
