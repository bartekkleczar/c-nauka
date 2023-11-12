#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char content[50];
}record;

void addRecord(record database[100][1], int *databaseCount, record record){
    record.id = *databaseCount;
    database[*databaseCount][0] = record;
    *databaseCount += 1;
}

void removeRecord(record database[], record record){

}

void editRecord(record database[100][1], record record, char *newContent){
    strcpy(database[record.id][0].content, newContent);
}

void printDatabase(record database[100][1], int databaseCount){
    for(int i = 0; i < databaseCount; i++){
        printf("\n %d", database[i][0].id);
        printf("\n %s", database[i][0].content);
    }
}

int main(){

    record database[100][1];

    int databaseCount = 0;
    int *pDatabaseCount = NULL;
    pDatabaseCount = &databaseCount;

    record test0 = {databaseCount, "test0"};
    record test1 = {databaseCount, "test1"};

    addRecord(database, pDatabaseCount, test0);
    addRecord(database, pDatabaseCount, test1);

    printDatabase(database, databaseCount);

    editRecord(database, test1, "zmiana 2");

    printf("\n");
    printDatabase(database, databaseCount);
    
    return 0;
}