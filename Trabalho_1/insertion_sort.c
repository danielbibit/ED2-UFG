/*Alunos:
	Daniel Moraes dos Santos  201602449
	Pedro Ramos Krauze Diehl  xxxxxxxxx
*/
#include <stdio.h>

void insertion_sort(int *p, int len){
	int i = 0;

	for(i = 1; i < len; i++){
		int key = p[i];
		int j = i - 1;
		
		while(j >= 0  && p[j] > key){
			p[j + 1] = p[j];
			j -= 1;
		}

		p[j + 1] = key;
	}
}

int main(){
	int v[5] = {5, 7, 2, 8, 3};

	insertion_sort(v, 5);
	
	printf("%i\n", v[0]);
	printf("%i\n", v[1]);
	printf("%i\n", v[2]);
	printf("%i\n", v[3]);
	printf("%i\n", v[4]);

	return 0;
}