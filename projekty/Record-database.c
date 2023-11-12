#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char content[50];
}record;

void addRecord(record database[], int *databaseCount, record record){
    record.id = *databaseCount;
    database[*databaseCount] = record;
    *databaseCount += 1;
}

void removeRecord(record database[], record record){

}

void editRecord(record database[], record record, char *newContent){

}

void printDatabase(record database[], int databaseCount){
    for(int i = 0; i < databaseCount; i++){
        printf("\n %d", database[i].id);
        printf("\n %s", database[i].content);
    }
}

int main(){

    record database[100];

    int databaseCount = 0;
    int *pDatabaseCount = NULL;
    pDatabaseCount = &databaseCount;

    record test0 = {databaseCount, "test0"};
    record test1 = {databaseCount, "test1"};

    addRecord(database, pDatabaseCount, test0);
    addRecord(database, pDatabaseCount, test1);

    printDatabase(database, databaseCount);

    strcpy(database[0].content, "zmiana test");

    printf("\n");
    printDatabase(database, databaseCount);
    
    return 0;
}