#include <string>
#include <vector>
#include "TitreGagne.h"

class Entraineur
{
public:
	vector<Entraineur> vecteur_entraineur; //Création d'un vecteur publique pour que toutes les classes en ait l'accès
	

	Entraineur();
	void SetEntraineur(Entraineur*);			//Entre les informations d'un entraineur
	void PushBackEntraineur(Personne);			//Fonction membre prenant une personne avec comme rôle "Entraineur" et le met à la fin du vecteur d'entraineur
	int ReturnListe_Titre();					//Retourne la taille de la liste de titre
	std::string ReturnTrainerName(Entraineur);	//Retourne le prénom et le nom de l'entraineur
	~Entraineur();

private:
	std::string nom, prenom, lieu_obtention_grade;
	vector<TitreGagne> liste_titre;				//Vecteur de titre d'un entraineur
};