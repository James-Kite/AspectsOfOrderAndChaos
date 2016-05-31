#pragma once
class Player
{
public:
	Player();
	~Player();
	void shuffle_deck();
private:
    int food;
    int wood;
    int stone;
    int iron;
    int influence;
    Deck m_deck;
};

