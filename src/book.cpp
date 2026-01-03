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

std::string to_string(const Book& b) {
    return "Title: " + b.title() + "\nAuthor: " + b.author().nameSurname() + "\nLanguage: " + b.language() + "\nGender: " + b.gender() +
           "\nPublication Date: " + to_string(b.publicationDate()) + "\nISBN: " + b.ISBN();
}