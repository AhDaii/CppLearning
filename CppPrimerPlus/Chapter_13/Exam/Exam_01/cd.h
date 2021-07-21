#ifndef _CD_H_
#define _CD_H_

class Cd {

private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;

public:
    Cd(char *s1, char *s2, int n, double x);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    virtual Cd& operator=(const Cd &d);

};

class Classic : public Cd {

private:
    char *main_work;
public:
    Classic(char *mw, char *s1, char *s2, int n, double x);
    Classic(const Classic& c);
    Classic();
    ~Classic();
    void Report() const;
    Classic& operator=(const Classic& c);
};

#endif