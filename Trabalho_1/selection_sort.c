/*Alunos:
	Daniel Moraes dos Santos  201602449
	Pedro Ramos Krauze Diehl  201611880
*/
#include <stdio.h>

void selection_sorting(int *p, int len){
	int i = 0;
	int j = 0;

	for(i = 0; i < len; i++){
		int min_index = i;

		for(j = i+1; j < len; j++)
			if(p[j] < p[min_index])
				min_index = j;

		if(min_index != i){
			int buff = p[i];
			p[i] = p[min_index];
			p[min_index] = buff;
		}
	}
}

void print_array(int *p, int len){
	int i = 0;
	for(i = 0; i < len; i++)
		printf("%i,", p[i]);
}

int main(){
	int v[20] = {10, 15, 0, 6, 13, 11, 2, 8, 7, 4, 14, 18, 3, 17, 19, 12, 9, 1, 5, 16};

	selection_sorting(v, 20);

	print_array(v, 20);

	printf("\n\n%i\n", v[0]);

	return 0;
}
