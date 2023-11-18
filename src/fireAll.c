#include "../include/headerA3.h"

void fireAll(a3Emp** headLL) {          //fires all employees
    struct employee* temp = NULL;

    while (*headLL != NULL) {
        temp = *headLL;
        *headLL = temp->nextEmployee;       //move the head of the LL

       
        for (int i = 0; i < temp->numDependents; i++) { //loop through each dependant node of the LL
            free(temp->dependents[i]);      //free the memory allocated for dependants
        }
        free(temp->dependents);

        free(temp);     //free the memory allocated for the current employees
    }
}
