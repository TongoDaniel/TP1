#include "../include/library.h"


int main() {
    Library library;
    std::string name, surname;
    int year, month, day;

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
        std::cout << "\n\t\tMenu:" << std::endl;
        std::cout << "->Auteur" << std::endl;
        std::cout << "\t11. Liste d'auteurs" << std::endl;
        std::cout << "\t12. Ajout d'un auteur" << std::endl;
        std::cout << "\t13. Afficher les livres de l'auteur" << std::endl;

        std::cout << "->Livre" << std::endl;
        std::cout << "\t21. Liste de livres" << std::endl;
        std::cout << "\t22. Ajout d'un livre" << std::endl;
        std::cout << "\t23. Afficher les lecteurs d'un livre" << std::endl;
        std::cout << "\t24. Emprunter un livre" << std::endl;

        std::cout << "->Lecteur" << std::endl;
        std::cout << "\t31. Liste des lecteurs" << std::endl;
        std::cout << "\t32. Ajout d'un lecteur" << std::endl;
        std::cout << "\t33. Afficher les livres empruntés par un lecteur" << std::endl;
        std::cout << "\t34. Classement des lecteurs en fonction du nombre de livres empruntés" << std::endl;

        std::cout << "0. Exit" << std::endl;
        std::cout << "Choisissez une option: ";
        std::cin >> input;
        std::cout << std::endl;

    

    return 0;
}