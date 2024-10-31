#include <stdio.h>
#include <string.h>

int main() {

    char username[20];
    char password[20];

    printf("Enter Username: ");
    scanf("%19s", username);
    printf("Enter Password: ");
    scanf("%19s", password);

    if (strcmp(username, "admin")==0 && strcmp(password,"1234")==0) {
        printf("Login Successful\n");
    } else {
        printf("Login Failed\n");
    }
    return 0;

}