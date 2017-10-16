/*
 * Daniel Moraes dos Santos - 201602449
 * Pedro Ramos Krauze Diehl - 201611880
 */
#include <stdio.h>
#include <stdlib.h>

int binary_search(int *A, int len, int x){
	// int n = len;
	int ie = 0;
	int id = len -1;

	while (ie <= id) {
		int m = (ie + id) / 2;

		if(x < A[m]){
			id = m-1;
		}else if(x > A[m]){
			ie = m+1;
		}else{
			return m;
		}
	}
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
	int array[10] = {0,1,2,3,4,5,6,7,8,9};

	print_array(array, 10);

	if(binary_search(array, 10, 4) == -1){
		printf("Elemento nao encontrado\n");
	}else{
		printf("O elemento \'4\'esta na posicao %i\n",binary_search(array, 10, 4) );
	}

	print_array(array, 10);

	return 0;
}
