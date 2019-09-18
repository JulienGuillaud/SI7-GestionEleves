#ifndef SECTION
#define SECTION

#include "eleve.h"
#include <vector>

class Section:
{
  private:
    string nomSection;
    vector<eleve> eleve;





  public:
    Section(string sectNom);

    void modifSection();
    void affSection();

};


#endif
