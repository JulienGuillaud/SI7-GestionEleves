#ifndef SECTION
#define SECTION

#include "eleve.h"

class Section:
{
  private:
    eleve tabEleve[];
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
