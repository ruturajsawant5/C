#include <stdio.h> 
#include <stdlib.h> 
#include "list.h"

list_t* create_list(void)
{
    list_t* p_new_list = NULL; 

    p_new_list = get_node(-1); 
    p_new_list->prev = p_new_list; 
    p_new_list->next = p_new_list; 

    return (p_new_list); 
}

status_t insert_start(list_t* p_list, data_t new_data)
{
    generic_insert(p_list, get_node(new_data), p_list->next); 
    return (SUCCESS); 
}

status_t insert_end(list_t* p_list, data_t new_data)
{
    generic_insert(p_list->prev, get_node(new_data), p_list);
    return (SUCCESS);  
}

status_t insert_after(list_t* p_list, data_t e_data, data_t new_data)
{
    node_t* p_e_node = NULL; 

    p_e_node = search_node(p_list, e_data); 
    if(p_e_node == NULL)
        return (LIST_DATA_NOT_FOUND); 
    
    generic_insert(p_e_node, get_node(new_data), p_e_node->next); 
    return (SUCCESS); 
}

status_t insert_before(list_t* p_list, data_t e_data, data_t new_data)
{
    node_t* p_e_node = NULL; 

    p_e_node = search_node(p_list, e_data); 
    if(p_e_node == NULL)
        return (LIST_DATA_NOT_FOUND); 
    
    generic_insert(p_e_node->prev, get_node(new_data), p_e_node); 
    return (SUCCESS); 
}

status_t get_start(list_t* p_list, data_t* p_start_data)
{
    if(is_empty(p_list) == TRUE)
        return (LIST_EMPTY); 
    *p_start_data = p_list->next->data; 
    return (SUCCESS); 
}

status_t get_end(list_t* p_list, data_t* p_end_data)
{
    if(is_empty(p_list) == TRUE)
        return (LIST_EMPTY); 
    *p_end_data = p_list->prev->data; 
    return (SUCCESS); 
}

status_t pop_start(list_t* p_list, data_t* p_start_data)
{
    if(is_empty(p_list) == TRUE)
        return (LIST_EMPTY); 
    *p_start_data = p_list->next->data; 
    generic_delete(p_list->next); 
    return (SUCCESS); 
}

status_t pop_end(list_t* p_list, data_t* p_end_data)
{
    if(is_empty(p_list) == TRUE)
        return (LIST_EMPTY); 
    *p_end_data = p_list->prev->data; 
    generic_delete(p_list->prev); 
    return (SUCCESS); 
}

status_t remove_start(list_t* p_list)
{
    if(is_empty(p_list) == TRUE)
        return (LIST_EMPTY); 
    generic_delete(p_list->next); 
    return (SUCCESS); 
} 

status_t remove_end(list_t* p_list)
{
    if(is_empty(p_list) == TRUE)
        return (LIST_EMPTY); 
    generic_delete(p_list->prev); 
    return (SUCCESS); 
}

status_t remove_data(list_t* p_list, data_t r_data)
{
    node_t* p_remove_node = NULL; 

    p_remove_node = search_node(p_list, r_data); 
    if(p_remove_node == NULL)
        return (LIST_DATA_NOT_FOUND); 
    generic_delete(p_remove_node); 
    return (SUCCESS); 
}

len_t get_length(const list_t* p_list)
{
    node_t* p_run = NULL; 
    len_t L = 0; 

    for(p_run = p_list->next; p_run != p_list; p_run = p_run->next)
        ++L; 

    return (L); 
}

status_t find(const list_t* p_list, data_t f_data)
{
    node_t* p_e_node = NULL; 

    p_e_node = search_node(p_list, f_data); 
    
    return (p_e_node != NULL ? (TRUE) : (FALSE)); 
}

status_t is_empty(const list_t* p_list)
{
    return (p_list->prev == p_list && p_list->next == p_list); 
}

void show(const list_t* p_list, const char* msg)
{
    node_t* p_run = NULL; 

    if(msg)
        puts(msg);

    printf("[START]<->"); 
    for(p_run = p_list->next; p_run != p_list; p_run = p_run->next)
        printf("[%d]<->", p_run->data); 
    puts("[END]");  
}

status_t destroy_list(list_t** pp_list)
{
    node_t* p_run = NULL; 
    node_t* p_run_next = NULL; 
    list_t* p_list = NULL; 

    p_list = *pp_list; 
    for(p_run = p_list->next; p_run != p_list; p_run = p_run_next)
    {
        p_run_next = p_run->next; 
        free(p_run); 
    }
    free(p_list); 
    *pp_list = NULL; 

    return (SUCCESS); 
}

list_t* add(const list_t* p_list_1, const list_t* p_list_2)
{
    list_t* p_new_list = NULL; 
    node_t* p_run = NULL; 

    p_new_list = create_list(); 

    for(p_run = p_list_1->next; p_run != p_list_1; p_run = p_run->next)
        insert_end(p_new_list, p_run->data); 

    for(p_run = p_list_2->next; p_run != p_list_2; p_run = p_run->next)
        insert_end(p_new_list, p_run->data); 

    return (p_new_list); 
}

status_t concat(list_t* p_list_1, list_t* p_list_2)
{
    if(is_empty(p_list_2) == FALSE)
    {
        p_list_1->prev->next = p_list_2->next; 
        p_list_2->next->prev = p_list_1->prev; 
        p_list_1->prev = p_list_2->prev; 
        p_list_2->prev->next = p_list_1; 
    } 

    free(p_list_2); 
    return (SUCCESS); 
}

list_t* merge(list_t* p_list_1, list_t* p_list_2)
{
    list_t* p_merged_list = NULL; 
    node_t* p_run_1 = NULL; 
    node_t* p_run_2 = NULL; 

    p_merged_list = create_list(); 
    p_run_1 = p_list_1->next; 
    p_run_2 = p_list_2->next; 
    
    while(TRUE)
    {
        if(p_run_1 == p_list_1)
        {
            while(p_run_2 != p_list_2)
            {
                insert_end(p_merged_list, p_run_2->data); 
                p_run_2 = p_run_2->next; 
            }
            break; 
        }

        if(p_run_2 == p_list_2)
        {
            while(p_run_1 != p_list_1)
            {
                insert_end(p_merged_list, p_run_1->data); 
                p_run_1 = p_run_1->next; 
            }

            break; 
        }

        if(p_run_1->data <= p_run_2->data)
        {
            insert_end(p_merged_list, p_run_1->data); 
            p_run_1 = p_run_1->next; 
        }
        else 
        {
            insert_end(p_merged_list, p_run_2->data); 
            p_run_2 = p_run_2->next; 
        }
    }

    return (p_merged_list); 
}

list_t* get_reversed_list(const list_t* p_list)
{
    list_t* p_reversed_list = NULL; 
    // TODO

    return (p_reversed_list); 
}

status_t reverse_list(list_t* p_list)
{
    // TODO 

    return (SUCCESS); 
}

static void generic_insert(node_t* p_beg, node_t* p_mid, node_t* p_end)
{
    p_mid->next = p_end; 
    p_mid->prev = p_beg; 
    p_beg->next = p_mid; 
    p_end->prev = p_mid; 
}

static void generic_delete(node_t* p_delete_node)
{
    p_delete_node->prev->next = p_delete_node->next; 
    p_delete_node->next->prev = p_delete_node->prev; 
    free(p_delete_node); 
}

static node_t* search_node(const list_t* p_list, data_t s_data)
{
    node_t* p_run = NULL;

    for(p_run = p_list->next; p_run != p_list; p_run = p_run->next)
        if(s_data == p_run->data)
            return (p_run); 
    return (NULL); 
}

static node_t* get_node(data_t new_data)
{
    node_t* p_new_node = NULL; 

    p_new_node = (node_t*)xcalloc(1, sizeof(node_t)); 
    p_new_node->data = new_data; 
    p_new_node->prev = NULL; 
    p_new_node->next = NULL; 

    return (p_new_node); 
}

static void* xcalloc(size_t number_of_elements, size_t size_per_element)
{
    void* p = NULL; 

    p = calloc(number_of_elements, size_per_element); 
    if(p == NULL)
    {
        puts("error in allocating memory"); 
        exit(EXIT_FAILURE); 
    }

    return (p); 
}