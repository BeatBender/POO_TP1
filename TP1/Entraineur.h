#include <string>
#include <vector>
#include "TitreGagne.h"

class Entraineur
{
public:
	vector<Entraineur> vecteur_entraineur; //Cr�ation d'un vecteur publique pour que toutes les classes en ait l'acc�s
	

	Entraineur();
	void SetEntraineur(Entraineur*);			//Entre les informations d'un entraineur
	void PushBackEntraineur(Personne);			//Fonction membre prenant une personne avec comme r�le "Entraineur" et le met � la fin du vecteur d'entraineur
	int ReturnListe_Titre();					//Retourne la taille de la liste de titre
	std::string ReturnTrainerName(Entraineur);	//Retourne le pr�nom et le nom de l'entraineur
	~Entraineur();

private:
	std::string nom, prenom, lieu_obtention_grade;
	vector<TitreGagne> liste_titre;				//Vecteur de titre d'un entraineur
};