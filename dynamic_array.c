// importing libraries 

#include<stdio.h>
#include<stdlib.h>

// step 1: create a pointer to hold the array with: 
// an integer variable for capacity and one integer variable for size 

int main(){
    int size = 0;
    int capacity = 2;

    int *arr = malloc(sizeof(int) * capacity);

    // checking if we indeed did get the memory 
    if (arr == NULL){
        printf("Fatal error. We did not get memory from he computer.\n");
        return 1; // helps exit the program with an error status 
    }

    printf("Successful in getting memory from the computer!");
}


// step 2: ask the os for a tiny block of memory using malloc 



// step 3: start an input loop where the user continuously types numbers 



// step 4: before adding the user_input number to the dynamic_array if size == capacity 



// step 5: reallocation in memory based on the new size of the dynamic array 



// step 6: cleanup 