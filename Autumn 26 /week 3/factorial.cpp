#include <iostream>

int main(){
    int factorial = 1, num, num2, count = 0;
        std::cout << "enter a number" << std::endl;
        std::cin >> num;
        num2 = num;
         while (num > count){
            factorial = (factorial*num2);
             num2 = num2 - 1;
             count = count + 1;

    }
    std::cout << factorial << std::endl;
}