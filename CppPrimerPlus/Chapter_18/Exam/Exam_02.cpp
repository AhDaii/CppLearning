#include <iostream>
#include <string>
using namespace std;

class Cpmv {
   public:
    struct Info {
        string qcode;
        string zcode;
    };

   private:
    Info* pi;

   public:
    Cpmv();
    Cpmv(string q, string z);
    Cpmv(const Cpmv& cp);
    Cpmv(Cpmv&& mv);
    ~Cpmv();
    Cpmv& operator=(const Cpmv& cp);
    Cpmv& operator=(Cpmv&& mv);
    Cpmv operator+(const Cpmv& obj) const;
    void display() const;
};

Cpmv::Cpmv() : pi(new Info) {
    cout << "Invoke Cpmv()\n";
}

Cpmv::Cpmv(string q, string z) : pi(new Info{q, z}) {
    cout << "Invoke Cpmv(string, string)\n";
}

Cpmv::Cpmv(const Cpmv& cp) : pi(new Info{cp.pi->qcode, cp.pi->zcode}) {
    cout << "Invoke Cpmv(const Cpmv&)\n";
}

Cpmv::Cpmv(Cpmv&& mv) : pi(mv.pi) {
    mv.pi = nullptr;
    cout << "Invoke Cpmv(Cpmv&&)\n";
}

Cpmv::~Cpmv() {
    cout << "Invoke ~Cpmv()\n";
    delete pi;
}

Cpmv& Cpmv::operator=(const Cpmv& cp) {
    cout << "Invoke operator=(const Cpmv&)\n";
    if (this == &cp)
        return *this;
    delete pi;
    pi = new Info{cp.pi->qcode, cp.pi->zcode};
    return *this;
}

Cpmv& Cpmv::operator=(Cpmv&& mv) {
    cout << "Invoke operator=(Cpmv&&)\n";
    delete pi;
    pi = mv.pi;
    mv.pi = nullptr;
    return *this;
}

Cpmv Cpmv::operator+(const Cpmv& obj) const {
    cout << "Invoke operator+(const Cpmv&)\n";
    pi->qcode += obj.pi->qcode;
    pi->zcode += obj.pi->zcode;
    return *this;
}

void Cpmv::display() const {
    cout << "qcode = " << pi->qcode << ", zcode = " << pi->zcode << '\n';
}

inline void show_line() {
    cout << "----------------\n";
}

int main() {
    Cpmv a;
    show_line();
    Cpmv b("Hello", "World");
    show_line();
    Cpmv c(b);
    show_line();
    Cpmv d(move(Cpmv()));
    show_line();
    Cpmv e;
    e = b;
    show_line();
    Cpmv f;
    f = move(Cpmv());
    show_line();
    (a + b).display();
    show_line();
    a.display();
    b.display();
    c.display();
    d.display();
    e.display();
    return 0;
}
