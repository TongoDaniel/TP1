#ifndef LIBRARY_H
#define LIBRARY_H

#include "borrow.h"
class Library {

    std::vector<Book> getBooks() const;
    std::vector<Reader> getReaders() const;
    std::vector<Author> getAuthors() const;
    std::vector<Borrow> getBorrows() const;


private:
    std::vector<Book> books_;
    std::vector<Reader> readers_;
    std::vector<Author> authors_;
    std::vector<Borrow> borrows_;

};


#endif // LIBRARY_H