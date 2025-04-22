#include <iostream>
int main() {
    char op;
    float a, b;
    std::cout << "Enter an operator (+ - * /): ";
    std::cin >> op;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    switch(op) {
        case '+': std::cout << "Result: " << a + b << std::endl; break;
        case '-': std::cout << "Result: " << a - b << std::endl; break;
        case '*': std::cout << "Result: " << a * b << std::endl; break;
        case '/': 
            if (b != 0)
                std::cout << "Result: " << a / b << std::endl;
            else
                std::cout << "Error: Division by zero!" << std::endl;
            break;
        default: std::cout << "Invalid operator!" << std::endl;
    }
    return 0;
}
