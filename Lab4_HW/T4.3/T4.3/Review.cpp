#include "Review.h"

Reviewer::Reviewer(string name) 
{ 
	this->name = name; 
}

string Reviewer::getName() 
{ 
	return name; 
}



Review::Review(string content, Reviewer reviewer) 
{
    this->content = content;
    this->reviewer = reviewer;
}

string Review::getContent() 
{ 
    return content; 
}

Reviewer Review::getReviewer() 
{ 
    return reviewer; 
}



Book::Book(string title, string author) 
{
    this->title = title;
    this->author = author;
}

void Book::addReview(Review r) 
{
    reviews.push_back(r);
}

string Book::getTitle() 
{ 
    return title; 
}

string Book::getAuthor() 
{ 
    return author; 
}



vector<Review> Book::getReviews() 
{ 
    return reviews; 
}



void Book::showBook() 
{
    cout << "Book: " << title << " | Author: " << author << endl;
    if (reviews.size() == 0) 
    {
        cout << "  No reviews yet.\n";
    }
    else {

        for (int i = 0; i < reviews.size(); i++) 
        {
            cout << "  Review by " << reviews[i].getReviewer().getName() << ": " << reviews[i].getContent() << endl;
        }
    }
}



Library::Library(string name) 
{ 
    this->name = name; 
}

void Library::addBook(Book b) 
{
    books.push_back(b);
}

void Library::addReviewToBook(string bookTitle, Review r) 
{
    for (int i = 0; i < books.size(); i++) 
    {
        if (books[i].getTitle() == bookTitle) 
        {
            books[i].addReview(r);
            return;
        }
    }
    cout << "Book '" << bookTitle << "' not found!" << endl;
}

void Library::showAllBooks() 
{
    cout << "Library: " << name << endl;
    for (int i = 0; i < books.size(); i++)
    {
        books[i].showBook();
        cout << endl;
    }
}

void Library::searchByText(string text) 
{
    cout << "Search results for text: " << text << endl;
    bool found = false;

    for (int i = 0; i < books.size(); i++) 
    {
        vector<Review> revs = books[i].getReviews();
        for (int j = 0; j < revs.size(); j++) 
        {
            string content = revs[j].getContent();
            string reviewerName = revs[j].getReviewer().getName();

            if (content.find(text) != string::npos || reviewerName.find(text) != string::npos)
            {
                cout << "Book: " << books[i].getTitle() << " | Reviewer: " << reviewerName << " | Review: " << content << endl;
                found = true;
            }
        }
    }

    if (!found) cout << "No matches found." << endl;
}