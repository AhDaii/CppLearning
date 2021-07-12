#include <iostream>
using namespace std;

struct applicant{
    char name[30];
    int credit_ratings[3];
};

void show_applicant(struct applicant);
void show_ptr_applicant(struct applicant *);

int main() {
    struct applicant a{"david", {1, 2, 3}};

    show_applicant(a);
    show_ptr_applicant(&a);
    return 0;
}

void show_applicant(struct applicant a) {
    cout << a.name << ' ' << a.credit_ratings[0] << ' ' << a.credit_ratings[1] << ' ' << a.credit_ratings[2] << endl;
}

void show_ptr_applicant(struct applicant *a) {
    cout << a->name << ' ' << a->credit_ratings[0] << ' ' << a->credit_ratings[1] << ' ' << a->credit_ratings[2] << endl;
}