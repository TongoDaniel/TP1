#ifndef BOOK_H
#define BOOK_H

#include "author.h"
#include "date.h"
#include <vector>

class Book {
public:
    Book(const std::string& title,
         const Author& author,
         const std::string& language,
         const std::string& gender,
         const Date& publication_date,
         const std::string& ISBN);
    
    std::string title() const;
    Author author() const;
    std::string language() const;
    std::string gender() const;
    Date publicationDate() const;
    std::string ISBN() const;
    bool isAvailable() const;
    void setStatus(bool available);
//    std::vector<int> identifiers() const;


private:
    std::string title_;
    Author author_;
    std::string language_;
    std::string gender_;
    Date publication_date_;
    std::string ISBN_;
    bool available_ = true;
//    std::vector<int> identifiers_;
};

std::string to_string(const Book& book);

#endif // BOOK_H