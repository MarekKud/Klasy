#include <iostream>
#include <string>
class Klasa_auto
{
private:
    /* data */
    std::string marka;
    std::string typ;
public:
    Klasa_auto();
    Klasa_auto(std::string ,std::string);
    ~Klasa_auto();
    void get_marka()const;
    void get_typ()const;
    void set_marka(std::string);
    void set_typ(std::string);
   
};


