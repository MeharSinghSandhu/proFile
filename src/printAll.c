#include "../include/headerA3.h"

void printAll(struct employee * headLL) {
    int count = 0;
    struct employee * current = headLL;
    while (current != NULL) {                       //prints details
        count++;                                //increments count
        printf("Employee # %d:\n", count);
        printf("Employee id: %d\n", current->empId);
        printf("First name: %s\n", current->fname);
        printf("Last name: %s\n", current->lname);
        printf("Dependents [%d]: ", current->numDependents);
        for (int i = 0; i < current->numDependents; i++) {  //loop for printing dependants
            printf("%s", current->dependents[i]);
            if (i < current->numDependents - 1) {
                printf(", ");
            }
        }
        printf("\n");
        current = current->nextEmployee;        //traverses through employee nodes
    }
    printf("Currently, there are %d employees\n", count);
}
