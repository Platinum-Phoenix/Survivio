#include <SFML/Graphics.hpp>
#include "Global.hpp"
#include "SuperPlayer.hpp"

SuperPlayer::SuperPlayer()
{
    defaultInit();
}

SuperPlayer::~SuperPlayer()
{
    Player::player_count--;
}

void SuperPlayer::move (Map &map)
{
    int mul = surviv::default_player_speed; //multiply by speed coefficients

    if (sf::Keyboard::isKeyPressed (sf::Keyboard::Right) || sf::Keyboard::isKeyPressed (sf::Keyboard::D))
    {
        sprite.move (1 * mul, 0 * mul);
        map.mainView.move (1 * mul, 0 * mul);
    }
    else if (sf::Keyboard::isKeyPressed (sf::Keyboard::Left) || sf::Keyboard::isKeyPressed (sf::Keyboard::A))
    {
        sprite.move (-1 * mul, 0 * mul);
        map.mainView.move (-1 * mul, 0 * mul);
    }
    else if (sf::Keyboard::isKeyPressed (sf::Keyboard::Up) || sf::Keyboard::isKeyPressed (sf::Keyboard::W))
    {
        sprite.move (0 * mul, -1 * mul);
        map.mainView.move (0 * mul, -1 * mul);
    }
    else if (sf::Keyboard::isKeyPressed (sf::Keyboard::Down) || sf::Keyboard::isKeyPressed (sf::Keyboard::S))
    {
        sprite.move (0 * mul, 1 * mul);
        map.mainView.move (0 * mul, 1 * mul);
    }
}
