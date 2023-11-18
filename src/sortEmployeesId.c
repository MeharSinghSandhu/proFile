#include "../include/headerA3.h"

void sortEmployeesId (struct employee * headLL){
    
    struct employee* current = headLL;      //pointer to the current employee
    struct employee* next = NULL;           //pointer to the next employee
    struct employee* min  = NULL;           
    struct employee* currNext, *minNext;

    if(current == NULL){
        printf("\nThe List is empty\n");
        return;
    }
        
    while(current != NULL){
        min = current;                      //assume current employee as minimum             
        
        next = current -> nextEmployee;
        while(next != NULL){
            if(min -> empId > next -> empId)
                min = next;             //update minimum if a smaller id is found
            next = next -> nextEmployee;
        }
        
        if(min != current){             //Swap the current employee with the minimum employee

            currNext = current -> nextEmployee;
            minNext = min -> nextEmployee;

                                            // Swap the employees
            struct employee temp;
            temp = *current;
            *current = *min;
            *min = temp;

            current -> nextEmployee = currNext;
            min -> nextEmployee = minNext;
        }    
                
        current = current -> nextEmployee;      //traverse through the employee nodes
    }

    printAll(headLL);   

    return;
}
