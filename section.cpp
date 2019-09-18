#include "section.h"

void Section::gererSection()
{
  do
  {

    cout << "+====================+" << endl;
    cout << "| Gerer les sections |" << endl;
    cout << "+--------------------+" << endl;
    cout << "| 1 : Ajout          |" << endl;
    cout << "| 2 : Suppression    |" << endl;
    cout << "| 3 : Modification   |" << endl;
    cout << "| 4 : Afficher       |" << endl;
    cout << "|____________________|" << endl;
    cout << "| 9 : Retour         |" << endl;
    cout << "+====================+" << endl;

    string choixMenuSection;
    cout << "Choix : ";
    cin >> choixMenuSection;
    cin.ignore(1);

    switch (choixMenuSection)
    {
      case 1: ajoutSection();
        break;
      case 2: supprSection();
        break;
      case 3: modifSection();
        break;
      case 4: affSection();
        break;
      default: break;
    }
  }
  while(choixMenuSection!=9);
}

void Section::affSection()
{
  for (i = 0; i < nbSection; i++)
  {
    cout << "No de la section : " << nbSection << endl;
    cout << "Nom de la Section : " << nomSection << endl;
    cout << " ------ " << endl;
  }
}

void Section::ajoutSection()    // Pas sur dutout
{
  cout << "Entrez le nom de la nouvelle section :";
  getline(cin,nomSection);
  nbSection++;
}


void Section::supprSection()
{
  cout
}
