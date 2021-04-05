#ifndef TIER_H
#define TIER_H


class Tier
{
public:
    Tier();
    static int getAnzahl();
    // statische Membermethode kann auf nur
    // statische Membervariablen zugreifen

private:
    static int anz;

};



#endif // TIER_H
