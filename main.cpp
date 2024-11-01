#include <iostream>

#include "Hashtable.h"

int main() {
    Hashtable h;
    h.insert(208);
    h.insert(309);
    h.insert(402);
    h.showTable();

    cout<<"Buscando el 100 "<<h.search(100)<<endl;
    h.remove(402);
    h.insert(9);
    h.showTable();
    return 0;
}
