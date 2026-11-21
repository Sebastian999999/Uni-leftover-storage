#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<sys/time.h>
//#include<mpi.h>
void assign (int *** arr , int size)
{
	*arr = (int **) malloc (size * sizeof(int *));
	for (int i = 0 ; i < size ; i++)
	{
		(*arr) [i] = (int * ) malloc(size * sizeof(int));
	}

	for (int i = 0 ; i < size ; i++)
	{
		for (int j = 0 ; j < size ; j++)
		{
			(*arr)[i][j] = rand() % 100 + 1 ;
		}
	}
}

int main(int argc , char * argv[])
{
	FILE *fp1;
	FILE *fp2;
	int **arr1 = NULL;
	int **arr2 = NULL;
	int choice = 0 ;
	int size = 0;
	while(choice < 1 || choice > 4)
	{
		printf("Please enter file to write data to (1-3) : ");
		scanf("%d" , &choice);
		if (choice == 1)
		{
			fp1 = fopen("mat1.txt" , "rw+");
			fp2 = fopen("mat11.txt" , "rw+");
			size=pow(2,6);
			assign(&arr1,size);
			assign(&arr2,size);
			for (int i = 0 ; i < size ; i++)
			{
				for (int j = 0 ; j < size ; j++)
				{
					fprintf(fp1 , "%d " , arr1[i][j]);
					fprintf(fp2 , "%d " , arr2[i][j]);
				}
				fprintf(fp1 , "\n");
				fprintf(fp2 , "\n");
			}
		}
		else if (choice == 2)
		{
			fp1 = fopen("mat2.txt" , "rw+");
			fp2 = fopen("mat22.txt" , "rw+");
			size = pow(2,7);
			assign(&arr1,size);
			assign(&arr2,size);
			for (int i = 0 ; i < size ; i++)
			{
				for (int j = 0 ; j < size ; j++)
				{
					fprintf(fp1 , "%d " , arr1[i][j]);
					fprintf(fp2 , "%d " , arr2[i][j]);
				}
				fprintf(fp1 , "\n");
				fprintf(fp2 , "\n");
			}
		}
		else if (choice == 3)
		{
			fp1 = fopen("mat3.txt" , "rw+");
			fp2 = fopen("mat33.txt" , "rw+");
			size = pow(2,8);
			assign(&arr1,size);
			assign(&arr2,size);
			for (int i = 0 ; i < size ; i++)
			{
				for (int j = 0 ; j < size ; j++)
				{
					printf("I am a loser : %d\n",j);
					fprintf(fp1 , "%d " , arr1[i][j]);
					fprintf(fp2 , "%d " , arr2[i][j]);
				}
				fprintf(fp1 , "\n");
				fprintf(fp2 , "\n");
			}
		}
		else
		{
			printf("Invalid Choice!!!!");
		}
	}
	for (int i = 0 ; i < size ; i++)
	{
		free(arr1[i]);
	}
	for (int i = 0 ; i < size ; i++)
	{	
		free(arr2[i]);
	}
	free(arr1);
	free(arr2);
	fclose(fp1);	
	fclose(fp2);
}
