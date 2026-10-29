#include <iostream>

int main(){
    int num, i, j = 1;
    std::cout << "enter a number" << std::endl;
    std::cin >> num;
    while (j<=num){
        i = 1;
        while (i<=num){
            std::cout << i*j << " ";
            i = i + 1;
        }
        std::cout << std::endl;
        j = j + 1;
    }
    return 0;
}