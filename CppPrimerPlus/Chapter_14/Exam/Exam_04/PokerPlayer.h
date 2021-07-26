#ifndef _POKERPLAYER_H_
#define _POKERPLAYER_H_

#include "Person.h"

class PokerPlayer: virtual public Person {
public:
    PokerPlayer(const char *fn = "none", const char *ln = "none"):
                Person(fn, ln) {}
    ~PokerPlayer() {}
    int Draw() const;
};



#endif