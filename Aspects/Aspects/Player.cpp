#include "Player.h"


Player::Player()
: food(0), wood(0), stone(0), iron(0), influence(1)
{
    this.shuffle_deck();
}


Player::~Player()
{
}

Player::shuffle_deck()
{
    // do some shit to shuffle the deck
}
