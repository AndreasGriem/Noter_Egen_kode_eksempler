#include <stdio.h>
#include <mm_malloc.h>
#include <string.h>
#include <memory.h>

typedef enum{
    Female,
    Male
} Gender_t;

typedef struct{
    char Name[10];
    Gender_t Gender;
    int Age;
    int Hight;
    int Weight;
} Person_t;

void InsertDataInRecord(char name[], Gender_t gender, int height, int age, int weight, Person_t *pPerson){

    pPerson->Age = age;
    pPerson->Gender = gender;
    pPerson->Hight = height;
    strcpy(&pPerson->Name[0], &name[0]);
    pPerson->Weight = weight;
}



Person_t *InsertDataInAllocatedRecord(char name[], Gender_t gender, int height, int age, int weight){
    Person_t *pPerson = NULL;
    pPerson = malloc(sizeof(Person_t));

    pPerson->Age = age;
    pPerson->Gender = gender;
    pPerson->Hight = height;
    strcpy(&pPerson->Name[0], &name[0]);
    pPerson->Weight = weight;

    return pPerson;
}

void main(void) {

    Person_t PersonArray[5];

    Person_t *pPerson= NULL;

    Person_t Person1 = { "Andreas",Male,21,175,74 };
    Person_t Person2 = { "Carsten",Male,58,170,58 };// ønsketænkning :-) , mht vægten)


    printf("Navn: %s \n", Person1.Name);
    printf("Navn: %s \n", Person2.Name);

    memcpy(&PersonArray[0],&Person1,sizeof (Person_t));
    memcpy(&PersonArray[1],&Person1,sizeof (Person_t));

    InsertDataInRecord( "Andreas",Male,21,175,74, &PersonArray[0]);
    InsertDataInRecord("Anne", Female, 23, 172, 52, &PersonArray[2]);

    pPerson = InsertDataInAllocatedRecord("Birgitte", Female, 162, 54, 60);

    memcpy(&PersonArray[3],pPerson,sizeof (Person_t));



    printf("Navn: %s \n", pPerson->Name);

    strcpy((void*)&(PersonArray[4].Name),(void*)&(PersonArray[0].Name));

    PersonArray[4].Gender = PersonArray[1].Gender;

    printf("%s",PersonArray[2].Name);

}

