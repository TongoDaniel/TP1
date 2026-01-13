#ifndef LIBRARY_H
#define LIBRARY_H

#include "borrow.h"
class Library {
public:
    const std::vector<Book> books() const;
    const std::vector<Reader> readers() const;
    const std::vector<Author> authors() const;
    const std::vector<Borrow> borrows() const;
    
    void addAuthor(const Author& a);
    void addBook(const Book& b);
    void addReader(const Reader& r);
    void addBorrow(const Borrow& br);

    const std::vector<Book> booksByAuthor(int authorId) const;
    bool AuthorExists(int authorId) const;
    bool BookExists(const std::string& ISBN) const;
    bool ReaderExists(const std::string& memberID) const;

    Reader getReaderByID(const std::string& memberID) const;
    Book getBookByISBN(const std::string& ISBN) const;


private:
    std::vector<Book> books_;
    std::vector<Reader> readers_;
    std::vector<Author> authors_;
    std::vector<Borrow> borrows_;

};



#endif // LIBRARY_H