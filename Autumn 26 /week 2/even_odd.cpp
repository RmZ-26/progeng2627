#include <iostream>
int main() {
    int num,rem;
    std::cout << "enter a number" << std::endl;
    std::cin >> num;
    rem = num % 2;

    if (rem == 0) {
        std::cout << "the number is even" << std::endl;
    }
    else {
        std::cout << "the number is odd" << std::endl;
    }
}
   