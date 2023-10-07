#include "mangphanso.h"

mangphanso::mangphanso(){
    n = 1;
    nhap();
}

mangphanso::mangphanso(int newN){
    n = newN;
    arr = new phanso[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].nhap();
    }

}

void mangphanso::nhap(){
    cout << "Nhap so luong phan tu mang: "; cin >> n;
    cout << "\nNhap cac phan tu mang\n"
    arr = new phanso[n];
    for (int i = 0; i < n; i++){
        arr[i].nhap();
    }
}

void mangphanso::xuat(){
    cout << "Xuat mang phan so:\n";
    for (int i = 0; i < n; i++)
        arr[i].xuat();
}
mangphanso::~mangphanso() {

}