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
void convertArieMToCm(int m){
    int cm  = 100 * 100;
    int dimensiune = m * cm;
    cout << "\n\m patrat -> cm patrati : " << dimensiune << "m patrati";

}


void convertVolumMToCm(int m){
    int cm  = 100 * 100 * 100;
    int dimensiune = m * cm;
    cout << "\n\m cub -> cm cub : " << dimensiune << " cm cubi";

}

void convertMinutToSec(int m){
    int sec  = 60;
    int dimensiune = m * sec;
    cout << "\n\min -> sec : " << dimensiune << " sec";

}

void convertKmToMph(int km){
    double dimensiune = km  /  1.609344;
    cout << "\n\Km -> mph : " << dimensiune << " sec";
}

void convertKmToM(int km){
    double m = 1000;
    double dimensiune = km * m/ 3600;
    cout << "\n\Km/h -> m/s : " << dimensiune << " m/s";
}

void convertTempCtoF(int temp){
    double dimensiune = temp * 1.8 + 32;
    cout << "\n\Celsius -> Farenheit : " << dimensiune ;

}

void convertKgtoG(int kg){
    double dimensiune = kg * 1000;
    cout << "\n\Kg -> g : " << dimensiune ;

}


void convertJtoErg(int j){
    int dimensiune = j * 10000000;
    cout << "\n\J -> erg : " << dimensiune ;

}

void convertpascaltobar(double j){
    double dimensiune = j / 10000000;
    cout << "\n\Pascal -> bar: " << dimensiune ;

}

void convertKgCubTogrMetru(int j){
    int dimensiune = j * 1;
    cout << "\n\Pascal -> bar: " << dimensiune ;

}

void convertlitruPerKmToMphGalon(double j){
    double dimensiune = j * 2.825;
    cout << "\n\l/km -> mpg: " << dimensiune ;

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
 case 2:
                                 tipConversie = -1;
                                 dimensiune = -1;
                                  cout << "\n1.Arie m patrati-> cm patrati ";
                                 cout << "\n ->  ";
                                  cin >>tipConversie;
                                  cout << "\nIntroduceti dimensiunea: ";
                                    cout << "\n ->  ";
                                  cin >> dimensiune;
                                  convertArieMToCm(dimensiune);
                                break;

                            case 3:
                                  tipConversie = -1;
                                    dimensiune = -1;
                                  cout << "\n1.Volum m patrati-> cm patrati ";
                                    cout << "\n ->  ";
                                  cin >>tipConversie;
                                  cout << "\nIntroduceti dimensiunea: ";
                                    cout << "\n ->  ";
                                  cin >> dimensiune;
                                  convertVolumMToCm(dimensiune);
                                break;

                            case 4:
                                  tipConversie = -1;
                                  dimensiune = -1;
                                  cout << "\n1.Minute -> secunde ";
                                  cout << "\n ->  ";
                                  cin >>tipConversie;
                                  cout << "\nIntroduceti dimensiunea: ";
                                  cout << "\n ->  ";
                                  cin >> dimensiune;
                                  convertMinutToSec(dimensiune);
                                break;



                                   case 5:

                                       tipConversie = -1;
                                        dimensiune = -1;
                                        menuViteza();
                                        cin >>tipConversie;
                                        cout << "\nIntroduceti dimensiunea: ";
                                        cin >> dimensiune;
                                        switch(tipConversie){
                                            case 1:
                                                convertKmToMph(dimensiune);
                                            break;
                                            case 2:
                                                convertKmToM(dimensiune);
                                            break;

                                            default:
                                                break;

                                    }
                                    break;

                                            case 6:
                                                  tipConversie = -1;
                                                  dimensiune = -1;
                                                  cout << "\n1.Celsius -> Farenheit ";
                                                  cout << "\n ->  ";
                                                  cin >>tipConversie;
                                                  cout << "\nIntroduceti dimensiunea: ";
                                                  cout << "\n ->  ";
                                                  cin >> dimensiune;
                                                  convertTempCtoF(dimensiune);
                                                break;

                                                 case 7:
                                                  tipConversie = -1;
                                                  dimensiune = -1;
                                                  cout << "\n1.Kg -> g ";
                                                  cout << "\n ->  ";
                                                  cin >>tipConversie;
                                                  cout << "\nIntroduceti dimensiunea: ";
                                                  cout << "\n ->  ";
                                                  cin >> dimensiune;
                                                  convertKgtoG(dimensiune);
                                                break;

                                                case 8:
                                                  tipConversie = -1;
                                                  dimensiune = -1;
                                                  cout << "\n1.J -> erg ";
                                                  cout << "\n ->  ";
                                                  cin >>tipConversie;
                                                  cout << "\nIntroduceti dimensiunea: ";
                                                  cout << "\n ->  ";
                                                  cin >> dimensiune;
                                                  convertJtoErg(dimensiune);
                                                break;

                                                    case 9:
                                                  tipConversie = -1;
                                                  dimensiune = -1;
                                                  cout << "\n1.Pa-> bar ";
                                                  cout << "\n ->  ";
                                                  cin >>tipConversie;
                                                  cout << "\nIntroduceti dimensiunea: ";
                                                  cout << "\n ->  ";
                                                  cin >> dimensiune;
                                                  convertpascaltobar(dimensiune);
                                                break;

                                                case 10:
                                                  tipConversie = -1;
                                                  dimensiune = -1;
                                                  cout << "\n1.Kb/m cub -> g/l ";
                                                  cout << "\n ->  ";
                                                  cin >>tipConversie;
                                                  cout << "\nIntroduceti dimensiunea: ";
                                                  cout << "\n ->  ";
                                                  cin >> dimensiune;
                                                  convertKgCubTogrMetru(dimensiune);
                                                break;


                                                case 11:
                                                  tipConversie = -1;
                                                  dimensiune = -1;
                                                  cout << "\n\l/km -> mpg: ";
                                                  cout << "\n ->  ";
                                                  cin >>tipConversie;
                                                  cout << "\nIntroduceti dimensiunea: ";
                                                  cout << "\n ->  ";
                                                  cin >> dimensiune;
                                                  convertlitruPerKmToMphGalon(dimensiune);
                                                break;





                }
                 menu();
                cin >> converter;

            }

    return 0;
}
