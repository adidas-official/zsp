#include <iostream>

enum option_e {
    STOP = 'q',
    CONTINUE = 'c',
    NEW = 'n',
    EDIT = 'e',
    DELETE = 'd',
};

int main() {

    char optionbuf[4];

    while (optionbuf[0] != STOP) {
        std::cout << "Choose: ";
        std::cin >> optionbuf;

        switch (optionbuf[0]) {
        case STOP:
            std::cout << "Good bye!"<< std::endl;
            return 0;
        
        case CONTINUE:
            std::cout << "Let us proceed " << optionbuf << std::endl;
            break;
        
        default:
            std::cout << "You entered the wrong value: " << optionbuf << std::endl;
            break;
        }
    }
}