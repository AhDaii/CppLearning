#include "emp.h"
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::ostream;

abstr_emp::abstr_emp(): fname("none"), lname("none"), job("none") {}

abstr_emp::abstr_emp(const string & fn, const string & ln, const string & j): fname(fn), lname(ln), job(j) {}

void abstr_emp::ShowAll() const {
    cout << fname << ' ' << lname << ": " << job << '\n';
}

abstr_emp::~abstr_emp() {}

void abstr_emp::SetAll() {
    cout << "input first name: ";
    cin >> fname;
    cout << "input last name: ";
    cin >> lname;
    cout << "input job: ";
    cin >> job;
}

ostream& operator<<(ostream &os, const abstr_emp& e) {
    e.ShowAll();
    return os;
}

employee::employee(): abstr_emp() {}

employee::employee(const string& fn, const string& ln, const string& j): abstr_emp(fn, ln, j) {}

void employee::ShowAll() const {
    abstr_emp::ShowAll();
}

void employee::SetAll() {
    abstr_emp::SetAll();
}

manager::manager(): abstr_emp(), inchargeof(0) {}

manager::manager(const string& fn, const string& ln, const string& j, int ico): abstr_emp(fn, ln, j), inchargeof(ico) {}

manager::manager(const abstr_emp& e, int ico): abstr_emp(e), inchargeof(ico) {}

manager::manager(const manager& m) {
    inchargeof = m.inchargeof;
}

void manager::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "inchargeof: " << inchargeof << '\n';
}

void manager::SetAll() {
    abstr_emp::SetAll();
    cout << "input inchargeof: ";
    cin >> inchargeof;
}


fink::fink() {
    reportsto = "none";
}

fink::fink(const string& fn, const string ln,
           const string& j, const string rpo) : abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp& e, const string& rpo) : abstr_emp(e), reportsto(rpo) {}

fink::fink(const fink& f) :abstr_emp(f) {
    reportsto = f.reportsto;
}

void fink::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "Reportsto: " << reportsto << '\n';
}

void fink::SetAll() {
    abstr_emp::SetAll();
    cout << "input reportsto: ";
    cin >> reportsto;
}


highfink::highfink() {}

highfink::highfink(const string & fn, const string & ln,
                   const string & j, const string & rpo,
                   int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}

highfink::highfink(const abstr_emp & e, const std::string rpo, int ico)
    : abstr_emp(e), manager(e, ico), fink(e, rpo) {}

highfink::highfink(const fink & f, int ico)
    : abstr_emp(f), fink(f), manager((const abstr_emp &)f, ico) {}

highfink::highfink(const manager & m, const std::string rpo)
    : abstr_emp(m), manager(m), fink((const abstr_emp &)m, rpo) {}

highfink::highfink(const highfink & h) : abstr_emp(h), manager(h), fink(h) {}

void highfink::ShowAll() const {
    abstr_emp::ShowAll();
    cout << "inchargeof: " << manager::InChargeOf() << '\n';
    cout << "reportsto: " << fink::ReportsTo() << '\n';
}

void highfink::SetAll() {
    abstr_emp::SetAll();
    cout << "input reportsto: ";
    cin >> fink::ReportsTo();
    cout << "input Inchargeof: ";
    cin >> manager::InChargeOf();
}