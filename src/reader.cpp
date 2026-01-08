#include "../include/reader.h"

Reader::Reader(const std::string& name,
               const std::string& surname)
    : name_(name), surname_(surname) {
    memberID_ = "R" + std::to_string(++idCounter);
}
Reader::Reader(const Reader& other)
    : name_(other.name_),
      surname_(other.surname_),
      memberID_(other.memberID_) {
}

std::string Reader::name() const {
    return name_;
}
std::string Reader::surname() const {
    return surname_;
}
std::string Reader::memberID() const {
    return memberID_;
}

std::vector<std::string> Reader::borrowedBooks() const {
    return idBorrowedBooks_;
}
void Reader::addBorrowedBook(const std::string& idBorrowedBooks) {
    idBorrowedBooks_.push_back(idBorrowedBooks);
}

std::string to_string(const Reader& reader) {
    return "Reader Name: " + reader.name() + " " + reader.surname() +
           "\nMember ID: " + reader.memberID();
}
