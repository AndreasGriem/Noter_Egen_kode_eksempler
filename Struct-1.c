#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// koden nedenfor er et ekesmepl for en struct i en struct i en struct

typedef struct
{
    char klasse[5];
    int antal_elever;
    int antal_laerere;
    int klassetrin;
    char fag[5][10];
} klasse;

typedef struct{
    klasse niende_A;
    klasse niende_B;
    klasse niende_C;
} skole;

typedef struct
{
    skole gistrup;
    skole klarup;
    skole storvorde;
} byer;

int main(void)
{
    byer by;

    klasse niende_A;
    klasse niende_B;
    klasse niende_C;

    strcpy(by.gistrup.niende_A.klasse, "9.A");
    by.gistrup.niende_A.antal_elever = 28;
    by.gistrup.niende_A.antal_laerere = 6;
    by.gistrup.niende_A.klassetrin = 9;
    strcpy(by.gistrup.niende_A.fag[0], "matematik");
    strcpy(by.gistrup.niende_A.fag[1],"dansk");
    strcpy(by.gistrup.niende_A.fag[2],"engelsk");
    strcpy(by.gistrup.niende_A.fag[3],"historie");
    strcpy(by.gistrup.niende_A.fag[4],"tysk");

    strcpy(by.gistrup.niende_B.klasse, "9.B");
    by.gistrup.niende_B.antal_elever = 23;
    by.gistrup.niende_B.antal_laerere = 5;
    by.gistrup.niende_B.klassetrin = 9;
    strcpy(by.gistrup.niende_B.fag[0], "matematik");
    strcpy(by.gistrup.niende_B.fag[1],"dansk");
    strcpy(by.gistrup.niende_B.fag[2],"engelsk");
    strcpy(by.gistrup.niende_B.fag[3],"historie");
    strcpy(by.gistrup.niende_B.fag[4],"fransk");

    strcpy(by.gistrup.niende_C.klasse, "9.C");
    by.gistrup.niende_C.antal_elever = 21;
    by.gistrup.niende_C.antal_laerere = 5;
    by.gistrup.niende_C.klassetrin = 9;
    strcpy(by.gistrup.niende_C.fag[0], "matematik");
    strcpy(by.gistrup.niende_C.fag[1],"dansk");
    strcpy(by.gistrup.niende_C.fag[2],"engelsk");
    strcpy(by.gistrup.niende_C.fag[3],"historie");
    strcpy(by.gistrup.niende_C.fag[4],"spansk");

    // KLARUP

    strcpy(by.klarup.niende_A.klasse, "9.A");
    by.klarup.niende_A.antal_elever = 28;
    by.klarup.niende_A.antal_laerere = 6;
    by.klarup.niende_A.klassetrin = 9;
    strcpy(by.klarup.niende_A.fag[0], "matematik");
    strcpy(by.klarup.niende_A.fag[1],"dansk");
    strcpy(by.klarup.niende_A.fag[2],"engelsk");
    strcpy(by.klarup.niende_A.fag[3],"historie");
    strcpy(by.klarup.niende_A.fag[4],"tysk");

    strcpy(by.klarup.niende_B.klasse, "9.B");
    by.klarup.niende_B.antal_elever = 23;
    by.klarup.niende_B.antal_laerere = 5;
    by.klarup.niende_B.klassetrin = 9;
    strcpy(by.klarup.niende_B.fag[0], "matematik");
    strcpy(by.klarup.niende_B.fag[1],"dansk");
    strcpy(by.klarup.niende_B.fag[2],"engelsk");
    strcpy(by.klarup.niende_B.fag[3],"historie");
    strcpy(by.klarup.niende_B.fag[4],"fransk");

    strcpy(by.klarup.niende_C.klasse, "9.C");
    by.klarup.niende_C.antal_elever = 21;
    by.klarup.niende_C.antal_laerere = 5;
    by.klarup.niende_C.klassetrin = 9;
    strcpy(by.klarup.niende_C.fag[0], "matematik");
    strcpy(by.klarup.niende_C.fag[1],"dansk");
    strcpy(by.klarup.niende_C.fag[2],"engelsk");
    strcpy(by.klarup.niende_C.fag[3],"historie");
    strcpy(by.klarup.niende_C.fag[4],"spansk");

    // STORVORDE

    strcpy(by.storvorde.niende_A.klasse, "9.A");
    by.storvorde.niende_A.antal_elever = 28;
    by.storvorde.niende_A.antal_laerere = 6;
    by.storvorde.niende_A.klassetrin = 9;
    strcpy(by.storvorde.niende_A.fag[0], "matematik");
    strcpy(by.storvorde.niende_A.fag[1],"dansk");
    strcpy(by.storvorde.niende_A.fag[2],"engelsk");
    strcpy(by.storvorde.niende_A.fag[3],"historie");
    strcpy(by.storvorde.niende_A.fag[4],"tysk");

    strcpy(by.storvorde.niende_B.klasse, "9.B");
    by.storvorde.niende_B.antal_elever = 23;
    by.storvorde.niende_B.antal_laerere = 5;
    by.storvorde.niende_B.klassetrin = 9;
    strcpy(by.storvorde.niende_B.fag[0], "matematik");
    strcpy(by.storvorde.niende_B.fag[1],"dansk");
    strcpy(by.storvorde.niende_B.fag[2],"engelsk");
    strcpy(by.storvorde.niende_B.fag[3],"historie");
    strcpy(by.storvorde.niende_B.fag[4],"fransk");

    strcpy(by.storvorde.niende_C.klasse, "9.C");
    by.storvorde.niende_C.antal_elever = 21;
    by.storvorde.niende_C.antal_laerere = 5;
    by.storvorde.niende_C.klassetrin = 9;
    strcpy(by.storvorde.niende_C.fag[0], "matematik");
    strcpy(by.storvorde.niende_C.fag[1],"dansk");
    strcpy(by.storvorde.niende_C.fag[2],"engelsk");
    strcpy(by.storvorde.niende_C.fag[3],"historie");
    strcpy(by.storvorde.niende_C.fag[4],"spansk");

    printf("%d",by.storvorde.niende_B.klassetrin);

}


/*
    printf("klasse: %s\n",niende_A.klasse);
    printf("Antal elever: %d\n",niende_A.antal_elever);
    printf("Antal lærere: %d\n",niende_A.antal_laerere);
    printf("Klassetrin: %d\n",niende_A.klassetrin);
    for (int i = 0; i < 5; ++i) {
        printf("Fag: %s\n",niende_A.fag[i]);
*/
