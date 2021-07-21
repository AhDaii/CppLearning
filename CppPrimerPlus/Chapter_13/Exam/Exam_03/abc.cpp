#include "abc.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::strlen;
using std::strcpy;

ABC::ABC(const char *l, int r) {
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

ABC::ABC(const ABC &a) {
    label = new char[strlen(a.label) + 1];
    strcpy(label, a.label);
    rating = a.rating;
}

ABC::~ABC() {
    delete [] label;
}

void ABC::View() const{
    cout << "[SHOW ABC] label = " << label << ", rating = " << rating << '\n';
}

ABC& ABC::operator=(const ABC &rs) {
    if(this == &rs)
        return *this;
    delete [] label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

std::ostream& operator<<(std::ostream &os, const ABC &rs) {
    os << "[SHOW ABC] label = " << rs.label << ", rating = " << rs.rating << '\n';
    return os;
}

std::ostream& operator<<(std::ostream &os, const baseDMA &rs) {
    os << (const ABC &)rs;
    return os;
}

baseDMA::baseDMA(const char *l, int r) : ABC(l, r) {

}

lacksDMA::lacksDMA(const char *c, const char *l, int r) : ABC(l, r) {
    strcpy(color, c);
}

lacksDMA::lacksDMA(const char *c, const ABC &rs): ABC(rs) {
    strcpy(color, c);
}

void lacksDMA::View() const {
    ABC::View();
    cout << "[SHOW LACKSDMA] color = " << color << '\n';
}

std::ostream& operator<<(std::ostream &os, const lacksDMA &rs) {
    os << (const ABC&)rs;
    os << "[SHOW LACKSDMA] color = " << rs.color << '\n';
    return os;
}

hasDMA::hasDMA(const char *s, const char *l, int r) : ABC(l, r){
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const ABC &rs) : ABC(rs) {
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::~hasDMA() {
    delete [] style;
}

std::ostream& operator<<(std::ostream &os, const hasDMA &rs) {
    os << (const ABC&)rs;
    os << "[SHOW HASDMA] style = " << rs.style << '\n';
    return os;
}

void hasDMA::View() const{
    ABC::View();
    cout << "[SHOW HASDMA] style = " << style << '\n';
}

hasDMA& hasDMA::operator=(const hasDMA &rs) {
    if(this == &rs)
        return *this;
    ABC::operator=(rs);
    delete [] style;
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);
    return *this;
}
