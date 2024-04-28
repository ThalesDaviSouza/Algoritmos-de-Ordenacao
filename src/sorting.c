#include "../include/sorting.h"
#include <stdio.h>
#include <stdbool.h>

void PrintVect(int* vect, int length){
    for(int i = 0; i < length; i++){
        printf("%d ", vect[i]);
    }
    printf("\n");
}

void SelectionSort(int* vect, int length){
    int smallest;
    int smallestPos;

    for(int i = 0; i <= length-2; i++){
        smallest = vect[i];
        
        for(int j = i; j < length; j++){
            if(vect[j] < smallest){
                smallest = vect[j];
                smallestPos = j;
            }
        }

        if(smallest != vect[i]){
            int aux;
            aux = vect[i];
            vect[i] = smallest;
            vect[smallestPos] = aux;
        }
    }
}

int arrayIsSorted(int* vect, int length){
    int isSorted = true;

    for(int i = 0; i <= length-2; i++){
        if(vect[i] > vect[i+1]){
            isSorted = false;
            break;
        }
    }
    
    return isSorted;
}

void BubbleSort(int* vect, int length){
    int aux;

    do{
        for(int i = 0; i <= length-2; i++){
            if(vect[i] > vect[i+1]){
                aux = vect[i];
                vect[i] = vect[i+1];
                vect[i+1] = aux;
            }
        }
    }while(!arrayIsSorted(vect, length));

}

void InsertionSort(int* vect, int length){
    int posI;
    int posJ;
    int aux;

    for(int i = 0; i <= length -2; i++){
        if(vect[i] > vect[i+1]){
            aux = vect[i];
            vect[i] = vect[i+1];
            vect[i+1] = aux;
            
            posI = i-1;
            posJ = i;
            
            if(posI >= 0){
                while(vect[posI] > vect[posJ]){
                    aux = vect[posI];
                    vect[posI] = vect[posJ];
                    vect[posJ] = aux;

                    posI--;
                    posJ--;

                    if(posI < 0 || posJ < 0){
                        break;
                    }
                    
                }
            }
        }

    }

}
