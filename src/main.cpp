#include "../include/borrow.h"


int main() {
    Date date1(2023, 12, 31);
    Date date2 = date1.nextDay();
    Date date3 (2024, 2, 3);
    std::cout << "Date 1: " << to_string(date1) << std::endl;
    std::cout << "Date 2: " << to_string(date2) << std::endl;
    std::cout << "Is Date 1 before Date 2? " << (date1.isBefore(date2) ? "Yes" : "No") << std::endl;
    std::cout << "Day of Year for Date 1: " << date3.dayOfYear() << std::endl << std::endl;

    std::cout << "Hello, World!" << std::endl;
    std::cout << "Happy New Yea!" << std::endl << std::endl;

    Author author1("John", "Doe", Date(1980, 5, 15));
    std::cout << "\tAuthor 1 info: \n" << to_string(author1) << std::endl;
    Author author2("Jane", "Austen", Date(1775, 12, 16));
    std::cout << "\tAuthor 2 info: \n" << to_string(author2) << std::endl << std::endl;

    Book book1("C++ Programming", author1, "English", "Educational", Date(2020, 6, 1), "123-4567890123");
    std::cout << "\tBook 1 info: \n" << to_string(book1) << std::endl;
    Book book2("Pride and Prejudice", author2, "English", "Fiction", Date(1813, 1, 28), "987-6543210987");
    std::cout << "\tBook 2 info: \n" << to_string(book2) << std::endl << std::endl;

    Reader reader1("Alice", "Smith");
    std::cout << "\tReader 1 info: \n" << to_string(reader1) << std::endl;
    Reader reader2("Bob", "Johnson");
    std::cout << "\tReader 2 info: \n" << to_string(reader2) << std::endl << std::endl;

    loanBook(reader1, book1);
    loanBook(reader2, book1);

    return 0;
}