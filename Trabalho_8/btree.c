#include <stdio.h>
#include <stdlib.h>

#define MAX_KEYS (100)

typedef struct node{
	int is_leaf;
	int n_keys;
	int keys[MAX_KEYS];
	struct node *children[MAX_KEYS+1];
} node_t;


int main(){

}
