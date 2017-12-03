#include <stdio.h>
#include <stdlib.h>

#define MAX_KEYS (5)

typedef struct node{
	int is_leaf;
	int n_keys;
	int keys[MAX_KEYS];
	struct node *children[MAX_KEYS + 1];
} node_t;

node_t *empity_node(){
	node_t *new_node;
	new_node = malloc(sizeof(node_t));
	new_node->n_keys = 0;
}

void insert_btree(node_t *root, int key){	
	if(root == NULL){
		node_t *new_node;
		new_node = malloc(sizeof(node_t));

		new_node->n_keys = 0;
		new_node->keys[new_node->n_keys] = key;
		new_node->n_keys += 1;
		new_node->is_leaf = 1;
	}else{	
		if(root->n_keys < MAX_KEYS){
		
		}
	}


	
}

int main(){
	node_t *tree;
	insert_btree(tree, 10);
}
