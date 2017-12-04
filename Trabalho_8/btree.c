#include <stdio.h>
#include <stdlib.h>

#define MAX_KEYS (4)

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
	new_node->is_leaf = 0;
	return new_node;
}

int search_tree(node_t *node, int key){
	int i = 0;
	while(i < node->n_keys && key > node->keys[i])
		i++;

	if(node->keys[i] == key)
		return 1;

	if(node->is_leaf == 1)
		return 0;
	
	return search_tree(node->children[i], key);
}

void split_child(node_t *node, int i, node_t *y){

}

void insert_non_full(node_t *node, int key){
	int i = node->n_keys-1;

	if(node->is_leaf){
		while(i >= 0 && node->keys[i] > key){
			node->keys[i+1] = node->keys[i];
			i -= 1;
		}

		node->keys[i+1] = key;
		node->n_keys += 1;
	}else{
		
	}
}

void insert_btree(node_t *root, int key){	
	if(root == NULL){
		node_t *new_node;
		new_node = empity_node();

		new_node->keys[new_node->n_keys] = key;
		new_node->n_keys += 1;
		new_node->is_leaf = 1;
	}else{	
		if(root->n_keys == MAX_KEYS){
			node_t *new_node;
			new_node = empity_node();

			new_node->children[0] = root;

			split_child(new_node, 0, root);
			int i = 0;
			if(new_node->keys[0] < key)
				i++;
			
  			insert_non_full(new_node->children[i], key);

			root = new_node;
		}else{
			insert_non_full(root, key);
		}
	}


	
}

int main(){
	node_t *tree;
	insert_btree(tree, 10);
	return 0;
}
