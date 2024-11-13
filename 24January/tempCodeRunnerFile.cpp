  std::set<int> mySet; // [3,4,6,7]

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicates are automatically ignored [10,20,30,20] - [10,20,30]
    mySet.insert(30); // Duplicates are automatically ignored [10,20,30,20] - [10,20,30]

    // Print elements of the set
    std::cout << "Set contains:";
    for (std::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << ' ' << *it;
    }
    std::cout << std::endl;