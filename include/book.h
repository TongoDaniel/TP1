#ifndef BOOK_H
#define BOOK_H
#include <string>
#include "date.h"
#include <vector>

class Book {
public:
    Book(const std::string& title,
         const std::string& author,
         const std::string& language,
         const std::string& gender,
         const Date& publication_date,
         const std::string& ISBN);
    
    std::string title() const;
    std::string author() const;
    std::string language() const;
    std::string gender() const;
    Date publicationDate() const;
    std::string ISBN() const;
//    std::vector<int> identifiers() const;

    std::string toString() const;


private:
    std::string title_;
    std::string author_;
    std::string language_;
    std::string gender_;
    Date publication_date_;
    std::string ISBN_;
//    std::vector<int> identifiers_;
};

#endif // BOOK_H