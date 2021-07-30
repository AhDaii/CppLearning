#ifndef _EXC_H_
#define _EXC_H_
#include <stdexcept>


class bad_hmean : public std::logic_error {
public:
    bad_hmean(): logic_error("hmean: invalid arguments: a = -b\n") {}
};

class bad_gmean : public std::logic_error {
public:
    bad_gmean(): logic_error("gmean: arguments should be >= 0\n") {}
};

#endif