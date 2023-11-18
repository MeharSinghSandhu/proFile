#include "../include/headerA3.h"
#include <string.h>

void recruitEmployee (struct employee ** headLL){
    struct employee * node = malloc( sizeof(struct employee));      //allocate memory for new employee
    printf("Enter the first name of the Employee : ");
    scanf("%s",node->fname);
    printf("Enter the last name of the Employee : ");
    scanf("%s",node->lname);
    
    char choice = 'y';
    int count= 1;
    char d_name[MAX_LENGTH];
    node->dependents = malloc(sizeof(char *));      //allocate memory for dependant names
    
    while(choice=='y' || choice=='Y'){              //loop to enter dependant names
        printf("Enter name of dependent #%d: ",count);
        scanf("%s",d_name);
        // Add dependent to the list
        node->dependents = realloc(node->dependents,  sizeof(char*) * count );      //reallocate memory for new dependant name
        node->dependents[count -1] = malloc(sizeof(strlen(d_name) + 1));
        strcpy(node->dependents[count - 1], d_name);
        
        printf("Do you have any more dependents? (y/n) : ");
        scanf(" %c",&choice);
     
        count++;
    }
    
    // Generate employee ID
    int ascii_sum = 0;
    for(int i=0; node->fname[i] != '\0'; i++){          //Calculate ASCII sum
        ascii_sum += node->fname[i];
    }
    int empId = ascii_sum + strlen(node->lname);
    
    // Check if empId already exists in the linked list
    struct employee * current = *headLL;
    while(current != NULL){
        if(current->empId == empId){        //if empid already exists , get a new one
            empId += rand() % 999 + 1;  // Add random number between 1 and 999
            current = *headLL;  // Restart the loop to check the updated empId
        }
        else{
            current = current->nextEmployee;            //traverse through the employee nodes
        }
    }
    
    node->empId = empId;
    node ->numDependents = count - 1;       // set the number of dependants
    node->nextEmployee = NULL;
    
    // Add the new employee to the end of the linked list
    if(*headLL == NULL){
        *headLL = node;         // if LL is empty , set the new head node
    }
    else{
        struct employee * current = *headLL;
        while(current->nextEmployee!= NULL){        //Traverse to the end of the list 
            current = current->nextEmployee;
        }
        current->nextEmployee = node;       //set the next employee pointer to the new node
    }
    
    printf("You have %d dependents.\n", node->numDependents);
    printf("Your computer-generated empId is %d\n", node->empId);
    
}
