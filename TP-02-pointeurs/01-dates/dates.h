#pragma once

typedef enum {
    janvier=1,
    février,
    mars,
    avril,
    mai,
    juin,
    juillet,
    aout,
    septembre,
    octobre,
    novembre,
    decembre,
} Month;

typedef struct {
    int jour;
    Month mois;
    int annee;
} Date;

void initialiseDate(Date *d);
void afficheDate(Date *d);
Date creerDateParCopie();

