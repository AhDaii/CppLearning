#include "port.h"
#include <iostream>
#include <cstring>

using std::strlen;
using std::strcpy;
using std::cout;

Port::Port(const char *br, const char *st, int b) {
    brand = new char[strlen(br)];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port &p) {
    brand = new char[strlen(p.brand)];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port& Port::operator=(const Port &p) {
    if(this == &p)
        return *this;
    delete [] brand;
    brand = new char[strlen(p.brand)];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port& Port::operator+=(int b) {
    bottles += b;
    return *this;
}

Port& Port::operator-=(int b) {
    bottles -= b;
    return *this;
}

void Port::Show() const{
    cout << "[SHOW PORT] brand = " << brand << ", style = " << style << ", bottles = " << bottles << '\n';
}

std::ostream & operator<<(std::ostream & os, const Port & p) {
    os << "[SHOW PORT] brand = " << p.brand << ", style = " << p.style << ", bottles = " << p.bottles << '\n';
    return os;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, int y): Port(br, "vintage", b) {
    nickname = new char[strlen(nn) + 1];
    strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort &vp): Port(vp) {
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort &vp) {
    if(this == &vp)
        return *this;
    Port::operator=(vp);
    delete [] nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::Show() const{
    Port::Show();
    cout << "[SHOW VINTAGEPORT] nickname = " << nickname << ", year = " << year << '\n';
}

std::ostream & operator<<(std::ostream & os, const VintagePort & vp) {
    os << (const Port &)vp;
    os << "[SHOW VINTAGEPORT] nickname = " << vp.nickname << ", year = " << vp.year << '\n';
    return os;
}