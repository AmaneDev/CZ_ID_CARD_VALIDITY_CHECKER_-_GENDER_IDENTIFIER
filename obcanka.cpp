#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, ""); //cestina s ceskou diakritikou vypada lip change my mind  //setting up Czech alphabet support
    string jmeno;  //name
    string prijmeni; //surname
    string rodne_cislo = ""; //family number
    int rodne_cislo_int;  //integer family_number
    string rok_narozeni;   //string year_of_birth
    string mesic_narozeni; //string month_of_birth
    string den_narozeni; //string day of bith

    cout << "Dobrý den, \n";  //Hello,
    cout << "Zadejte prosím své jméno: "<<endl;  //please, enter your name
    cin >> jmeno;

    cout << "Dále prosím zadejte svoje příjimení"<<endl;   //now, enter your surname, please
    cin >> prijmeni;

    cout << "Nyní prosím zadej své rodné číslo BEZ LOMÍTEK: ";  //enter your family number without slash
    cin >> rodne_cislo;
    
    rodne_cislo_int = std::stoll(rodne_cislo);

    if (rodne_cislo_int % 11 == 0) {
        cout << "Zadal jsi rodné číslo v neplatném formátu" << endl;  //you´ve entered the incorrect family number
        int rodne_cislo_int = 0;
        string rodne_cislo = "";
        cout<< "Zadej rodné číslo znovu BEZ LOMÍTEK: ";   //enter your family number again WITHOUT SLASHES
        cin >> rodne_cislo;
    }
    else {
        string jmeno_a_prijmeni = jmeno + " " + prijmeni;
        cout << jmeno_a_prijmeni<<endl;  //name and surname

        //cout << rodne_cislo; //check
        
        
        string den_narozeni = rodne_cislo.substr(4,2);
        cout <<"Den narození: " <<den_narozeni<<endl;  //Date of birth:
        
        string mesic_narozeni = rodne_cislo.substr(2,2);   //month of birth:
        
        int mesic_narozeni_INT = stoi(mesic_narozeni);
        
        if (mesic_narozeni_INT > 50) {
            int zensky_mesic_naroz = mesic_narozeni_INT - 50;   //woman´s month of birth 
            cout<<"Měsíc narození: "<<zensky_mesic_naroz<<endl;    //měsíc narození
        }

        string rok_narozeni = rodne_cislo.substr(0,2);
        cout <<"Rok narození: " <<rok_narozeni<<endl;  //year of birth
        
        if (mesic_narozeni_INT > 50) {
            cout << "Vaše pohlaví je ŽENA ^^," << endl;  //your gender is woman
        }
        else {
            cout<<"Vaše pohlaví je MUŽ ^^,"<<endl;  //your gender is man
        }
    }
    return 0;

    
}
