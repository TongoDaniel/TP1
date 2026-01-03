#include "../include/reader.h"

Reader::Reader(const std::string& name,
               const std::string& surname)
    : name_(name), surname_(surname) {
    memberID_ = "R" + std::to_string(++idCounter);
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
std::vector<Book> Reader::borrowedBooks() const {
    return borrowedBooks_;
}

std::string to_string(const Reader& reader) {
    return "Reader Name: " + reader.name() + " " + reader.surname() +
           "\nMember ID: " + reader.memberID();
}
