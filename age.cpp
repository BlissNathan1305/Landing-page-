#include <iostream>
#include <ctime>

int main() {
    int birthYear;
    std::cout << "Enter your birth year: ";
    std::cin >> birthYear;

    // Get current time
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int currentYear = 1900 + ltm->tm_year;

    int age = currentYear - birthYear;

    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}
