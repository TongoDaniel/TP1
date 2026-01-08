#ifndef READER_H
#define READER_H

#include "book.h"
#include <string>
#include <vector>

class Reader {
public:
    Reader(const std::string& name,
           const std::string& surname);
    Reader(const Reader& other);

    std::string name() const;
    std::string surname() const;
    std::string memberID() const;

    std::vector<std::string> borrowedBooks() const;
    void addBorrowedBook(const std::string& idBorrowedBooks);

private:
    inline static int idCounter = 0;
    std::string name_;
    std::string surname_;
    std::string memberID_;
    std::vector<std::string> idBorrowedBooks_;
};

std::string to_string(const Reader& reader);

#endif // READER_H