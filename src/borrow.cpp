#include "../include/borrow.h"

Borrow::Borrow(const Reader& borrower,
               const Book& borrowedBook,
               const Date& borrowDate)
    : borrower_(borrower),
      borrowedBook_(borrowedBook),
      borrowDate_(borrowDate) {}
Borrow::Borrow(const Borrow& other)
    : borrower_(other.borrower_),
      borrowedBook_(other.borrowedBook_),
      borrowDate_(other.borrowDate_) {}

Reader Borrow::borrower() const {
    return borrower_;
}
Book Borrow::borrowedBook() const {
    return borrowedBook_;
}
Date Borrow::borrowDate() const {
    return borrowDate_;
}