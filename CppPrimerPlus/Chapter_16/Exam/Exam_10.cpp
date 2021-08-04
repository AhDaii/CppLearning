#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <algorithm>
using namespace std;

struct Review {
    string title;
    int rating;
    double price;
};

void ShowMenu();
bool operator<(shared_ptr<Review>& r1, shared_ptr<Review>& r2);
bool cmpRating(shared_ptr<Review>& r1, shared_ptr<Review>& r2);
bool cmpPrice(shared_ptr<Review>& r1, shared_ptr<Review>& r2);
bool FillReview(shared_ptr<Review>& rr);
void ShowReview(shared_ptr<Review>& rr);

int main() {
    vector<shared_ptr<Review>> books;
    shared_ptr<Review> temp;
    while(FillReview(temp))
        books.push_back(temp);
    if(books.size() > 0) {
        ShowMenu();
        char ch;
        while(cin >> ch && ch != '7') {
            switch (ch) {
                case '1':
                    cout << "Original order:" << endl;
                    cout << "Rating\tBook\tPrice\n";
                    for_each(books.begin(), books.end(), ShowReview);
                    break;
                case '2':
                    cout << "alphabet order:" << endl;
                    cout << "Rating\tBook\tPrice\n";
                    sort(books.begin(), books.end());
                    for_each(books.begin(), books.end(), ShowReview);
                    break;
                case '3':
                    cout << "rating ascending:" << endl;
                    cout << "Rating\tBook\tPrice\n";
                    sort(books.begin(), books.end(), cmpRating);
                    for_each(books.begin(), books.end(), ShowReview);
                    break;
                case '4':
                    cout << "rating descending:" << endl;
                    cout << "Rating\tBook\tPrice\n";
                    sort(books.rbegin(), books.rend(), cmpRating);
                    for_each(books.begin(), books.end(), ShowReview);
                    break;
                case '5':
                    cout << "price ascending:" << endl;
                    cout << "Rating\tBook\tPrice\n";
                    sort(books.begin(), books.end(), cmpPrice);
                    for_each(books.begin(), books.end(), ShowReview);
                    break;
                case '6':
                    cout << "price descending:" << endl;
                    cout << "Rating\tBook\tPrice\n";
                    sort(books.rbegin(), books.rend(), cmpPrice);
                    for_each(books.begin(), books.end(), ShowReview);
                    break;
            }
            ShowMenu();
        }
    }
    else 
        cout << "No entries. ";
    cout << "Bye.\n";
    return 0;
}


void ShowMenu()
{
    cout << "---------------------------------------------------------" << endl;
    cout << "1.original order       2.alphabet order        3.rating ascending" << endl;
    cout << "4.rating descending    5.price ascending       6. price descending" << endl;
    cout << "7.quit" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Your choice: ";
}

bool FillReview(shared_ptr<Review>& rr) {
    rr = shared_ptr<Review>(new Review);

    cout << "Enter book title (quit to quit): ";
    getline(cin, rr->title);
    if (rr->title == "quit")
        return false;

    cout << "Enter book rating: ";
    cin >> rr->rating;
    if (!cin)
        return false;

    cout << "Enter book price: ";
    cin >> rr->price;
    if (!cin)
        return false;

    // get rid of rest of input line
    while (cin.get() != '\n')
        continue;

    return true;
}

void ShowReview(shared_ptr<Review>& rr) {
    cout << rr->rating << '\t' << rr->title << '\t' << rr->price << '\n';
}

bool operator<(shared_ptr<Review>& r1, shared_ptr<Review>& r2) {
    return r1->title < r2->title;
}

bool cmpRating(shared_ptr<Review>& r1, shared_ptr<Review>& r2) {
    return r1->rating < r2->rating;
}

bool cmpPrice(shared_ptr<Review>& r1, shared_ptr<Review>& r2) {
    return r1->price < r2->price;
}