#include "../include/library.h"
#include <algorithm>


int main() {
    Library library;
    std::string name, surname;
    int year, month, day;
    
    int authorId;
    std::string memberID;
    std::string title, language, gender, ISBN;
    bool authorFound = false;

    Author author1("John", "Doe", Date(1980, 5, 15));
    library.addAuthor(author1);
    Author author2("Jane", "Smith", Date(1975, 8, 22));
    library.addAuthor(author2);
    Author author3("Emily", "Johnson", Date(1990, 12, 5));
    library.addAuthor(author3);
    Author author4("Michael", "Brown", Date(1965, 3, 30));
    library.addAuthor(author4);
    Author author5("Sarah", "Davis", Date(1985, 7, 18));
    library.addAuthor(author5);

    Reader reader1("Alice", "Williams");
    library.addReader(reader1);
    Reader reader2("Bob", "Miller");
    library.addReader(reader2);
    Reader reader3("Charlie", "Wilson");
    library.addReader(reader3);

    Book book1("C++ Programming", author1, "English", "Education", Date(2020, 6, 1), "ISBN001");
    library.addBook(book1);
    Book book2("Data Structures", author2, "English", "Education", Date(2019, 9, 15), "ISBN002");
    library.addBook(book2);
    Book book3("Algorithms", author3, "English", "Education", Date(2018, 11, 20), "ISBN003");
    library.addBook(book3);
    Book book4("Database Systems", author4, "English", "Education", Date(2021, 2, 10), "ISBN004");
    library.addBook(book4);
    Book book5("Operating Systems", author5, "English", "Education", Date(2017, 4, 5), "ISBN005");
    library.addBook(book5);
    Book book6("Computer Networks", author1, "English", "Education", Date(2016, 8, 25), "ISBN006");
    library.addBook(book6);
    Book book7("Software Engineering", author2, "English", "Education", Date(2022, 1, 30), "ISBN007");
    library.addBook(book7);
    Book book8("Artificial Intelligence", author3, "English", "Education", Date(2023, 3, 12), "ISBN008");
    library.addBook(book8);
    Book book9("Machine Learning", author4, "English", "Education", Date(2015, 5, 18), "ISBN009");
    library.addBook(book9);
    Book book10("Computer Graphics", author5, "English", "Education", Date(2014, 7, 22), "ISBN010");
    library.addBook(book10);

    int input = -1;
    while(input != 0) {
        
        std::cout << "***************************************" << std::endl;
        std::cout << "*\tMenu:                         *" << std::endl;
        std::cout << "***************************************" << std::endl;
        std::cout << "->Auteur" << std::endl;
        std::cout << "\t11. Liste d'auteurs" << std::endl;
        std::cout << "\t12. Ajout d'un auteur" << std::endl;
        std::cout << "\t13. Afficher les livres de l'auteur" << std::endl;

        std::cout << "->Livre" << std::endl;
        std::cout << "\t21. Liste de livres" << std::endl;
        std::cout << "\t22. Ajout d'un livre" << std::endl;
        std::cout << "\t23. Afficher les lecteurs d'un livre" << std::endl;
        std::cout << "\t24. Emprunter un livre" << std::endl;
        std::cout << "\t25. Afficher le pourcentage de livres empruntés" << std::endl;

        std::cout << "->Lecteur" << std::endl;
        std::cout << "\t31. Liste des lecteurs" << std::endl;
        std::cout << "\t32. Ajout d'un lecteur" << std::endl;
        std::cout << "\t33. Afficher les livres empruntés par un lecteur" << std::endl;
        std::cout << "\t34. Classement des lecteurs en fonction du nombre de livres empruntés" << std::endl;

        std::cout << "0. Exit" << std::endl;
        std::cout << "Choisissez une option: ";
        std::cin >> input;
        std::cout << std::endl;

        switch(input)
        {
            case 11:
                {
                    std::cout << "Liste des auteurs:\n";
                    for (const auto& author : library.authors()) {
                        std::cout << "\t-> " << author.nameSurname() << " (ID: " << author.authorId() << ")\n";
                    }
                }
                break;
            case 12:
                {
                    std::cout << "Veuillez saisir le nom de l'auteur: ";
                    std::cin >> name;
                    std::cout << "Veuillez saisir le prénom de l'auteur: ";
                    std::cin >> surname;
                    std::cout << "Veuillez saisir la date de naissance de l'auteur (YYYY MM DD): ";
                    std::cin >> year >> month >> day;

                    library.addAuthor(Author(name, surname, Date(year, month, day)));
                    std::cout << "Auteur ajouté avec succès!\n";
                }
                break;
            case 13:
                {
                    int authorId;
                    std::cout << "Veuillez saisir l'ID de l'auteur: ";
                    std::cin >> authorId;

                    if (library.AuthorExists(authorId)) {
                        std::cout << "Livres de l'auteur (ID: " << authorId << "):\n";
                        for (const auto& book : library.booksByAuthor(authorId)) {
                            std::cout << "\t-> " << book.title() << " (ISBN: " << book.ISBN() << ")\n";
                        }
                    } else {
                        std::cout << "Auteur avec l'ID " << authorId << " n'existe pas.\n";
                    }
                }
                break;

            case 21:
                {
                    std::cout << "Liste des livres:\n";
                    for (const auto& book : library.books()) {
                        std::cout << "\t-> " << book.title() << " par " << book.author().nameSurname() << " (ISBN: " << book.ISBN() << ")\n";
                    }
                }
                break;
            case 22:
                {
                    std::cout << "Veuillez saisir le titre du livre: ";
                    std::cin >> title;
                    std::cout << "Veuillez saisir l'ID de l'auteur: ";
                    std::cin >> authorId;
                    std::cout << "Veuillez saisir la langue du livre: ";
                    std::cin >> language;
                    std::cout << "Veuillez saisir le genre du livre: ";
                    std::cin >> gender;
                    std::cout << "Veuillez saisir la date de publication du livre (YYYY MM DD): ";
                    std::cin >> year >> month >> day;
                    std::cout << "Veuillez saisir l'ISBN du livre: ";
                    std::cin >> ISBN;
                    Author bookAuthor("", "", Date());
                    for (const auto& author : library.authors()) {
                        if (author.authorId() == authorId) {
                            bookAuthor = author;
                            authorFound = true;
                            break;
                        }
                    }
                    if (authorFound) {
                        library.addBook(Book(title, bookAuthor, language, gender, Date(year, month, day), ISBN));
                        std::cout << "Livre ajouté avec succès!\n";
                    } else {
                        std::cout << "Auteur avec l'ID " << authorId << " n'existe pas. Livre non ajouté.\n";
                    }
                }
                break;
            case 23:
                {
                    std::cout << "Veuillez saisir l'ISBN du livre: ";
                    std::cin >> ISBN;
                    if (library.BookExists(ISBN)) {
                        Book book = library.getBookByISBN(ISBN);
                        std::cout << "Lecteurs ayant emprunté le livre \"" << book.title() << "\":\n";
                        for (const auto& borrowerID : book.borrowers()) {
                            std::cout << "\t-> " << to_string(library.getReaderByID(borrowerID)) << "\n";
                        }
                    } else {
                        std::cout << "Livre avec l'ISBN " << ISBN << " n'existe pas.\n";
                    }
                }
                break;
            case 24:
                {
                    std::cout << "Veuillez saisir l'ID du membre: ";
                    std::cin >> memberID;
                    std::cout << "Veuillez saisir l'ISBN du livre à emprunter: ";
                    std::cin >> ISBN;
                    std::cout << "Veuillez saisir la date d'emprunt (YYYY MM DD): ";
                    std::cin >> year >> month >> day;
                    if (library.BookExists(ISBN) && library.ReaderExists(memberID)) {
                        Book bookToBorrow = library.getBookByISBN(ISBN);
                        Reader borrower = library.getReaderByID(memberID);
                        bookToBorrow.setStatus(false);
                        bookToBorrow.addBorrower(borrower.memberID());
                        borrower.addBorrowedBook(bookToBorrow.ISBN());
                        library.addBorrow(Borrow(borrower, bookToBorrow, Date(year, month, day)));
                        std::cout << "Livre emprunté avec succès!\n";
                    } else {
                        std::cout << "Livre ou lecteur non trouvé. Emprunt impossible.\n";
                    }
                }
                break;
            case 25:
                {
                    int totalBooks = library.books().size();
                    int borrowedBooks = 0;
                    for (const auto& book : library.books()) {
                        if (!book.isAvailable()) {
                            borrowedBooks++;
                        }
                    }
                    double percentage = (borrowedBooks / totalBooks);
                    std::cout << "Pourcentage de livres empruntes: " << percentage << "%" << std::endl;
                }
                break;

            case 31:
                {
                    std::cout << "Liste des lecteurs:\n";
                    for (const auto& reader : library.readers()) {
                        std::cout << "\t-> " << to_string(reader) << "\n";
                    }
                }
                break;
            case 32:
                {
                    std::cout << "Veuillez saisir le nom du lecteur: ";
                    std::cin >> name;
                    std::cout << "Veuillez saisir le prénom du lecteur: ";
                    std::cin >> surname;

                    library.addReader(Reader(name, surname));
                    std::cout << "Lecteur ajouté avec succès!\n";
                }
                break;
            case 33:
                {
                    std::cout << "Veuillez saisir l'ID du membre: ";
                    std::cin >> memberID;
                    if (library.ReaderExists(memberID)) {
                        Reader reader = library.getReaderByID(memberID);
                        std::cout << "Livres empruntés par " << to_string(reader) << ":\n";
                        for (const auto& borrowedISBN : reader.borrowedBooks()) {
                            std::cout << "\t-> " << to_string(library.getBookByISBN(borrowedISBN)) << "\n";
                        }
                    } else {
                        std::cout << "Lecteur avec l'ID " << memberID << " n'existe pas.\n";
                    }
                }
                break;
            case 34:
                {
                    std::vector<Reader> sortedReaders = library.readers();
                    std::sort(sortedReaders.begin(), sortedReaders.end(),
                            [](const Reader& a, const Reader& b) {
                                return a.borrowedBooks().size() > b.borrowedBooks().size();
                            });
                    std::cout << "Classement des lecteurs par nombre de livres empruntés:\n";
                    for (const auto& reader : sortedReaders) {
                        std::cout << "\t-> " << to_string(reader) << ": " << reader.borrowedBooks().size() << " livres empruntés\n";
                    }
                }
                break;
            
            default:
                std::cout << "Option invalide. Veuillez réessayer." << std::endl;
                break;
        }
    }
    

    return 0;
}