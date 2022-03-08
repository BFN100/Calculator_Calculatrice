/* 
* Author: Bianca Fernandes Nascimento
* Objective: Introduction to Programming Work, this is in French because my college is in French, but I put the comments in English.
*/


#include <iostream> //general to "cin", "cout"
#include <conio.h> // to switch
#include <string.h> // for tables etc
#include <iomanip> // for handlers like setw

using namespace std;

void fonctionSomme();
void fonctionSoustration();
void fonctionMultiplication();
void fonctionDivision();

int main()
{
    /*As I decided to do it in a soh function, I decided to put the variables as places that look prettier, as places
    it is in light blue color within the operations etc.*/

    const int E0 = 0, E1 = 1, E2 = 2, E3 = 3, E4 = 4, E5 = 5; //menu options
    int etat = E0; //switch function name and their initialization
    char choix, choix2; //declaring switch choice
    int option = 1;
    float n1 = 0.0, n2 = 0.0; // numbers chosen by the user
    float somme = 0.0, soustration = 0.0, division = 0.0, multiplication = 0.0; // addition, subtraction, division and multiplication
    int reponse = 0; //Declaring user responses and initializing them
    int nombre; //multiplication table
    int i, j; // the contents for the multiplication table
    

    do // The 'do' was placed here so that the menu is working unless the person clicks on QUIT, which is option 4
    {
        switch (etat) //Here I start the menu options, called 'etat' which are from the first menu
        {
        case E0: //Option zero is the menu itself
            cout << "\n-------------------------------------------";
            cout << "\n        Mini Calculatrice";
            cout << "\n-------------------------------------------";
            cout << "\n        MENU LOGICIEL";
            cout << "\n-------------------------------------------";
            cout << "\n 1 - Nouvelle opération";
            cout << "\n 2 - Définir les paramètres";
            cout << "\n 3 - Aide";
            cout << "\n Q - Quitter le logiciel";
            cout << "\n CHOIX= ";
            choix = _getch();

            switch (choix) { //This part here serves to give functionality to the menu and choose the options
            case '1':
                etat = E1; break;
            case '2':
                etat = E2; break;
            case '3':
                etat = E3; break;
            case 'Q':
                etat = E4; break; //E4 is only for closing the program, it doesn't have a true option for E5
            }
            break;

        case E1: //By clicking on option 1, you enter the information below:

            cout<< "\n-------------------------------------------";
            cout<< "\n             Mini Calculatrice";
            cout<< "\n-------------------------------------------";
            cout<< "\n       NOUVELLE OPÉRATION – OPTION" << " " << option;
            cout<< "\n-------------------------------------------";

            if(option == 1)
            {
                // if option 1, call 1 - Additionneuse à 1 seule opération, etc.

                cout<< "\n Cette option permet de faire 1 opération de 2 nombre entiers";
                cout<< "\n-------------------------------------------------------";
                cout<< "\n Quell'est la operation que vous vouler faire? (1 = somme, 2 = soustration, 3 = multiplication, 4 = division)";
                cin >> reponse;

                if (reponse == 1)
                {
                  fonctionSomme();
                }
                else if (reponse == 2)
                {
                  fonctionSoustration(); 
                }
                else if (reponse == 3)
                {
                  fonctionMultiplication();
                }
                else if (reponse == 4)
                {
                  fonctionDivision(); 
                }

                cout << "\n Cliquez sur n'importe quelle touche pour revenir au menu principal.";
            }
            else if(option == 2)
            {
                cout<< "\n-------------------------------------------";
                cout<< "\n            Mini Calculatrice";
                cout<< "\n-------------------------------------------";
                cout<< "\n     Table de Multiplication – OPTION" << " " << option;
                cout<< "\n-------------------------------------------";
                cout<< "\n Cette option permet d’afficher la table de multiplication à la demande";
                cout << "Donnez moi le nombre que tu veux multiplier de 1 - 10: ";
                cin >> nombre;
                cout<< "\n-------------------------------------------";
                cout<< "\n Table de Multiplication de 1 – " << nombre;
                cout<< "\n-------------------------------------------" << endl;

                //Creation of the multiplication table

                

                for (i = 1; i <= nombre * 5; i++)
                {
                    cout << "-"; //correct, first line
                }

                cout << "\n" << "| X |"; //this is the X between row and column zero

                for (i = 1; i <= nombre; i++)
                {
                    cout << setw(2) << i << setw(2) << "|"; //correct, first line
                }

                cout << "\n";

                for (i = 1; i <= nombre; i++)
                {
                    cout << "|" << setw(2) << i << setw(2) << "|"; //correct, it is the index of the first column

                    for (j = 1; j <= nombre; j++)
                    {
                        cout << setw(2) << i * j << setw(2) << "|";
                    }
                    cout << "\n";
                }

                for (i = 1; i <= nombre * 5; i++)
                {
                    cout << "-"; //correct, first line
                }

                cout << "\n";
                cout << "\n Cliquez sur n'importe quelle touche pour revenir au menu principal.";
            }
            else if(option == 3)
            {
                cout<< "\n-------------------------------------------";
                cout<< "\n            Mini Calculatrice";
                cout<< "\n-------------------------------------------";
                cout<< "\n   Calculatrice Scientifique – OPTION" << " " << option;
                cout<< "\n-------------------------------------------";
                cout<< "\n Bien vouloir attendre la version d’hivers 2021 du Logiciel";
                cout<< "\n-------------------------------------------";
                cout<< "\n Appuyez sur une touche deux fois pour finir";
                cout<< "\n-------------------------------------------";
            }

            etat = E0;
            choix = _getch();
            break;

        case E2: //By clicking on option 2, you enter the information below:
        
                cout<< "\n-------------------------------------------";
                cout<< "\n            Mini Calculatrice";
                cout<< "\n-------------------------------------------";
                cout<< "\n     DÉFINIR LES PARAMÈTRES – OPTION (2)";
                cout<< "\n-------------------------------------------";
                cout<< "\n PROPRIETES: ";
                cout<< "\n Nom du Programmeur : Bianca Fernandes Nascimento";
                cout<< "\n Date de création : 30/10/2021";
                cout<< "\n Lieu de développement : Institut Grasset";
                cout<< "\n Option en cours : " << option;
                cout<< "\n-------------------------------------------";
                cout<< "\n CHOISISSEZ L’OPTION DU LOGICIEL";
                cout<< "\n 1 - Additionneuse à 1 seule opération ";
                cout<< "\n 2 - Table de Multiplication ";
                cout<< "\n 3 - Calculatrice Scientifique ";
                cout<< "\n CHOIX= ";
                cout<< "\n-------------------------------------------";

                // the user will choose the option

                choix2 = _getch();

                switch (choix2) {
                case '1':
                    option = 1; break;
                case '2':
                    option = 2; break;
                case '3':
                    option = 3; break;
                }
                
                etat = E0;
                break;
                

        case E3: //By clicking on option 3, you enter the information below:
            cout<< "\n-------------------------------------------";
            cout<< "\n            Mini Calculatrice";
            cout<< "\n-------------------------------------------";
            cout<< "\n            AIDE - OPTION (3)";
            cout<< "\n-------------------------------------------";
            cout<< "\n Ce logiciel offre les fonctions de base d’une calculatrice (Addition, Soustraction, Multiplication et Division)";
            cout<< "\n-------------------------------------------";
            cout<< "\n       Sous Menu: ";
            cout<< "\n-------------------------------------------";
            cout<< "\n 1 - Le menu 1 permet de définir les paramètres du logiciel";
            cout<< "\n 2 - Le menu 2 vous propose l’aide que vous lisez actuellement";
            cout<< "\n 3 - Le menu 3 vous amène à la saisie de l’opération";
            cout<< "\n Q - La touche Q permet de quitter le programme";
            cout<< "\n-------------------------------------------";
            cout << "\n Appuyez sur une touche deux fois pour finir";

            choix = _getch();
            etat = E0;
            break;

        case E4:
            //By clicking on option 3 in sub-menu 3, enter the information below, which ends the program:
            cout<< "\n-------------------------------------------";
            cout<< "\n             Mini Calculatrice";
            cout<< "\n-------------------------------------------";
            cout<< "\n     QUITTER LE LOGICIEL - OPTION (4)";
            cout<< "\n-------------------------------------------";
            cout<< "\n FIN DU PROGRAMME";
            cout<< "\n Merci d’avoir utilisé la MiniCalculatrice";
            cout<< "\n-------------------------------------------";
            cout<< "\n Appuyez sur une touche deux fois pour finir";
            cout<< "\n-------------------------------------------";

            choix = _getch();
            etat = E5;
            break;

        default: etat = E0;
        break;
        }

    }while (etat != E5);

    return 0;

}

void fonctionSomme()
{ 
    float n1, n2;

    cout<< "\n-------------------------------------------------------";
    cout<< "\n Veuillez écrire deux nombres entiers afin que nous puissions faire la somme pour vous :";
    cin >> n1 >> n2;
    float somme = n1 + n2; //normal operation of adding between 2 numbers entered by the user
    cout<< n1 << "+" << n2 << "=" << somme << endl;
    cout<< "\n-------------------------------------------------------";

    return; //When it is void it returns like this because it is standard
}

void fonctionSoustration()
{ 
    float n1, n2;
    cout<< "\n-------------------------------------------------------";
    cout<< "\n Veuillez écrire deux nombres entiers afin que nous puissions faire la soustration pour vous :";
    cin >> n1 >> n2;
    float soustration = n1 - n2; //normal operation of subtraction between 2 numbers entered by the user
    cout<< n1 << "-" << n2 << "=" << soustration << endl;
    cout<< "\n-------------------------------------------------------";

    return;
}

void fonctionMultiplication()
{ 
    float n1, n2;
    cout<< "\n-------------------------------------------------------";
    cout<< "\n Veuillez écrire deux nombres entiers afin que nous puissions faire la multiplication pour vous :";
    cin >> n1 >> n2;
    float multiplication = n1 * n2; //normal operation of multiplication between 2 numbers entered by the user
    cout<< n1 << "x" << n2 << "=" << multiplication << endl;
    cout<< "\n-------------------------------------------------------";

    return;
}

void fonctionDivision()
{
    float n1, n2;
    cout<< "\n-------------------------------------------------------";
    cout<< "\n Veuillez écrire deux nombres entiers afin que nous puissions faire la division pour vous :";
    cin >> n1 >> n2;
    float division = (float)n1 / n2; //normal operation of division between 2 numbers entered by the user
    cout<< n1 << "÷" << n2 << "=" << division << endl;
    cout<< "\n-------------------------------------------------------";

    return;
}
