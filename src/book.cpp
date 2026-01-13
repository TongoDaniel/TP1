#include "../include/book.h"

Book::Book(const std::string& title,
           const Author& author,
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
Book::Book(const Book& other)
    : title_(other.title_),
      author_(other.author_),
      language_(other.language_),
      gender_(other.gender_),
      publication_date_(other.publication_date_),
        ISBN_(other.ISBN_){
}

std::string Book::title() const {
    return title_;
}
Author Book::author() const {
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
bool Book::isAvailable() const {
    return available_;
}
void Book::setStatus(bool available) {
    available_ = available;
}

const std::vector<std::string>& Book::borrowers() const {
    return idBorrowers_;
}
void Book::addBorrower(const std::string& idBorrowers) {
    idBorrowers_.push_back(idBorrowers);
}

std::string to_string(const Book& b) {
    return "Title: " + b.title() + ", Author: " + b.author().nameSurname() + ", Language: " + b.language() + ", Gender: " + b.gender() +
           " Publication Date: " + to_string(b.publicationDate()) + ", ISBN: " + b.ISBN();
}