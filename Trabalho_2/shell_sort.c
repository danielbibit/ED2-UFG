/*Alunos:
	Daniel Moraes dos Santos  201602449
	Pedro Ramos Krauze Diehl  201611880
*/

#include <stdio.h>

int v[20] = {10, 15, 0, 6, 13, 11, 2, 8, 7, 4, 14, 18, 3, 17, 19, 12, 9, 1, 5, 16};

void print_array(int *p, int len){
	int i = 0;
	printf("{");
	for(i = 0; i < len; i++){
		printf("%i,", p[i]);
	}
	printf("}\n");
}
void shell_sort(int *p, int len, int debug){
	int gap = 1;
	int i, j, value;

	while(gap < len)
		gap = gap * 3 + 1;

	while(gap >= 1){
	gap /= 3;
	printf("Gap = %i\n",gap);
		for(i = gap; i < len; i++){
			value = p[i];
			j = i - gap;
			while(j >= 0 && value < p[j]){
				p[j + gap] = p[j];
				j -= gap;
			}
			p[j + gap] = value;
			print_array(v,20);
		}
	}
}

int main(){

	shell_sort(v, 20, 0);

	print_array(v, 20);

	return 0;
}
