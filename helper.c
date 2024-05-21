#include "helper.h"
#include <stdio.h>
#include "Global.h"

//=================== DISPLAY MAIN MENU OF USER MANAGER PROGRAM =========================
void displayMenu() {
    printf("\nUser Manager Menu:\n");
    printf("a. Manage User\n");
    printf("b. Manage Group\n");
    printf("c. Change Account Info\n");
    printf("d. Assign User to Group\n");
    printf("q. Exit\n");
    printf("Enter your choice: ");
}

//=================== DISPLAY MENU OF MANAGE ONLY USERS ================================
void DisplayManageUser(){
    printf("\nManage User Menu:\n");
    printf("a. Add User\n");
    printf("b. Delete User\n");
    printf("e. Exit\n");
    printf("Enter Your Choice: ");
}

//=================== DISPLAY MENU OF MANAGE ONLY GROUPS ================================
void DisplayManageGroup(){
    printf("\nManage Group Menu:\n");
    printf("a. Add Group\n");
    printf("b. Delete Group\n");
    printf("e. Exit\n");
    printf("Enter Your Choice: ");
}

//================= DISPLAY USERS IN SYSTEM BEFORE MAKE OPERATION ========================
void displayUsers() {
    system("cut -d: -f1 /etc/passwd > users.txt");
    FILE *file = fopen("users.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    char username[256];
    int count = 1;
    while (fscanf(file, "%255s", username) == 1) {
        printf("%d- %-20s", count++, username);
        if (count % 4 == 1) {
            printf("\n");
        }
    }
    fclose(file);
}

//================= DISPLAY GROUPS IN SYSTEM BEFORE MAKE OPERATION ========================
void displayGroups() {
    system("cut -d: -f1 /etc/group > groups.txt");
    FILE *file = fopen("groups.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    char groupname[256];
    int count = 1;
    while (fscanf(file, "%255s", groupname) == 1) {
        printf("%d- %-20s", count++, groupname);
        if (count % 4 == 1) {
            printf("\n");
        }
    }
    fclose(file);
}

