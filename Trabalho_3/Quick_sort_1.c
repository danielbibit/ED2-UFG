/*Alunos:
	Daniel Moraes dos Santos  201602449
	Pedro Ramos Krauze Diehl  201611880
*/

#include <stdio.h>

void print_array(int *p,int len);

void particao(int esq, int dir, int *i, int *j, int *A) {

  int x = 0, w = 0;

  *i = esq;
  *j = dir;

  x = A[(*i + *j)/2];

  do {
    while(x > A[*i]) (*i)++;
    while(x < A[*j]) (*j)--;

    if (*i <= *j) {
      print_array(A,20);
      w = A[*i];
      A[*i] = A[*j];
      A[*j] = w;
      (*i)++;
      (*j)--;
    }

    //print_array(A, 20);

  } while(*i <= *j);
}

void ordena(int esq, int dir, int *A){

  int i = 0;
  int j = 0;

  particao(esq, dir, &i, &j, A);

  if(esq < j) ordena(esq, j, A);
  if(dir > i) ordena(i, dir, A);

}
void quick_sort(int *A, int n) {
  ordena(0, n-1, A);
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

    quick_sort(v, 20);

	print_array(v, 20);

	return 0;
}
