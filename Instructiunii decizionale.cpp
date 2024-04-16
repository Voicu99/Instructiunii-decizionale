// Instructiunii decizionale.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

bool VerificareParola(std::string parola_introdusa)
{

    //avem nevoie de un etalon pentru parola corecta
    const std::string parola_corecta = "parola123";
    //comparam parola_introdusa cu parola corecta
    //daca parola_introdusa este la fel ca parola corecta returnam true
    if (parola_introdusa == parola_corecta)
    {
        std::cout << "parola confirmata" << std::endl;
        return true;
    }
    // in caz contrar returnam false
    else
    {
        std::cout << "parola eronata!" << std::endl;
        return false;

    }

}
int main()
{
    bool is_raining = true;
    if (is_raining )//(is_raining == true) //(!is_raning) --> (is_raining == false)
    {
       
            std::cout << "Afara ploua , ce melanconie \n";
            std::cout << "Sa it iei o umbrela" << std::endl;
    }

    else
    {
        std::cout << "Afara ii soare, ce frumos \n";
        std::cout << "Sa iti iei un tricou" << std::endl;
    }


    std::cout << "Trebuie sa merg la munca" << std::endl;

    std::cout << "Intodu parola : " << std::endl;
    std::string user_password;
    std::cin >> user_password;
    bool chkPswd = VerificareParola(user_password);

    if (chkPswd)
    {
        std::cout << "Bine ai venit , spor la munca!" << std::endl;
    }

    else
    {
        std::cout << "Parola incorecta,system blocked!" << std::endl;
    }

 
    int ora_input = -5;
    if (ora_input >= 0 && ora_input <= 24)
    {



        if (ora_input <= 11 && ora_input >= 6)
        {
            std::cout << "Buna dimineata\n";

        }
        // verificam daca ora_input este intre 12 si 17
        else if (ora_input >= 12 && ora_input <= 17)
        {
            std::cout << "Buna ziua" << std::endl;
        }

        else if (ora_input >= 18 && ora_input <= 23)
        {
            std::cout << "Buna seara" << std::endl;

        }

        else
        {
            std::cout << "Nu vreau sa fiu deranjat !" << std::endl;
        }
    }
    else
    {
        std::cout << "Ora invalida \n";


    }



    bool test = false;
    int var = 0;
    if (test) // test == true
        std::cout << "We are true\n";
    //std::cout << "Test\n" ; daca nu folosi {} nu putem sa face mai multe instructiuni in if,else
    else {
        std::cout << "We are false\n";
        var = 15;
    }

    std::cout << var;



    int destinatie;
    std::cout << "Introdu o destinatie , de la 1  pana la 5" << std::endl;
    std::cin >> destinatie;
    
    switch (destinatie)
    {
    case 1 :
        std::cout << "Destinatia 1\n";
        break; // instructiunea break ne opreste executarea mai departe
        
    case 2:
        std::cout << "Destinatia 2\n";
        break;
    case 3:
        std::cout << "Destinatia 3\n";
        break;
        
    case 4:
        std::cout << "Destinatia 4\n";
        break;
    case 5:
        std::cout << "Destinatia 5\n";
        break;

    
    default:
        std::cout << "Destinatie incorecta\n";
        break;


    }
}




