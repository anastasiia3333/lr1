#include <iostream>
using namespace std;

class card {
private:
    string nameOfBook;
    string authorOfBook;
    int copiesOnLoan;

public: //оголошуємо констуктор
    card(const string name, const string author, int copies)
            : nameOfBook(name), authorOfBook(author), copiesOnLoan(copies) {}


     void store() { //метод запитує дані в користувача
        cout << "\nEnter the title of the book: ";
        getline(cin, nameOfBook); //зчитування цілої строки
        cout << "Enter the author of the book: ";
        getline(cin, authorOfBook);  
        cout << "Enter the number of copies of the book issued: ";
        cin >> copiesOnLoan;
    }


    void show() { //вивід на екран інформації 
        cout << "Title of the book: " << nameOfBook << endl;
        cout << "Author of the book : " << authorOfBook << endl;
        cout << "Number of copies of the book issued: " << copiesOnLoan << endl;
    }
};

int main() {
    card Card("To kill a Mockingbird", "Harper Lee", 25); //створюємо об'єкт з початковими значеннями
    Card.show(); 
    Card.store(); 
    Card.show();
    return 0;
}
