/*Alunos:
	Daniel Moraes dos Santos  201602449
	Pedro Ramos Krauze Diehl  201611880
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct node {
    char val[100];
    struct node *next;
} node_t;

void insert_list(node_t **head, char *value){
    node_t *new_node;
    new_node = malloc(sizeof(node_t));
    
    strcpy(new_node->val, value);
    // new_node->val = value;
    new_node->next = *head;
    *head = new_node;
}

int search_list(node_t *head, char *value){
    node_t *current_node = head;
    
    while(current_node != NULL){
        if(strcmp(value, current_node->val) == 0){
            return 1;
        }

        current_node = current_node->next;
    }

    return 0;
}

void print_list(node_t *head){
    node_t *current_node = head;

    while(current_node != NULL){
        printf("\n%s", current_node->val);
        current_node = current_node->next;
    }
}

int size_list(node_t *head){
    node_t *current_node = head;
    int size = 0;

    while(current_node != NULL){
        size += 1;
        current_node = current_node->next;
    }

    return size;
}

int hash(char *ptr, int len, int m){
    int string_value = 0;
    int i;

    for(i = 0; i < len; i++){
        string_value += ptr[i];
    }
    
    return string_value % m;
}

void insert_hash_table(node_t **hash_table, char *element, int m){
    int h = hash(element, strlen(element), m);
    insert_list(&hash_table[h], element);
}

int search_hash_table(node_t **hash_table, char *element, int size){
    int h = hash(element, strlen(element), size);
    return search_list(hash_table[h], element);
}

int main(){
    clock_t start_t, end_t, total_t;
    
    node_t *hash_table[31];
    
    int number_of_strings;

    int i;
    char buffer[100];
    
    int m = 31; //array size for the hash table

    for(i = 0; i < m; i++)
        hash_table[i] = NULL;
    
    scanf("%i", &number_of_strings); //First line of test file must contain number of tests !
    fgets(buffer, 5, stdin); //Scanf leave a \n on the stdin buffer, remove it.

    start_t = clock();
    for(i = 0; i < number_of_strings; i++){  
        scanf("%s", &buffer);
        
        // int h = hash(buffer, strlen(buffer), m);
        // insert_list(&hash_table[h], buffer);
        insert_hash_table(hash_table, buffer, m);
    }
    end_t = clock();
    total_t = (double)end_t - start_t;
    printf("total insertion time: %d ", total_t);

    start_t = clock();
    search_hash_table(hash_table, "patient", m);
    end_t = clock();
    total_t = (double)end_t - start_t;
    printf("Total search time: %d\n", total_t);

    return 0;
}