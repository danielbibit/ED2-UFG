/*
 * Daniel Moraes dos Santos - 201602449
 * Pedro Ramos Krauze Diehl - 201611880
 */
#include <stdio.h>

void bubble_sort(int *A, int n){
	int i, j;
	int flag;

	for(i = n-1; i > 0; i--){
		flag = 0;
		for(j = 0; j < i; j++){
			if(A[j] > A[j+1]){
				int buff = A[j];
				A[j] = A[j+1];
				A[j+1] = buff;

				flag = 1;
			}
		}

		if(flag == 0){
			return;
		}  
	}
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
	
	print_array(array, 10);

	bubble_sort(array, 10);

	print_array(array, 10);

	return 0;
}
