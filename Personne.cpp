#include "stdafx.h"
#include "Personne.h"
#include <string>
#include <iostream>

Personne::Personne()
{
	cout << "je suis dans le constructeur par defaut\n ";
	Nom = "inconnu";
	Prenom = "inconnu";
	DateNaissance = "01/01/1900";
}

Personne::Personne(string unNom, string unPrenom, string uneDate)
{
	cout << "je suis dans le constructeur avec parametres \n";
	Nom = unNom;
	Prenom = unPrenom;
	DateNaissance = uneDate;
}

//Personne::~Personne()
//{
//}

void Personne::SePresenter()
{
	cout << "je m'appelle " << Nom << " " << Prenom << " je suis ne(e) le " << DateNaissance << endl;
}