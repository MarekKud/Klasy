#include <iostream>
#include <ostream>
#include "klasa_ciagnik.hpp"



Klasa_ciagnik::Klasa_ciagnik(/* args */)
{
    this->marka="Nie podano";
}

Klasa_ciagnik::~Klasa_ciagnik()
{
}
void Klasa_ciagnik::get_marka_ciagnik()const
{
    std::cout<<"Traktor marki "<<this->marka<<std::endl;

}
void Klasa_ciagnik::set_marka_ciagnik(std::string _marka)
{
    this->marka=_marka;
}
void Klasa_ciagnik::show(Klasa_auto & obiekt)
{
    std::cout<<"Traktor marki "<<obiekt.marka<<std::endl;
}