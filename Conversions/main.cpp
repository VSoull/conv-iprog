#include <iostream>

using namespace std;

void menu(){
            cout << "\n\nPlease choose a converter or 0 to exit! ";
            cout << "\n1.  Convertor Lungime";
            cout << "\n2.  Convertor Arie";
            cout << "\n3.  Convertor Volum";
            cout << "\n4.  Convertor Timp";
            cout << "\n5.  Convertor Viteza";
            cout << "\n6.  Convertor Temperatura";
            cout << "\n7.  Convertor Masa";
            cout << "\n8.  Convertor Energie";
            cout << "\n9.  Convertor Presiune";
            cout << "\n10. Convertor Densitate";
            cout << "\n11. Convertor Combustibil";
            cout << "\n ->  ";
}

void menuLungime(){
            cout << "\n1. Lungime m -> cm";
            cout << "\n2. Lungime cm -> m";
            cout << "\n ->  ";
}

void menuViteza(){
            cout << "\n1. Km/h  -> mph ";
            cout << "\n2. Km/h  -> m/s ";
            cout << "\n ->  ";
}

void convertLungimeMetriToCm(int metri){
    int cm  = 100;
    int dimensiune =  metri * cm;
    cout << "\n\nmetri -> cm : " << dimensiune << "cm";

}

void convertLungimeCmToMetri(int cm){
    int m  = 100;
    int dimensiune = cm / m ;
    cout << "\n\ncm -> m : " << dimensiune << "m";

}



int main()
{

            int converter = -1;
            int tipConversie = -1;
             int dimensiune = -1;
            menu();
            cin >> converter;
            while(converter != 0 ){

                switch(converter){
                case 1:
                        tipConversie = -1;
                        dimensiune = -1;
                        menuLungime();
                        cin >>tipConversie;
                        cout << "\nIntroduceti dimensiunea: ";
                        cin >> dimensiune;
                        switch(tipConversie){
                            case 1:
                                convertLungimeMetriToCm(dimensiune);
                            break;
                            case 2:
                                convertLungimeCmToMetri(dimensiune);
                            break;

                            default:
                                break;

                        }
                    break;




                }
                 menu();
                cin >> converter;

            }

    return 0;
}
