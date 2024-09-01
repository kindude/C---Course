#include <iostream>

int main() {
    int current_day;
    int day_difference;
    int result_day;

    std::cout << "Enter the current day (1: Monday, ..., 7: Sunday): ";
    std::cin >> current_day;

    if (current_day < 1 || current_day > 7) {
        std::cout << "Invalid day. Please enter a number between 1 and 7." << std::endl;
        return 1; 
    }

    std::cout << "Enter the number of days to go back: ";
    std::cin >> day_difference;

    result_day = (current_day - day_difference) % 7;

    if (result_day <= 0) {
        result_day += 7;
    }

    std::cout << "The day " << day_difference << " days ago was a ";

    switch (result_day) {
        case 1:
            std::cout << "Monday." << std::endl;
            break;
        case 2:
            std::cout << "Tuesday." << std::endl;
            break;
        case 3:
            std::cout << "Wednesday." << std::endl;
            break;
        case 4:
            std::cout << "Thursday." << std::endl;
            break;
        case 5:
            std::cout << "Friday." << std::endl;
            break;
        case 6:
            std::cout << "Saturday." << std::endl;
            break;
        case 7:
            std::cout << "Sunday." << std::endl;
            break;
    }

    return 0;
}
