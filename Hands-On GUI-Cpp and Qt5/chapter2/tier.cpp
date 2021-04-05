#include "tier.h"



// Initialisierung der statischen Membervariablen
int Tier::anz = 0;



Tier::Tier(){
    ++ anz;
}

int Tier::getAnzahl(){
    return anz;
}

