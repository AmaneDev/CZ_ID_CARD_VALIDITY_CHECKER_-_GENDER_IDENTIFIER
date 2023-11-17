#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, ""); //cestina s ceskou diakritikou vypada lip change my mind
    string jmeno;
    string prijmeni;
    string rodne_cislo = "";
    int rodne_cislo_int;
    string rok_narozeni;
    string mesic_narozeni;
    string den_narozeni;

    cout << "Dobrý den, \n";
    cout << "Zadejte prosím své jméno: "<<endl;
    cin >> jmeno;

    cout << "Dále prosím zadejte svoje příjimení"<<endl;
    cin >> prijmeni;

    cout << "Nyní prosím zadej své rodné číslo BEZ LOMÍTEK: ";
    cin >> rodne_cislo;
    
    rodne_cislo_int = std::stoll(rodne_cislo);

    if (rodne_cislo_int % 11 == 0) {
        cout << "Zadal jsi rodné číslo v neplatném formátu" << endl;
        int rodne_cislo_int = 0;
        string rodne_cislo = "";
        cout<< "Zadej rodné číslo znovu BEZ LOMÍTEK: ";
        cin >> rodne_cislo;
    }
    else {
        string jmeno_a_prijmeni = jmeno + " " + prijmeni;
        cout << jmeno_a_prijmeni<<endl;

        //cout << rodne_cislo; //check
        
        
        string den_narozeni = rodne_cislo.substr(4,2);
        cout <<"Den narození: " <<den_narozeni<<endl;
        
        string mesic_narozeni = rodne_cislo.substr(2,2);
        
        int mesic_narozeni_INT = stoi(mesic_narozeni);
        
        if (mesic_narozeni_INT > 50) {
            int zensky_mesic_naroz = mesic_narozeni_INT - 50;
            cout<<"Měsíc narození: "<<zensky_mesic_naroz<<endl;
        }

        string rok_narozeni = rodne_cislo.substr(0,2);
        cout <<"Rok narození: " <<rok_narozeni<<endl;
        
        if (mesic_narozeni_INT > 50) {
            cout << "Vaše pohlaví je ŽENA ^^," << endl;
        }
        else {
            cout<<"Vaše pohlaví je MUŽ ^^,"<<endl;
        }
    }
    return 0;

    
}
