#include <iostream>

int addOne(int n) {
    return n + 1;	
}

int main() {
    int x = addOne(1);
    std::cout << "This will run" << std::endl;
    if (x == 2) {
        std::cout << "x is equal to 2" << std::endl;
    }
}
