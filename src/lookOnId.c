#include "../include/headerA3.h"

int lookOnId (struct employee * headLL, int whichEmpId){
    int count=0;
    struct employee * current = headLL;
    while(current!=NULL){
        count++;
        if(whichEmpId == current-> empId){      //checks if the current node has the same Id as input Id
            return count;
        }
        current = current -> nextEmployee;      //traverses through the employee nodes 
    }
    return -1;
}
