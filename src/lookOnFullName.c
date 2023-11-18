#include "../include/headerA3.h"

int lookOnFullName(struct employee* headLL, char whichName[100]) {
    char Full_name[200];
    int count = 0;
    struct employee* current = headLL;
    while (current != NULL) {
        count++;
        strcpy(Full_name, current->fname);      //copies the first name to FULLNAME
        strcat(Full_name, " ");                 
        strcat(Full_name, current->lname);      //copies the last name to FULLNAME
        if (strcmp(Full_name, whichName) == 0) {        //compares the full name to input name and checks if its same
            return count;
        }
        current = current->nextEmployee;        //traverses through employee nodes
    }
    
    return -1;
}
