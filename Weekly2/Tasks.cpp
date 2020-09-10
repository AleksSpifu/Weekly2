#include <iostream>
int counter = 0;

void taskOne() {
    counter = 0;
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

void taskTwo() {
    for (int i = 0; i < 100; i++) {
        std::cout << 100 - i << " ";
    }
}

void taskThree() {
    counter = 0;
    while (counter < 10) {
        std::cout << (counter + 1) * 5 << " ";
        counter++;
    }
}

void taskFour() {
    for (int i = 0; i < 10; i++) {
        std::cout << (i + 1) * 5 << " ";
    }
}

void taskFive() {
    counter = 0;
    do {
        std::cout << (counter + 1) * 5 << " ";
        counter++;
    } while (counter < 10);
}

void taskSixAndSeven() {

}

int main()
{
    taskFive();
    return 0;
} 

