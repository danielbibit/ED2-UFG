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

int main(){
	int v[5] = {5, 3, 6, 1, 9};

	selection_sorting(v, 4);

	printf("%i\n", v[0]);
	printf("%i\n", v[1]);
	printf("%i\n", v[2]);
	printf("%i\n", v[3]);
	printf("%i\n", v[4]);

	return 0;
}
