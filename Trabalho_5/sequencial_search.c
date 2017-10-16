/*
 * Daniel Moraes dos Santos - 201602449
 * Pedro Ramos Krauze Diehl - 201611880
 */

#include <stdio.h>
#include <stdlib.h>

int sequencial_search(int *A, int x, int len){
        int i = 0;

        for(i; i < len; i++){
            if(A[i] == x){
                printf("O elemento esta na posicao %i\n",i );
                return i;
            }
    }
        printf("O elemento nao foi encontrado\n");
        return -1;
}

void print_array(int *A, int n){
	int i;

	for(i = 0; i < n; i++){
		printf("%i ", A[i]);
	}

	printf("\n");
}

int main(){
    int array[10] = {1, 8, 6, 3, 9, 7, 1, 2, 5, 7};

    sequencial_search(array, 8, 10);

    return 0;
}
