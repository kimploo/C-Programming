#include <stdio.h>

int main() {
    int var = 5;  // Declare an integer variable
    int *ptr;     // Declare a pointer to an integer

    ptr = &var;   // Store the address of var in ptr using the & operator

    printf("The value of var: %d\n", var);          // Print the value of var directly
    printf("The address of var: %p\n", (void*)&var);  // Print the address of var using the & operator

    printf("The value of ptr (address it holds): %p\n", (void*)ptr); // Print the address stored in ptr
    printf("The value pointed to by ptr: %d\n", *ptr); // Use the * operator to dereference ptr and print the value it points to

    *ptr = 10; // Change the value of var indirectly by dereferencing ptr and assigning a new value

    printf("The new value of var: %d\n", var); // Print the new value of var to show it was changed via ptr

    return 0;
}
