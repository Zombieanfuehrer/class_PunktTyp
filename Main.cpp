#include "PunktTyp.cpp"
#include <windows.h>

int main (void) {

    char eingabe;
    PunktTyp *Silber,*tablett;
    double temp;

    cout<<"1 oder 2?"<<endl;
    cin >> eingabe;

    switch(eingabe)
    {
        case '1':
                Silber = new PunktTyp;
                Silber->print();
                cout<<"Wert der X-Koordiante eingeben:";
                cin>>temp; 
                Silber->set_x(temp);
                cout<<"Wert der Y-Koordiante eingeben:";
                cin>>temp; 
                Silber->set_y(temp);
                cout<<"X: "<<Silber->get_x()<<",Y: "<<Silber->get_y()<<endl;
                Sleep(1000);
                break;
        case '2':
                tablett = new PunktTyp(3.14,25.07);
                cout<<"X: "<<tablett->get_x()<<",Y: "<<tablett->get_y()<<endl;
                Sleep(1000);
                break;   
        default :
                cout<<"Eingabe fehlerhaft!"<<endl;
                Sleep(2000);
    }
}
