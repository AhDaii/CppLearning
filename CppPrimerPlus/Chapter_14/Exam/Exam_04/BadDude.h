#ifndef _BADDUDE_H_
#define _BADDUDE_H_
#include "Gunslinger.h"
#include "PokerPlayer.h"

class BadDude: public Gunslinger, public PokerPlayer {
public:
    double Gdraw() const { return Gunslinger::Draw(); }
    double Cdraw() const { return PokerPlayer::Draw(); }
    void Show() const;
    void Set();
};

#endif