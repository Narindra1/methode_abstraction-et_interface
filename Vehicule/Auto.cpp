#include<iostream>
#include"Auto.hpp"
using namespace std;
Auto::Auto()
{
}
Auto::~Auto()
{
}
int Auto::getVitesse()
{
    return this->vitesse;
}
void Auto::setVitesse(int vitesse)
{
    this->vitesse=vitesse;
}
void Auto::conduire()
{
    cout << "vous devez avoir un permis A et B "<< endl;
}
