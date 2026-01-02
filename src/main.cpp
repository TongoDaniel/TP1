#include <iostream>
#include "../include/date.h"

int main() {
    Date date1(2023, 12, 31);
    Date date2 = date1.nextDay();
    Date date3 (2024, 2, 20);
    std::cout << "Date 1: " << to_string(date1) << std::endl;
    std::cout << "Date 2: " << to_string(date2) << std::endl;
    std::cout << "Is Date 1 before Date 2? " << (date1.isBefore(date2) ? "Yes" : "No") << std::endl;
    std::cout << "Day of Year for Date 1: " << date3.dayOfYear() << std::endl;

    std::cout << "Hello, World!" << std::endl;
    std::cout << "Happy New Yea!" << std::endl;
    return 0;
}