#include <iostream>
#include "phanso.h"

class mangphanso : public phanso{
    private:
        int n;
    public:
        mangphanso();
        mangphanso(int);
        void nhap();
        void xuat();
        ~mangphanso();
};
