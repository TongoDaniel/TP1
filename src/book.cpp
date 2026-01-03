#include "../include/book.h"

Book::Book(const std::string& title,
           const std::string& author,
           const std::string& language,
           const std::string& gender,
           const Date& publication_date,
           const std::string& ISBN): title_(title),
                        author_(author),
                        language_(language),
                        gender_(gender),
                        publication_date_(publication_date),
                        ISBN_(ISBN) {

}

std::string Book::title() const {
    return title_;
}
std::string Book::author() const {
    return author_;
}
std::string Book::language() const {
    return language_;
}
std::string Book::gender() const {
    return gender_;
}
Date Book::publicationDate() const {
    return publication_date_;
}
std::string Book::ISBN() const {
    return ISBN_;
}

std::string Book::toString() const {
    return "Title: " + title_ + ", Author: " + author_ + ", Language: " + language_ + ", Gender: " + gender_ +
           ", Publication Date: " + to_string(publication_date_) + ", ISBN: " + ISBN_;
}