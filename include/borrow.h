#ifndef BORROW_H
#define BORROW_H

#include "reader.h"

class Borrow {
public:
    Borrow(const Reader& borrower,
           const Book& borrowedBook,
           const Date& borrowDate);
    Borrow(const Borrow& other);

    Reader borrower() const;
    Book borrowedBook() const;
    Date borrowDate() const;

private:
    Reader borrower_;
    Book borrowedBook_;
    Date borrowDate_;
    Date returnDate_;
};

#endif // BORROW_H