#include <stdio.h>

void shell_sort(int *p, int len, int debug){
	int gap = 1;
	int i, j, value;

	while(gap < len)
		gap = gap * 3 + 1;

	while(gap >= 1){

	gap /= 3;

		for(i = gap; i < len; i++){
			value = p[i];
			j = i - gap;
			while(j >= 0 && value < p[j]){
				p[j + gap] = p[j];
				j -= gap;
			}
			p[j + gap] = value;
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

	shell_sort(v, 20, 0);

	print_array(v, 20);

	return 0;
}
