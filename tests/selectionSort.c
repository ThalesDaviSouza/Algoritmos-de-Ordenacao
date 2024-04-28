#include "../lib/minunit.h"
#include "../src/sorting.c"

#include <stdlib.h>

int arraysAreEqual(int* arr1, int* arr2, int length){
    int isEqual = TRUE;

    for(int i = 0; i < length; i++){
        if(arr1[i] != arr2[i]){
            isEqual = FALSE;
        }
    }    

    return isEqual;
}

MU_TEST(arrayBase){
    int vect[] = { 8, 5, 3, 2, 1 };
    int expectedSortedVect[] = { 1, 2, 3, 5, 8 };
    int vectLength = 5;

    SelectionSort(vect, vectLength);

    int result = arraysAreEqual(vect, expectedSortedVect, vectLength);
    
    mu_assert(result == TRUE, "In array base test, the expected result is different from the code's output.");
}

MU_TEST(arrayBase2){
    int vect[] = { 8, 12, 25, 29, 32, 17, 40 };
    int expectedSortedVect[] = { 8, 12, 17, 25, 29, 32, 40 };
    int vectLength = 7;

    SelectionSort(vect, vectLength);

    int result = arraysAreEqual(vect, expectedSortedVect, vectLength);

    mu_assert(result == TRUE, "In array base test 2, the expected result is different from the code's output.");
}

MU_TEST(arrayBase3){
    int vect[] = { 29, 72, 98, 13, 87, 66, 52, 51, 36 };
    int expectedSortedVect[] = { 13, 29, 36, 51, 52, 66, 72, 87, 98 };
    int vectLength = 9;

    SelectionSort(vect, vectLength);

    int result = arraysAreEqual(vect, expectedSortedVect, vectLength);

    mu_assert(result == TRUE, "In array base test 2, the expected result is different from the code's output.");
}

MU_TEST(arrayBase4){
    int vect[] = { 4, 3, 2, 10, 12, 1, 5, 6, -10, 27 };
    int expectedSortedVect[] = { -10, 1, 2, 3, 4, 5, 6, 10, 12, 27 };
    int vectLength = 10;

    SelectionSort(vect, vectLength);

    int result = arraysAreEqual(vect, expectedSortedVect, vectLength);

    mu_assert(result == TRUE, "In array base test 2, the expected result is different from the code's output.");
}

MU_TEST_SUITE(test_suite){
    MU_RUN_TEST(arrayBase);
    MU_RUN_TEST(arrayBase2);
    MU_RUN_TEST(arrayBase3);
    MU_RUN_TEST(arrayBase4);
}

int main(int argc, char** argv){
    MU_RUN_SUITE(test_suite);
    MU_REPORT();

    return MU_EXIT_CODE;
}
