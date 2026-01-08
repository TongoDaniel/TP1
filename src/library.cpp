#include "../include/library.h"

std::vector<Book> Library::getBooks() const {
    return books_;
}
std::vector<Reader> Library::getReaders() const {
    return readers_;
}
std::vector<Author> Library::getAuthors() const {
    return authors_;
}
std::vector<Borrow> Library::getBorrows() const {
    return borrows_;
}
