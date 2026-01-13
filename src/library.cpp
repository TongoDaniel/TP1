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

const std::vector<Book> Library::booksByAuthor(int authorId) const {
    std::vector<Book> booksByAuth;
    for (const auto& book : books_) {
        if (book.author().authorId() == authorId) {
            booksByAuth.push_back(book);
        }
    }
    return booksByAuth;
}
bool Library::AuthorExists(int authorId) const {
    for (const auto& author : authors_) {
        if (author.authorId() == authorId) {
            return true;
        }
    }
    return false;
}
bool Library::BookExists(const std::string& ISBN) const {
    for (const auto& book : books_) {
        if (book.ISBN() == ISBN) {
            return true;
        }
    }
    return false;
}
bool Library::ReaderExists(const std::string& memberID) const {
    for (const auto& reader : readers_) {
        if (reader.memberID() == memberID) {
            return true;
        }
    }
    return false;
}

Reader Library::getReaderByID(const std::string& memberID) const {
    for (const auto& reader : readers_) {
        if (reader.memberID() == memberID) {
            return reader;
        }
    }
}
Book Library::getBookByISBN(const std::string& ISBN) const {
    for (const auto& book : books_) {
        if (book.ISBN() == ISBN) {
            return book;
        }
    }
}
