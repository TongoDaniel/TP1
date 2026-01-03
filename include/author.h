#ifndef AUTHOR_H
#define AUTHOR_H

#include "date.h"

class Author {
public:
    Author(const std::string& name,
           const std::string& surname,
           const Date& birth_date);

    int authorId() const;
    std::string name() const;
    std::string surname() const;
    std::string nameSurname() const;
    Date birthDate() const;

private:
    inline static int author_count_ = 0;
    int author_id_;
    std::string name_;
    std::string surname_;
    Date birth_date_;

};

std::string to_string(const Author& author);

#endif // AUTHOR_H