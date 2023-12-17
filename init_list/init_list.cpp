
#include <iostream>
#include <initializer_list>
using namespace std;


class Polka {
    string* books;
    size_t capacity;
public:
    Polka(const initializer_list<string>& list) : capacity{ list.size() } {
        books = new string[list.size()];
        int i = 0;
        for (auto book : list)
        {
            books[i] = book;
            i++;
        }
    }
    void print() {
        for (size_t i = 0; i < capacity; i++)
        {
            cout << books[i]<<" ";

        }
    }
    string operator[](int i) { 
        return books[i];
    }

};


int main()
{
    Polka b{"Tolstoy","Pushkin","Lermontov"};
    cout << b[1]<<endl;
    b.print();
}

