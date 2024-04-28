#include "./include/sorting.h"
#include <stdio.h>


int main(int argc, char** argv){
    int vect[] = { 8, 5, 3, 2, 1 };
    int vectLength = 5;

    printf("Selection Sort\n");
    printf("Unsorted array:\n");
    PrintVect(vect, vectLength);

    SelectionSort(vect, vectLength);

    printf("Sorted array:\n");
    PrintVect(vect, vectLength);

    return 0;
}