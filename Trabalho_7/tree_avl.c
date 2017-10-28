#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int key;
    int value;
    struct node *parent;
    struct node *left_children;
    struct node *right_children;
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
        root->right_children = new_node;
    }else{
        root->left_children = new_node;
    }
}

int tree_height(node_t *root){

}

int is_alv(node_t *root){

}

int main(){
    node_t *root = NULL;
    insert_tree(root, 2, 4);
    insert_tree(root, 5, 8);
    insert_tree(root, 3, 2);
    return 0;
}