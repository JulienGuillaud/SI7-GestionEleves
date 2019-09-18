#ifndef APPLICATION
#define  APPLICATION

#include <iostream>
#include "section.h"

using namespace std;

class Application
{
  private:
    vector<Section> vectSection;

  public:
    void run();
    void afficherToutesSections();
    void gererSection();


};
#endif
