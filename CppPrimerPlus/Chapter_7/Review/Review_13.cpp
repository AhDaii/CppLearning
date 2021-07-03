#include <iostream>
using namespace std;

struct applicant{
    char name[30];
    int credit_ratings[3];
};

typedef void (*ptr_f1)(applicant*);
typedef const char* (*ptr_f2)(const applicant *, const applicant *);


void f1(applicant *);
const char *f2(const applicant *, const applicant *);

int main() {
    ptr_f1 p1 = f1;
    ptr_f2 p2 = f2;
    ptr_f1 ap[5];
    ptr_f2 (*pa)[10];
    return 0;
}


void f1(applicant *) {
    return ;
}

const char *f2(const applicant *, const applicant *) {
    return "OK";
}
