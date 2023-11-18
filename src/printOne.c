#include "../include/headerA3.h"

void printOne (struct employee * headLL, int whichOne){
    int count=1;
    struct employee * current = headLL;
    while (current != NULL) {
        if(count == whichOne){             //Print details
            
            printf("Employee # %d:\n", count);
            printf("Employee id: %d\n", current->empId);
            printf("First name: %s\n", current->fname);
            printf("Last name: %s\n", current->lname);
            printf("Dependents [%d]: ", current->numDependents);
            for (int i = 0; i < current->numDependents; i++) {      //loop to print dependants
                printf("%s", current->dependents[i]);
                if (i < current->numDependents - 1) {           
                    printf(", ");
                }
            }
        
        }
        current = current->nextEmployee;            //traverse through the employee nodes
        count++;                                    //increment count
    }
       
}
