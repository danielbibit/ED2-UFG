/*Alunos:
	Daniel Moraes dos Santos  201602449
	Pedro Ramos Krauze Diehl  201611880
*/

#include <stdio.h>

void print_array(int *p,int len);
int particao(int *A, int left, int right);

void quick_sort(int *A, int left, int right){
  if (left < right) {
    int p = 0;
    p = particao(A, left, right);
    quick_sort(A,left,p);
    quick_sort(A,p+1,right);
  }
}

int particao(int *A, int left, int right) {
  int x = A[left];
  int i = left - 1;
  int j = right + 1;

  while (1) {

    do {
      i++;
    } while(A[i] < x);

    do {
      j--;
    } while(A[j] > x);

    if (i >= j) {
      return j;
    }

    int buf = A[i];
    A[i] = A[j];
    A[j] = buf;

    print_array(A,20);

  }
}

void print_array(int *p, int len){
	int i = 0;
	printf("{");
	for(i = 0; i < len; i++){
		printf("%i,", p[i]);
	}
	printf("}\n");
}

int main(){

    int v[20] = {10, 15, 0, 6, 13, 11, 2, 8, 7, 4, 14, 18, 3, 17, 19, 12, 9, 1, 5, 16};

    quick_sort(v, 0,19);

	print_array(v, 20);

	return 0;
}
