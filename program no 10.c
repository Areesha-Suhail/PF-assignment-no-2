
#include <stdio.h>
#include <string.h>

int main()
 {
    char username[20], password[20];

    
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) 
    {
        printf("Login Successful\n");
    } else {
        printf("Login Failed\n");
    }

    return 0;
}