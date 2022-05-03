#include <iostream>

using namespace std;

int main()
{
	bool running = true;
	char langOpt;

	cout << "Reciproque of Pythagorus Calculator | Calculatrice Du Reciproque De Pythagore\n";
	cout << endl;

	cout << "Entrez F pour Francais | Enter any key for English\n";
	cout << "~ ";

	cin >> langOpt;
	cout << endl;

	while (running)
	{
		if (langOpt == 'F' || langOpt == 'f')	// French Version
		{

			cout << endl;

			cout << "	A\n";
			cout << "	|\\" << endl;
			cout << "	| \\" << endl;
			cout << "	|  \\" << endl;
			cout << "	|   \\" << endl;
			cout << "	|____\\" << endl;
			cout << "	B     C" << endl;

			cout << endl;
			cout << endl;

			cout << "Entrez la valeur du cote le plus long.\n";
			cout << "~ ";

			double coteLong;
			cin >> coteLong;
			cout << endl;

			double coteLongCarre;
			coteLongCarre = coteLong * coteLong;

			cout << "Le cote le plus long au carre: " << coteLongCarre << endl;

			cout << endl;

			cout << "Entrez la valeur du 2eme cote.\n";
			cout << "~ ";
			double cote2;
			cin >> cote2;
			cout << endl;

			cout << "Entrez la valeur du 3eme cote.\n";
			cout << "~ ";
			double cote3;
			cin >> cote3;
			cout << endl;

			double sumC2C3;
			sumC2C3 = cote2 * cote2 + cote3 * cote3;

			cout << "Les deux cotes au carre additionee ensemble: " << sumC2C3 << endl;
			cout << endl;

			if (sumC2C3 == coteLongCarre)
			{
				cout << "D'apres la reciproque de Pythagore, le triangle est rectangle.\n";
			}
			else
			{
				cout << "D'apres la contrapose de Pythagore, le triangle n'est pas rectangle.\n";
			}

			cout << endl;

			char quitterIn;
			cout << "Voulez vous quitter?\n";
			cout << "Entrez Q pour quitter ou C pour refaire un calcul.\n";
			cout << "~ ";
			cin >> quitterIn;
			bool quitLoopFR = true;

			while (quitLoopFR)
			{
				if (quitterIn == 'Q' || quitterIn == 'q')
				{
					running = false;
					quitLoopFR = false;
					exit;
				}
				else if (quitterIn == 'C' || quitterIn == 'c')
				{
					quitLoopFR = false;
					running = true;
				}
				else
				{
					cout << "ERREUR, INVALIDE";
					cout << endl;
					quitLoopFR = true;
				}

			}

		}
		else // English Version
		{
			cout << "	A\n";
			cout << "	|\\" << endl;
			cout << "	| \\" << endl;
			cout << "	|  \\" << endl;
			cout << "	|   \\" << endl;
			cout << "	|____\\" << endl;
			cout << "	B     C" << endl;

			cout << endl;
			cout << endl;

			cout << "Enter the length of the longest side.\n";
			cout << "~ ";

			double longSide;
			cin >> longSide;
			cout << endl;

			double sumLongSide;
			sumLongSide = longSide * longSide;

			cout << "The longest side squared: " << sumLongSide << endl;

			cout << endl;

			cout << "Enter the length of the 2nd side.\n";
			cout << "~ ";
			double side2;
			cin >> side2;
			cout << endl;

			cout << "Enter the length of the 3rd side.\n";
			cout << "~ ";
			double side3;
			cin >> side3;
			cout << endl;

			double sumS2S3;
			sumS2S3 = side2 * side2 + side3 * side3;

			cout << "Side 2 squared and Side 3 squared additioned: " << sumS2S3 << endl;
			cout << endl;

			if (sumS2S3 == sumLongSide)
			{
				cout << "This triangle is a rectangle triangle.\n";
				cout << endl;
			}
			else
			{
				cout << "This triangle is not a rectangle triangle.\n";
				cout << endl;
			}

			char quitInp;
			cout << "Would you like to quit?\n";
			cout << "Enter Q to quit or C to do another calculation.\n";
			cout << "~ ";
			cin >> quitInp;
			bool quitLoopEN = true;

			while (quitLoopEN)
			{
				if (quitInp == 'Q' || quitInp == 'q')
				{
					running = false;
					quitLoopEN = false;
					exit;
				}
				else if (quitInp == 'C' || quitInp == 'c')
				{
					quitLoopEN = false;
					running = true;
				}
				else
				{
					cout << "ERROR, INVALID";
					cout << endl;
					quitLoopEN = true;
				}

			}
		}
	}
}