using namespace std;
#include "application.h"


void Section::run()
{
  do
  {
    cout<<"+--------------------------+"<<endl;
    cout<<"|           MENU           |"<<endl;
    cout<<"+--------------------------+"<<endl;
    cout<<"| 1 - Afficher Sections    |"<<endl;
    cout<<"| 2 - Gérer Sections       |"<<endl;
    cout<<"| 3 - Quitter              |"<<endl;
    cout<<"+--------------------------+"<<endl;
    int choixMenu;
    cin>>choixMenu;

    Section maSection;
    switch (choixMenu)
    {
      case 1:maSection.affSection();
      case 2:maSection.gererSection();
    }

  }
  while(choixMenu!=3);
}
