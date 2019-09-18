using namespace std;
#include "application.h"


void Application::run()
{
      int choixMenu;
  do
  {
    cout<<"+--------------------------+"<<endl;
    cout<<"|           MENU           |"<<endl;
    cout<<"+--------------------------+"<<endl;
    cout<<"| 1 - Afficher Sections    |"<<endl;
    cout<<"| 2 - Gérer Sections       |"<<endl;
    cout<<"| 3 - Quitter              |"<<endl;
    cout<<"+--------------------------+"<<endl;

    cin>>choixMenu;
    cin.ignore(1);
    switch (choixMenu)
    {
      case 1:afficherToutesSections();break;
      case 2:gererSection();break;
    }

  }
  while(choixMenu!=3);
}


void Application::afficherToutesSections()
{
  for (int i = 0; i < vectSection.size(); i++)
  {

    vectSection[i].affSection();
  }
}

void Application::gererSection()
{
      int choixMenuEleve;

  do
  {
    cout<<"+--------------------------+"<<endl;
    cout<<"|           MENU           |"<<endl;
    cout<<"+--------------------------+"<<endl;
    cout<<"| 1 - Ajouter Section      |"<<endl;
    cout<<"| 2 - Supprimer Section    |"<<endl;
    cout<<"| 3 - Modifier Section     |"<<endl;
    cout<<"| 4 - Quitter              |"<<endl;
    cout<<"+--------------------------+"<<endl;

    cin>>choixMenuEleve;
    cin.ignore(1);



    switch (choixMenuEleve)
    {
      case 1:
      {
        cout<<"Entrez le nom de la nouvelle Section"<<endl<<"- "<<endl;
        string nomNvlleSection;
        getline(cin,nomNvlleSection);
        vectSection.push_back(Section(nomNvlleSection));
        break;
      }
      case 2:
      {
        cout<<"Quelle Section voulez-vous supprimer ?"<<endl;
        for (int i = 0; i < vectSection.size(); i++)
        {
          cout<<i<<" - "<<vectSection[i].returnNom()<<endl;
        }
        cout<<"Entrez son ID"<<endl<<"- ";
        int idASuppr;
        cin>>idASuppr;
        cin.ignore(1);
        //Suppression
        for(int index=idASuppr ; index<vectSection.size() ; index++)
        {
          vectSection[idASuppr]=vectSection[idASuppr+1];
        }
        break;
      }
      case 3:
      {
        cout<<"Quelle section voulez-vous modifier ?"<<endl<<"- "<<endl;
        for (int i = 0; i < vectSection.size(); i++)
        {
          cout<<i<<" - "<<vectSection[i].returnNom()<<endl;
        }
        cout<<"Entrez son ID"<<endl<<"- ";
        int idAModif;
        cin>>idAModif;
        cin.ignore(1);
        vectSection[idAModif].modifSection();
        break;
      }
    }

  }
  while(choixMenuEleve!=4);

}
