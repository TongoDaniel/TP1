#ifndef BORROW_H
#define BORROW_H

#include "reader.h"

class Borrow {
public:
    Borrow(const Reader& borrower,
           const Book& borrowedBook,
           const Date& borrowDate,
           const Date& returnDate,
           bool isReturned);
    Borrow(const Borrow& other);

    Reader borrower() const;
    Book borrowedBook() const;
    Date borrowDate() const;
    Date returnDate() const;
    bool returnStatus() const;

private:
    Reader borrower_;
    Book borrowedBook_;
    Date borrowDate_;
    Date returnDate_;
    bool isReturned_;
};

#endif // BORROW_H