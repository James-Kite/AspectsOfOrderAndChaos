#ifndef GAME_H
#define GAME_H


class Game
{
    public:
        Game();
        ~Game();
    protected:
    private:
        Player m_p1;
        Player m_p2;
        Board m_game_board;
};

#endif // GAME_H
