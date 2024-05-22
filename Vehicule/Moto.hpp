#ifndef _MOTO_HPP_
#define _MOTO_HPP_
#include"Vehicule.hpp"
#include<string>
using namespace std;
class Moto : public Vehicule
{
    private:
        int roue;
    public:
        Moto();
        ~Moto();
        int getRoue();
        void setRoue(int roue);
        void conduire();       
};
#endif