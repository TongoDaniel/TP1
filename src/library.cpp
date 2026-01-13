#include "../include/library.h"


const std::vector<Book> Library::books() const {
    return books_;
}
const std::vector<Reader> Library::readers() const {
    return readers_;
}
const std::vector<Author> Library::authors() const {
    return authors_;
}
const std::vector<Borrow> Library::borrows() const {
    return borrows_;
}

void Library::addAuthor(const Author& a) {
    authors_.push_back(a);
}
void Library::addBook(const Book& b) {
    books_.push_back(b);
}
void Library::addReader(const Reader& r) {
    readers_.push_back(r);
}
void Library::addBorrow(const Borrow& br) {
    borrows_.push_back(br);
}


