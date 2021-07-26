#include "PokerPlayer.h"
#include <ctime>
#include <cstdlib>

int PokerPlayer::Draw() const{
    srand(time(0));
    return rand() % 52;
}