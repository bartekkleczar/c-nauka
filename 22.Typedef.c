#include <stdio.h>

typedef char user[25];

typedef struct{
    char name[25];
    char password[25];
    int id;
} User;

int main22(){

    user user0= "Bartek";

    User user1 = {"Bartek", "Password", 123};
    User user2 = {"klenczi", "password", 321};

    printf("\n%s", user1.name);
    printf("\n%s", user1.password);
    printf("\n%d", user1.id);
    printf("\n");
    printf("\n%s", user2.name);
    printf("\n%s", user2.password);
    printf("\n%d", user2.id);

    return 0;
}