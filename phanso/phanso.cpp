#include "phanso.h"

phanso::phanso(){
    tuso = 0;
    mauso = 1;
}

phanso::phanso(int ituso, int imauso){
    tuso = ituso;
    mauso = imauso;
}

void phanso::nhap(){
    cout << "\nNhap tuso: ";
    cin  >> tuso;
    
    do {
        cout << "\nNhap mauso: ";
        cin  >> mauso;
    } while (mauso == 0);

}

void phanso::xuat(){
     cout << "phanso:   " << tuso << '/' << mauso << '\n';
}

phanso::~phanso(){

}
