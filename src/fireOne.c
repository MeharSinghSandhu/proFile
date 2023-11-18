#include "../include/headerA3.h"

void fireOne (a3Emp ** headLL, int whichOne){
    a3Emp *curr = *headLL;      //points to the head of the LL
    a3Emp *prev = *headLL;
    if(*headLL == NULL){        //shows this message if the list is empty already 
        printf("List is empty !! ");
    }
    else if(whichOne == 1){
        *headLL = curr->nextEmployee;       //head of the linked list is updated to the next node
        for(int i=0; i<curr->numDependents; i++){           //runs a loop for freeing dependants nodes 
            free(curr->dependents[i]);
        }
        free(curr->dependents);
        free(curr);                 //frees the current node
        curr = NULL ;               //to avoid dangling pointers 
    }
    else{
        while(whichOne!=1){     
            prev = curr;
            curr = curr -> nextEmployee ;   // current node is updated to the next employee 
            whichOne -- ;       
        }
        prev->nextEmployee = curr->nextEmployee;
        for(int i=0; i<curr->numDependents; i++){
            free(curr -> dependents[i]);        //frees the nodes for dependants
        }
        free(curr->dependents);        
        curr=NULL;
    }

}
