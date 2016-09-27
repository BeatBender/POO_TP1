/*
	Patrick Levesque - LEVP19099302
	27 septembre 2016
	Travail Pratique 1

	Le programme est incomplet et ne compile pas. J'ai fait du mieux que j'ai pu compte tenu du fait que j'ai perdu mon travail jeudi le 22 septembre
	et que j'ai d� tout recommenc� du d�but. J'ai cependant appris � me servir correctement des vecteurs et comment faire des classes structur�es et
	coh�rente.

	Le programme ne cesse de me dire que je red�fini mes classes plusieurs fois m�me si cela ne fait aucun sens pour moi. Il y a aussi quelques erreurs
	que je n'ai tout simplement eu le temps de regl�es vu la perte de mon travail. Le code me semble correct pour les ajouts/suppressions de clubs m�me
	s'il y a encore beaucoup d'erreurs. Pour ce qui est des titres, j'ai li�s les entraineurs aux clubs puisque je croyais qu'un club avait un entraineur
	assur�ment. Donc, techniquement, le nombres de titres d'un entraineur est le m�me que le nombre de titres de son club, ce qui rend mon dernier choix
	usag� inutile.
*/

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
	

	while (true) //Boucle infinie pour g�rer les clubs/joueurs
	{
		cout << " Selectionnez un choix: " << endl << "1. Ajouter un club de Hockey a la liste." << endl << "2. Supprimer un club de la liste." << endl << "3. Afficher les joueurs d'un club." << endl << "4. Trouver l'entraineur avec le plus de titres gagnes." << endl << "5. Trouver le club avec le plus de titres gagnes." << endl << "Ctrl+Z. Quitter l'application." << endl;
		cin >> choix;
		if (choix == 1)
		{
			//Cr�er un club et le met dans le vecteur de clubs
			Club* unClub;
			Club* nouvClub;
			unClub->SetClub(nouvClub);
			vector_clubs.push_back(nouvClub);
		}

		if (choix == 2)
		{
			bool choix2;
			Club* unClub;
			for (int i = 0; i < vector_clubs.size(); i++) //Passe � travers tous les clubs et supprime ceux d�sign�s par l'usag�
			{
				cout << "Voulez-vous supprimer ce club? (1.Oui, 0.Non): " << endl;
				unClub->AfficherClub(vector_clubs.at(i));
				cin >> choix2;
				if (choix2 == 1)
				{
					unClub->DeleteClub(vector_clubs.at(i));
					cout << "Club supprim�." << endl;
				}
			}
		}

		if (choix == 3)
		{
			//Affiche les membres du club avec une boucle semblable au dernier choix utilisateur
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
			//Boucle les entraineurs du vecteur d'entraineurs et compte combiens de titre chacun poss�de
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
			//Affiche � l'�cran l'entra�neur avec le plus de titres ainsi que son nombre de titre
			cout << "L'entraineur ayant le plus de titres est :" << plusDeTitres.ReturnTrainerName(plusDeTitres) << " avec " << nbTitres << " titres." << endl;
		}

		if (choix == 5)
		{

		}
	}
	//�tape atteint si l'utilisateur sort de la boucle "Ctrl+Z"
	cout << "Merci de m'avoir utilis�. Bebye";
	return;
}