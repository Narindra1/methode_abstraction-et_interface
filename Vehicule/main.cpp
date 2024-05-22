#include<iostream>
#include"Vehicule.hpp"
#include"Auto.hpp"
#include"Moto.hpp"

using namespace std;

int main()
{
    Moto scooteur;
    Auto camion;

    cout<<"Pour conduire un scooteur"<<endl;
    scooteur.conduire();
    scooteur.setRoue(2);
    cout<< "Avec roue = "<<scooteur.getRoue()<<endl;



    cout<<"\nPour conduire un Camion"<<endl;
    camion.conduire();
    camion.setVitesse(7);
    cout<<"Avec vitesse:" << camion.getVitesse()<< endl;

    return 0;
}