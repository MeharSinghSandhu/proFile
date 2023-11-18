#include "../include/headerA3.h"


int main(){
    int choice=0;
    int count;                          //DECLARATIONS
    int whichOne;
    int whichEmpId;
    char whichName[50];
    a3Emp * headLL = NULL;

    loadEmpData(&headLL,"proFile.txt");

    
while(choice != 10){
    printf("\n\n************        MENU        ************\n");           //MENU
    printf("1. Add a new employee\n");
    printf("2. Print data of all employees\n");
    printf("3. Print data of the nth employee\n");
    printf("4. Search for employee based on empId\n");
    printf("5. Search for employee based on full name\n");
    printf("6. Count the total number of employees\n");
    printf("7. Sort the employees based on their empId\n");
    printf("8. Remove the nth employee in the current LL\n");
    printf("9. Remove all employees in the current LL\n");
    printf("10. Exit\n");
    printf("Enter your option: ");
    scanf("%d", &choice);
    

    if (choice < 1 || choice > 10){
        printf("That is an INVALID CHOICE !!\n Enter again with integers between 1 and 10");
    }

    else if (choice == 1){             //add a new employee         
        recruitEmployee (&headLL);
    }


    else if (choice == 2){             //print employee data
        printAll (headLL);
    }

    else if (choice == 3){             //print data for the nth employee
        printf("Enter a position : ");
        scanf("%d", &whichOne);
        printOne(headLL, whichOne);       
    }

    else if (choice == 4){             //search for employee basedd on employee ID
        printf("Enter the employee ID: ");
        scanf("%d", &whichEmpId);
        count = lookOnId(headLL,whichEmpId);
        printOne(headLL,count);
        if (count == -1){
            printf("There is such id in the list");
        }
        
    }

    else if (choice == 5){             //search for employee based on full name
        printf("Enter the full name: ");
        scanf(" %[^\n]%*c",whichName);
        count = lookOnFullName(headLL,whichName);
        printOne(headLL,count);  
        if (count == -1){
            printf("There is no such name");
        }
    }

    else if (choice == 6){             //count for total number of employees
        count = countEmployees(headLL);
        printf("Total number of employees: %d\n",count);      
    }

    else if (choice == 7){             //sort employees based on their empId
        sortEmployeesId(headLL);
        printf("Sorted by Employee Id \n");
    }

    else if (choice == 8){             //remmove the nth employee
        count = countEmployees(headLL);
        printf("Currently there are %d employees\n",count);
        printf("Which employee do you wish to fire, enter a value between 1 and %d: ",count);
        scanf("%d",&whichOne);
        fireOne(&headLL,whichOne);
    }

    else if (choice == 9){             //remove all the employees 
        fireAll(&headLL);
        printf("All employees removed.");
    }

    else if (choice == 10){            //EXIT
        printf("******   THE END   ******\n");
    }
}
    return 0;
}