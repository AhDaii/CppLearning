#ifndef _PLORG_H_
#define _PLORG_H_

class Plorg {
private:
    char name[20];
    int CI;

public:
    Plorg(const char *str = "Plorga");
    void show() const;
    void setCI(int val);
};


#endif