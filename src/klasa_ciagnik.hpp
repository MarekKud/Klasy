#if !defined(KLASA_CIAGNIK_H)
#define KLASA_CIAGNIK_H
#include <iostream>
#include "klasa_auto.hpp"

//class Klasa_auto;

class Klasa_ciagnik
{
private:
    /* data */
    std::string marka;

public:
    Klasa_ciagnik(/* args */);
    ~Klasa_ciagnik();
    void get_marka_ciagnik()const;
    void set_marka_ciagnik(std::string);
    void show(Klasa_auto &); 
    
};


#endif // KLASA_CIAGNIK_H


