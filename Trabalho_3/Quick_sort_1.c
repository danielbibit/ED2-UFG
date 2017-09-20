/*Alunos:
	Daniel Moraes dos Santos  201602449
	Pedro Ramos Krauze Diehl  201611880
*/

#include <stdio.h>

int v[20] = {10, 15, 0, 6, 13, 11, 2, 8, 7, 4, 14, 18, 3, 17, 19, 12, 9, 1, 5, 16};

void particao(int *i, int *j, int left, int right){

  int x, w;

  *i = left;
  *j = right;

  x = v[(*i + *j)/2];

  do {

    while (x > v[*i]) { (*i)++;}
    while (x < v[*j]) { (*j)--;}

    if (*i <= *j) {
      w = v[*i];
      v[*i] = v[*j];
      v[*i] = w;
    }

  } while(*i <= *j);

}

void ordena(int left, int right){
  printf("Fudeu 1");
  int i = left, j= right;
  particao(&i, &j,left,right);
  if(left < j)
    ordena(left, j);
  if(right > i)
    ordena(i,right);
}

void quick_sort(int len){
  ordena(0, len);
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
  printf("Fudeu");

	quick_sort(20);

	print_array(v, 20);

	return 0;
}
