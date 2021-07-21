#ifndef _ABC_H_
#define _ABC_H_

#include <iostream>

class ABC {
private:
    char *label;
    int rating;
public:
    ABC(const char *l = "null", int r = 0);
    ABC(const ABC &a);
    virtual ~ABC() = 0;
    virtual void View() const;
    ABC& operator=(const ABC &rs);
    friend std::ostream& operator<<(std::ostream &os, const ABC &rs);
};

class baseDMA : public ABC {
public:
    baseDMA(const char *l = "null", int r = 0);
    friend std::ostream& operator<<(std::ostream &os, const baseDMA &rs);
};

class lacksDMA : public ABC {
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA(const char *c = "blank", const char *l = "null", int r = 0);
    lacksDMA(const char *c, const ABC &rs);
    void View() const;
    friend std::ostream& operator<<(std::ostream &os, const lacksDMA &rs);
};

class hasDMA : public ABC {
private:
    char *style;
public:
    hasDMA(const char *s = "none", const char *l = "null", int r = 0);
    hasDMA(const char *s, const ABC &rs);
    ~hasDMA();
    friend std::ostream& operator<<(std::ostream &os, const hasDMA &rs);
    void View() const;
    hasDMA& operator=(const hasDMA &rs);
};

#endif