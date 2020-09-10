#include <iostream>
#include <string>
int counter = 0;
char reply;

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
    std::cout << "\n";
    system("pause");
}

void taskTwo() {
    for (int i = 0; i < 100; i++) {
        std::cout << 100 - i << " ";
    }
    std::cout << "\n";
    system("pause");
}

void taskThree() {
    counter = 0;
    while (counter < 10) {
        std::cout << (counter + 1) * 5 << " ";
        counter++;
    }
    std::cout << "\n";
    system("pause");
}

void taskFour() {
    for (int i = 0; i < 10; i++) {
        std::cout << (i + 1) * 5 << " ";
    }
    std::cout << "\n";
    system("pause");
}

void taskFive() {
    counter = 0;
    do {
        std::cout << (counter + 1) * 5 << " ";
        counter++;
    } while (counter < 10);
    std::cout << "\n";
    system("pause");
}

void taskSeven() {
    switch (reply)
    {
    case 'a':
        reply = 'A';
        break;
    case 'b':
        reply = 'B';
        break;
    case 'c':
        reply = 'C';
        break;
    case 'd':
        reply = 'D';
        break;
    case 'e':
        reply = 'E';
        break;
    case 'f':
        reply = 'F';
        break;
    }
}

void taskSix() {
    std::cout << "What grade would you like to recieve in programming 1? A-F\n";
    std::cin >>  reply;
    taskSeven();
    switch (reply) {
    case 'A':
        std::cout << "Outstanding!\n";
        break;
    case 'B':
        std::cout << "Very good \n";
        break;
    case 'C':
        std::cout << "Good\n";
        break;
    case 'D':
        std::cout << "Some flaws\n";
        break;
    case 'E':
        std::cout << "Not very good\n";
        break;
    case 'F':
        std::cout << "Fail\n";
        break;
    default:
        std::cout << "This is not a grade!\n";
        break;
    }
    system("pause");
}


int main()
{
    std::string waste = "";
    int menuChoice = 0;
    bool finished = false;
    while (finished == false) {
        system("cls");
        std::cout << "Which task would you like?\n";
        std::cout << "1. Task 1\n";
        std::cout << "2. Task 2\n";
        std::cout << "3. Task 3\n";
        std::cout << "4. Task 4\n";
        std::cout << "5. Task 5\n";
        std::cout << "6. Task 6 and 7\n";
        std::cout << "7. Exit\n";
        std::cin >> menuChoice;
        std::cin.clear();
        while (menuChoice < 1 || menuChoice > 7) {
            std::cin.clear();
            std::cin.ignore(100, '\n');
            std::cout << "Please make a valid selection.\n";
            std::cin >> menuChoice;
        }

        switch (menuChoice) {
        case 1:
            taskOne();
            break;
        case 2:
            taskTwo();
            break;
        case 3:
            taskThree();
            break;
        case 4:
            taskFour();
            break;
        case 5:
            taskFive();
            break;
        case 6:
            taskSix();
            break;
        case 7:
            finished = true;
            break;
        }
    }
    
    return 0;
} 

