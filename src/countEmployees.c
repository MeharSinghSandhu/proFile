#include "../include/headerA3.h"

int countEmployees (a3Emp * headLL){
    struct employee * current = headLL;
    int count=0;
    
    while (current != NULL) {
        current = current->nextEmployee;        //current node is traversed to the next node 
        count ++;           //increments count everytime you traverse through a node
        
    }
    return count;
}
