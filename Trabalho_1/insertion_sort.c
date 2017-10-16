/*Alunos:
	Daniel Moraes dos Santos  201602449
	Pedro Ramos Krauze Diehl  201611880
*/
#include <stdio.h>
void print_array(int *p, int len);

void insertion_sort(int *p, int len){
	int i = 0;

	for(i = 1; i < len; i++){
		int key = p[i];
		int j = i - 1;

		while(j >= 0  && p[j] > key){
			printf("i : %i, j : %i key: %i /",i,j,key);
			print_array(p,20);
			printf("\n");
			p[j + 1] = p[j];
			j -= 1;
			printf("                       /");
			print_array(p,20);
			printf("\n ------------------------------------------------------------------------------\n");
		}

		p[j + 1] = key;
	}
}

void print_array(int *p, int len){
	int i = 0;
	printf("{ ");
	for(i = 0; i < len; i++){
		printf("%i,", p[i]);
	}
	printf(" }");
}

int main(){
	int v[20] = {10, 15, 0, 6, 13, 11, 2, 8, 7, 4, 14, 18, 3, 17, 19, 12, 9, 1, 5, 16};

	print_array(v, 20);
	printf("\n");

	insertion_sort(v, 20);

	print_array(v, 20);

	printf("\n\n%i\n", v[19]);

	return 0;
}
