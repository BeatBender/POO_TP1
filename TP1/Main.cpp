#include <iostream>
#include <vector>
#include "Club.h"
#include "Entraineur.h"

using namespace std;

void main()
{
	vector<Club*> vector_clubs;
	int choix;
	cout << "Bonjour et bienvenue dans le gestionnaire de clubs de hockey." << endl; 
	

	while (true)
	{
		cout << " Selectionnez un choix: " << endl << "1. Ajouter un club de Hockey a la liste." << endl << "2. Supprimer un club de la liste." << endl << "3. Afficher les joueurs d'un club." << endl << "4. Trouver l'entraineur avec le plus de titres gagnes." << endl << "5. Trouver le club avec le plus de titres gagnes." << endl << "Ctrl+Z. Quitter l'application." << endl;
		cin >> choix;
		if (choix == 1)
		{
			Club* unClub;
			Club* nouvClub;
			unClub->SetClub(nouvClub);
			vector_clubs.push_back(nouvClub);
		}

		if (choix == 2)
		{
			bool choix2;
			Club* unClub;
			for (int i = 0; i < vector_clubs.size(); i++)
			{
				cout << "Voulez-vous supprimer ce club? (1.Oui, 0.Non): " << endl;
				unClub->AfficherClub(vector_clubs.at(i));
				cin >> choix2;
				if (choix2 == 1)
				{
					unClub->DeleteClub(vector_clubs.at(i));
					cout << "Club supprimé." << endl;
				}
			}
		}

		if (choix == 3)
		{
			Club* unClub;
			bool choix3;
			for (int i = 0; i < vector_clubs.size(); i++)
			{
				cout << "Voulez-vous afficher les membres de ce club? (1.Oui, 0.Non): " << endl;
				unClub->AfficherClub(vector_clubs.at(i));
				cin >> choix3;

				if (choix3 == 1)
				{
					unClub->AfficherJoueurs(vector_clubs.at(i));
				}
				
			}
		}

		if (choix == 4)
		{
			int nbTitres = 0;
			Entraineur plusDeTitres;
			vector<Entraineur> vecteur_entraineur2;
			Club* unClub;
			unClub->CopyVector();
			for (int i = 0; i < vecteur_entraineur2.size(); i++)
			{
				if (vecteur_entraineur2.at(i).ReturnListe_Titre()> nbTitres)
				{
					nbTitres = vecteur_entraineur2.at(i).ReturnListe_Titre();
					plusDeTitres = vecteur_entraineur2.at(i);
				}
			}
			cout << "L'entraineur ayant le plus de titres est :" << plusDeTitres.ReturnTrainerName(plusDeTitres) << " avec " << nbTitres << " titres." << endl;
		}

		if (choix == 5)
		{

		}
	}
	cout << "Merci de m'avoir utilisé. Bebye";
	return;
}