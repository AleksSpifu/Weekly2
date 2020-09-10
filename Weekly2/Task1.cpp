#include <iostream>
int counter = 0;
int main()
{
    std::cout << "This is with a while loop: \n";
    while (counter < 100) {
        std::cout << counter + 1 << " ";
        counter++;
    }
    std::cout << "\nAnd this is with a for loop: \n";
    for (int i = 0; i < 100; i++) {
        std::cout << i + 1 << " ";
    }
} 