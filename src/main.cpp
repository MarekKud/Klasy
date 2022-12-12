#include <iostream>
#include "klasa_auto.hpp"

int main(int argc,char* argv[])
{
    std::cout<<"Success"<<std::endl;

    Klasa_auto golf;
    Klasa_auto mercedes;
    Klasa_auto sraka;
    golf.set_marka("VW");
    golf.set_typ("Benzyna");
    golf.get_marka();
    golf.get_typ();
    golf.set_marka("Mercedes");
    golf.set_typ("Diesel");
    golf.get_marka();
    golf.get_typ();
    sraka.get_marka();
    sraka.get_typ();
    return EXIT_SUCCESS;

}