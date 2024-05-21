#ifndef USER_MANAGER_H_INCLUDED
#define USER_MANAGER_H_INCLUDED

void addUser(char *username);
void deleteUser(char *username);
void addGroup(char *groupname);
void deleteGroup(char *groupname);
void changeAccountInfo(char *username);
void assignUserToGroup(char *username, char *groupname);

#endif // USER_MANAGER_H_INCLUDED
