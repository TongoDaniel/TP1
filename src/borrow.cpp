#include "../include/borrow.h"

Borrow::Borrow(const Reader& borrower,
               const Book& borrowedBook,
               const Date& borrowDate,
               const Date& returnDate,
               bool isReturned)
    : borrower_(borrower),
      borrowedBook_(borrowedBook),
      borrowDate_(borrowDate),
      returnDate_(returnDate),
      isReturned_(isReturned) {}
Borrow::Borrow(const Borrow& other)
    : borrower_(other.borrower_),
      borrowedBook_(other.borrowedBook_),
      borrowDate_(other.borrowDate_),
      returnDate_(other.returnDate_),
      isReturned_(other.isReturned_) {}

Reader Borrow::borrower() const {
    return borrower_;
}
Book Borrow::borrowedBook() const {
    return borrowedBook_;
}
Date Borrow::borrowDate() const {
    return borrowDate_;
}
Date Borrow::returnDate() const {
    return returnDate_;
}
bool Borrow::returnStatus() const {
    return isReturned_;
} 

void loanBook(Reader& loaner, Book& borrowRecord) {
    
    if (borrowRecord.isAvailable()) {
        borrowRecord.setStatus(false); 
        borrowRecord.addBorrower(loaner.memberID()); 

        loaner.addBorrowedBook(borrowRecord.ISBN()); 
        
        Borrow borrow1(loaner, borrowRecord, Date(2024, 1, 10), Date(2024, 1, 24), false); 
        std::cout << "The book \"" << borrowRecord.title() << "\" has been borrowed by " << loaner.name() << " " << loaner.surname() << "." << std::endl;
    } else {
        std::cout << "The book \"" << borrowRecord.title() << "\" is currently not available." << std::endl;
    }
}
