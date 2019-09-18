#ifndef SECTION
#define SECTION

#include "eleve.h"
#include <vector>

class Section:
{
  private:
    vector<eleve> eleve;
    int nbSection;
    string nomSection;




  public:
    void gererSection();
    void ajoutSection();
    void supprSection();
    void modifSection();
    void affSection();

};


#endif
