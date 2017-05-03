#ifndef MINUTERIE_H
#define MINUTERIE_H
#include "Animation.h"

class Minuterie: public Animation
{

private:
    int m_top;
    int m_delay;
    sf::RectangleShape m_rectmins;
    enum class Status {ON,OFF} m_etat;
    sf::Color _col = sf::Color::Red;
public:
    Minuterie(const sf::FloatRect &rectangle, int delay);
    void getTimeSpent(sf::RectangleShape rectmins);
    void dessiner(sf::RenderWindow & window) override;

    void clic() override;
    void top() override;

    std::vector<Animation *> insererAnim(Minuterie *m);
};

#endif // MINUTERIE_H
