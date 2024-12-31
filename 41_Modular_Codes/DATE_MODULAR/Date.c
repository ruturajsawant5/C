#include "Date.h"
#include <stdio.h> 
#include <stdlib.h> 


Date_t* create_date(day_t init_day, month_t init_month, year_t init_year)
{
    Date_t* p_date = NULL; 

    if(is_date_valid(init_day, init_month, init_year) == FALSE)
        return (NULL); 

    p_date = (Date_t*)malloc(sizeof(Date_t)); 
    if(p_date == NULL)
    {
        puts("Error in allocating memory"); 
        exit(EXIT_FAILURE); 
    }

    p_date->day = init_day; 
    p_date->month = init_month; 
    p_date->year = init_year; 

    return (p_date); 
}

day_t get_day(const Date_t* p_date)
{
    return (p_date->day); 
}

month_t get_month(const Date_t* p_date)
{
    return (p_date->month); 
}

year_t get_year(const Date_t* p_date)
{
    return (p_date->year); 
}

status_t set_day(Date_t* p_date, day_t new_day)
{
    if(is_date_valid(new_day, p_date->month, p_date->year) == FALSE)
        return (INVALID_DATE); 
    p_date->day = new_day; 
    return (SUCCESS); 
}

status_t set_month(Date_t* p_date, month_t new_month)
{
    if(is_date_valid(p_date->day, new_month, p_date->year) == FALSE)
        return (INVALID_DATE); 
    p_date->month = new_month; 
    return (SUCCESS); 
}

status_t set_year(Date_t* p_date, year_t new_year)
{
    p_date->year = new_year; 
    return (SUCCESS); 
}

void show_date(const Date_t* p_date)
{
    printf("%d-%d-%d\n", p_date->day, p_date->month, p_date->year); 
}

status_t destroy_date(Date_t** pp_date)
{
    free(*pp_date); 
    *pp_date = NULL; 
    return (SUCCESS); 
}

static status_t is_date_valid(day_t day, month_t month, year_t year)
{
    /* Write algorithm for this function */
    return (TRUE); 
}