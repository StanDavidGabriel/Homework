#ifndef REVIEW_H
#define REVIEW_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Reviewer {
private:
    string name;
public:
    Reviewer(string name = "Anonymous");
    string getName();
};

class Review {
private:
    string content;
    Reviewer reviewer;
public:
    Review(string content = "Empty review", Reviewer reviewer = Reviewer());
    string getContent();
    Reviewer getReviewer();
};

class Book {
private:
    string title;
    string author;
    vector<Review> reviews;
public:
    Book(string title = "Untitled", string author = "Unknown");
    void addReview(Review r);
    string getTitle();
    string getAuthor();
    vector<Review> getReviews();
    void showBook();
};

class Library {
private:
    string name;
    vector<Book> books;
public:
    Library(string name = "Library");
    void addBook(Book b);
    void addReviewToBook(string bookTitle, Review r);
    void showAllBooks();
    void searchByText(string text);
};

#endif
