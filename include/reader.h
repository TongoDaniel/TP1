#ifndef READER_H
#define READER_H

#include "book.h"

class Reader {
public:
    Reader(const std::string& name,
           const std::string& surname);

    std::string name() const;
    std::string surname() const;
    std::string memberID() const;
    std::vector<Book> borrowedBooks() const;

private:
    inline static int idCounter = 0;
    std::string name_;
    std::string surname_;
    std::string memberID_;
    std::vector<Book> borrowedBooks_;
};

std::string to_string(const Reader& reader);

#endif // READER_H