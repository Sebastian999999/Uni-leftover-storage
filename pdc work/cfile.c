/*
This code is used to write the random numbers to the file. Matrix1 and matrix2 are initialized here
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void create_file(char *filename, int size)
{
    int i,j;

    int **matrix = (int **)malloc(size * sizeof(int *));
        
    for (int i=0; i<size; i++)
         matrix[i] = (int *)malloc(size * sizeof(int));
    
    
    srand(time(NULL));
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
            matrix[i][j] = rand()%100 + 1; //generates random number between 1 and 100        
    }

    FILE *fp;
    fp = fopen(filename,"w");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            fprintf(fp,"%d ",matrix[i][j]);
        }
        fprintf(fp,"\n");
    }
    fclose(fp);
    printf("File %s created\n", filename);
}


int main()
{
     create_file("matrix1.txt", 16);
     create_file("matrix2.txt", 16);
    //  create_file("m1.txt",2);
    //  create_file("m2.txt",2);
}
