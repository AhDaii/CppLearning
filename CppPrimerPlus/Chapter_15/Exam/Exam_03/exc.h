#ifndef _EXC_H_
#define _EXC_H_
#include <stdexcept>


class bad_mean: public std::logic_error {
private:
    double x, y;
public: 
    bad_mean(double x = 0, double y = 0, const char* str = "none"): x(x), y(y), logic_error(str) {}
};

class bad_hmean : public bad_mean {
public:
    bad_hmean(double x = 0, double y = 0, const char *str = "none"): bad_mean(x, y, str) {}
};

class bad_gmean : public bad_mean {
public:
    bad_gmean(double x = 0, double y = 0, const char *str = "none"): bad_mean(x, y, str) {}
};

#endif