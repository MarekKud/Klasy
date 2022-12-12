#include<iostream>
#include <ostream>
#include "klasa_auto.hpp"

Klasa_auto::Klasa_auto()
{
    this->marka="Nie podano";
    this->typ="Nie podano";
    std::cout<<"Tworze obiekt "<<this<<std::endl;  
};

Klasa_auto::Klasa_auto(std::string _marka, std::string _typ):marka(_marka),typ(_typ){}

Klasa_auto::~Klasa_auto()
{
    std::cout<<"Niszcze obiekt"<<this<<std::endl;
}

void Klasa_auto::get_marka()const
{
    std::cout<<"Auto marki "<<this->marka<<std::endl;
}
void Klasa_auto::set_marka(std::string _marka)
{
    this->marka=_marka;
}
void Klasa_auto::set_typ(std::string _typ)
{
    this->typ=_typ;
}

void Klasa_auto::get_typ()
{   
    std::cout<<"Typ  Auta "<<this->typ<<std::endl;
}
