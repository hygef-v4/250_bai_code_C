#include <stdio.h>
#include <stdlib.h>
// hackerank problem: https://www.hackerrank.com/challenges/dynamic-array-in-c/problem?isFullScreen=true

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;  // array of books 

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;  // 2d array

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves); // number of shelves  
    total_number_of_books = calloc(total_number_of_shelves, sizeof(int)); // total num of books = num of shelves(array)

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries); // number of queries 
    total_number_of_pages = malloc(total_number_of_shelves*sizeof(int *)); // 2d array

    for(int i = 0; i< total_number_of_shelves; i++)
    {
        total_number_of_pages[i] = calloc(1100, sizeof(int)); // initialize 1100 maximum page for each book 
    }
    while (total_number_of_queries--) // input type of queries
    {
        int type_of_query;
        scanf("%d", &type_of_query);  // type of query  
        
        //yth book, y pages, xth shelf 
        if (type_of_query == 1) 
        {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);   
            total_number_of_books[x]++;  // increase total of book by 1 
            
            int* book = total_number_of_pages[x];  //representing the pages of books on a shelf.
                                                  // start with the 1st book 
            while(*book !=0) // find an empty book slot 
            {
                book ++;  
            }
            *book = y; // add a book with y pages the a new slot 
        } 
        else if (type_of_query == 2) 
        {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));  // access book y in shelf x 
        } 
        else 
        {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x)); // total number of book in x shelf 
        }
    }

    
    if (total_number_of_books) {
        free(total_number_of_books);  //free total_books
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));  // free each shelf's num of pages 
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages); // free total num of pages 
    }
    
    return 0;
}