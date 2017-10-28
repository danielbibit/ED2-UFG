#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int key;
    int value;
    struct node *parent;
    struct node *left_child;
    struct node *right_child;
} node_t;

void insert_tree(node_t *root, int key, int value){
    if(root == NULL){
        root = malloc(sizeof(node_t));
        root->key = key;
        root->value = value;
        return;
    }
    
    node_t *new_node;
    new_node = malloc(sizeof(node_t));
    new_node->key = key;
    new_node->value = value;
    
    if(key > root->key){
        root->right_child = new_node;
    }else{
        root->left_child = new_node;
    }
}

// TODO Define the fucntion max()
int tree_height(node_t *node){
    if(node == NULL)
        return -1;
    else
        return 1 + max(tree_height(node->left_child), tree_height(node->right_child));
}

int balance(node_t *node){
    return tree_height(node->left_child) - tree_height(node->right_child);
}

int main(){
    node_t *root = NULL;

    insert_tree(root, 2, 4);
    insert_tree(root, 5, 8);
    insert_tree(root, 3, 2);
    
    return 0;
}