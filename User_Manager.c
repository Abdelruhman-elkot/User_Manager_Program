#include "User_Manager.h"
#include <stdio.h>
#include "Global.h"

//================== TO ADD USER IN SYSTEM =========================
void addUser(char *username) {
    sprintf(command, "sudo adduser %s", username);
    system(command);
}

//================== TO DELETE USER FROM SYSTEM ======================
void deleteUser(char *username) {
    sprintf(command, "sudo userdel %s", username);
    system(command);
}

//================== TO ADD GROUP TO SYSTEM =========================
void addGroup(char *groupname) {
    sprintf(command, "sudo addgroup %s", groupname);
    system(command);
}

//================== TO DELETE GROUP FROM SYSTEM ======================
void deleteGroup(char *groupname) {
    sprintf(command, "sudo delgroup %s", groupname);
    system(command);
}

//================== TO UPDATE USER PASSWORD =========================
void changeAccountInfo(char *username) {
    sprintf(command, "sudo passwd %s", username);
    system(command);
}

//================ TO ADD SPECIFIC USER TO SPECIFIC GROUP ===================
void assignUserToGroup(char *username, char *groupname) {
    sprintf(command, "sudo usermod -a -G %s %s", groupname, username);
    system(command);
}
