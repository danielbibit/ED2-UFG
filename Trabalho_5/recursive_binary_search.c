/*
 * Daniel Moraes dos Santos - 201602449
 * Pedro Ramos Krauze Diehl - 201611880
 */
#include <stdio.h>
#include <stdlib.h>

int recursive_binary_search(int *A, int x, int start, int end){
    int m = (end - start) / 2;
    printf("M = %i  ", m);

    if(A[m] != x && start == end){
        printf("first if ");
        return -1;
    }else if(x > A[m]){
        printf("second if ");
        return recursive_binary_search(A, x, m+1, end);
    }else if(x < A[m]){
        printf("third if ");
        return recursive_binary_search(A, x, start, m-1);
    }else{
        printf("fourth if ");
        return m;
    }
}

int binary_search(int *A, int len, int x){
	return recursive_binary_search(A, x, 0, len-1);
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
