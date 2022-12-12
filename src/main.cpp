#include <iostream>
#include "klasa_ciagnik.hpp"
#include "klasa_auto.hpp"



int main(int argc,char* argv[])
{
    std::cout<<"Success"<<std::endl;

    Klasa_auto golf;
    Klasa_ciagnik zetor;
   
   
    golf.set_marka("VW");
    golf.set_typ("Benzyna");
    golf.get_marka();

    zetor.show(golf);
   
    return EXIT_SUCCESS;

}