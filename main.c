#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "User_Manager.h"
#include "helper.h"

//GLOBALS VARIABLES.
char username[50];
char command[100];
char groupname[50];

int main() {
    char choice;

    do {
        displayMenu();
        scanf(" %c", &choice);
        while (getchar() != '\n');

        switch (choice) {
            //========== Manage System for Users =============
            case 'a':
                do{
                    DisplayManageUser();
                    scanf(" %c", &choice);
                    while (getchar() != '\n');

                    switch (choice){
                        //============= Add user to system ==============
                        case 'a':
                            printf("\nEnter username to add: ");
                            scanf("%s", username);
                            getchar();
                            addUser(username);
                            printf("\n-----------------------------------------------------------\n");
                            break;
                        //============= Delete user from system ============
                        case 'b':
                            printf("\n---------------- Menu Of Available Users: ----------------\n");
                            displayUsers();
                            printf("\n------------ End Of Menu Of Available Users. -------------\n");
                            printf("\nEnter username to delete: ");
                            scanf("%s", username);
                            getchar();
                            deleteUser(username);
                            printf("\n--------------- User deleted successfully. ---------------\n");
                            break;
                        case 'e':
                            printf("\n----------------- Exiting Manage users. ------------------\n");
                            break;
                        default:
                            printf("\n------------ Invalid choice. Please try again. -----------\n");
                    }
                } while (choice != 'e');
                break;
            //=========== Manage system for groups ==============
            case 'b':
                do {
                    DisplayManageGroup();
                    scanf(" %c", &choice);
                    while (getchar() != '\n');

                    switch (choice){
                        //=========== Add group to system ================
                        case 'a':
                            printf("\nEnter group name to add: ");
                            scanf("%s", groupname);
                            getchar();
                            addGroup(groupname);
                            printf("\n-----------------------------------------------------------\n");
                            break;
                        //=========== Delete group for system ===============
                        case 'b':
                            printf("\n ---------------------- Menu Of Available Groups: ------------------------\n");
                            displayGroups();
                            printf("\n ------------------ End Of Menu Of Available Groups. ---------------------\n");
                            printf("\nEnter group name to delete: ");
                            scanf("%s", groupname);
                            getchar();
                            deleteGroup(groupname);
                            printf("\n-----------------------------------------------------------\n");
                            break;
                        case 'e':
                            printf("\n----------------- Exiting Manage Groups. ------------------\n");
                            break;
                        default:
                            printf("\n------------ Invalid choice. Please try again. -----------\n");
                    }
                } while (choice != 'e');
                break;
            //============= change password for user ===================
            case 'c':
                printf("\nEnter username to change password: ");
                scanf("%s", username);
                getchar();
                changeAccountInfo(username);
                printf("\n-------- Account information changed successfully. -------\n");
                break;
            //============= Assign specific user to specific group ===================
            case 'd':
                printf("\n---------------- Menu Of Available Users: ----------------\n");
                displayUsers();
                printf("\n------------ End Of Menu Of Available Users. -------------\n");
                printf("\nEnter username to assign to group: ");
                scanf("%s", username);
                getchar();
                printf("\n ---------------------- Menu Of Available Groups: ------------------------\n");
                displayGroups();
                printf("\n ------------------ End Of Menu Of Available Groups. ---------------------\n");
                printf("\nEnter group name: ");
                scanf("%s", groupname);
                getchar();
                assignUserToGroup(username, groupname);
                printf("\n---------- User assigned to group successfully. ----------\n");
                break;
            //============ Finish and Ending Program =====================
            case 'q':
                printf("\n----------------- Exiting user manager. ------------------\n");
                break;
            default:
                printf("\n------------ Invalid choice. Please try again. -----------\n");
        }
    } while (choice != 'q');

    return 0;
}
