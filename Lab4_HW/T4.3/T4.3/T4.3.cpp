#include "Review.h"

int main() {
    Library lib("City Library");

    Book b1("Don Quixote", "Miguel de Cervantes");
    Book b2("Normal People", "Sally Rooney");

    lib.addBook(b1);
    lib.addBook(b2);

    Reviewer r1("Ana");
    Reviewer r2("David");
    Reviewer r3("Cristina");

    Review rev1("A witty and poignant journey of a man chasing chivalric dreams in a world that has left them behind.", r1);
    Review rev2("A tender, incisive story about love, class, and the quiet complexities of human connection.", r2);
    Review rev3("A timeless tale of dreams, delusion, and the pursuit of impossible ideals.", r3);
    Review rev4("A raw and intimate portrait of two people bound by love, miscommunication, and time.", r1);

    lib.addReviewToBook("Don Quixote", rev1);
    lib.addReviewToBook("Don Quixote", rev3);
    lib.addReviewToBook("Normal People", rev2);
    lib.addReviewToBook("Normal People", rev4);

    lib.showAllBooks();

    cout << endl;
    lib.searchByText("Ana");

    cout << endl;
    lib.searchByText("love");

    cout << endl;
    lib.searchByText("drama");

    return 0;
}