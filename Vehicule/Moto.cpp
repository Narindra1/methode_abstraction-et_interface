#include<iostream>
#include"Moto.hpp"
using namespace std;

Moto::Moto()
{

}
Moto::~Moto()
{

}
int Moto::getRoue()
{
    return this->roue;
}
void Moto::setRoue(int roue)
{
    this->roue=roue;
}
void Moto::conduire()
{
    cout<< "vous devez avoir un permis A"<< endl;
}