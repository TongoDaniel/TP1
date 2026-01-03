#include "../include/author.h"

Author::Author(const std::string& name,
               const std::string& surname,
               const Date& birth_date)
    : name_(name),
      surname_(surname),
      birth_date_(birth_date) {
    author_id_ = ++author_count_;
}
int Author::authorId() const {
    return author_id_;
}
std::string Author::name() const {
    return name_;
}
std::string Author::surname() const {
    return surname_;
}
std::string Author::nameSurname() const {
    return name_ + " " + surname_;
}
Date Author::birthDate() const {
    return birth_date_;
}

std::string to_string(const Author& author) {
    return "Author ID: " + std::to_string(author.authorId()) +
           "\nName: " + author.name() +
           "\nSurname: " + author.surname() +
           "\nBirth Date: " + to_string(author.birthDate());
}