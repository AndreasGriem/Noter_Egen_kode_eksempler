#include <stdio.h>
#include <mm_malloc.h>
#include <string.h>
#include <memory.h>

typedef enum{
    Andreas, Anne, Carsten, Birgitte
} familien_griem;

typedef struct{
    char Name[10];
    int age;
    int height;
    familien_griem person;
} info;

void InsertDataInRecord(char name[], int age, int height, familien_griem person, info *pPerson){

    strcpy(&pPerson->Name[0], &name[0]);
    pPerson->age = age;
    pPerson->height = height;

    pPerson->person = person;
}

info *InerstDataInAllocatedRecord(char name[], int age, int height, familien_griem person){
    info *pPerson;
    pPerson = malloc(sizeof(int));

    strcpy(&pPerson->Name[0], &name[0]);
    pPerson->age = age;
    pPerson->height = height;
    pPerson->person = person;

    return pPerson;
}

int main(void){

    info *pPerson;

    info person1 = {"andreas", 12, 175, Andreas};

    printf("%s",person1.Name);
}