

#include <iostream>
using namespace std;

int calculatePerimeter(int zijde1, int zijde2, int zijde3){
    return zijde1 + zijde2 + zijde3;
}

int main() {
    for(int i = 0; i < 5 ; i = i + 1){
        int perimeter = calculatePerimeter(i,3,4);
        cout << "Perimeter is equal to: " << perimeter << endl;
    }

    return 0;
}



