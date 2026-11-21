#include<stdio.h>
#include<stdbool.h>
#include<unistd.h>
#include<stdlib.h>
#include<math.h>
#include<mpi.h>
#include<pthread.h>
#include<sys/wait.h>
#define ALIGNMENT 64
bool MatrixVerify(int **a , int **b , int **res)
{
	int result[64][64];
	for (int i = 0; i < 64; i++) {
        for (int j = 0; j < 64; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 64; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void splitter(int *arr1 , int *arr2, int **value , int col , int rows)
{
        for (int i = 0 , k = 0 , l = 0; i < rows ; i++)
        {
                for (int j = 0 ; j < col ; j++)
                {
                        if(i%2==0)
                        {
                                value[i][j]=arr1[j+k*col];
                        }
                        else if(i%2==1)
                        {
                                value[i][j]=arr2[j+l*col];
                        }
                }
                if (i%2==0)
                k++;
                else
                l++;
        }
}

void mapperkey (int ***keys , int **arr , int arrno , int size , int rank , int normal)
{
	int l = arrno;
      	for (int i = 0 /*, j = 0*/; i < size ; i++ , l+=2)
       	{
       		for (int j = 0 ; j < normal ; j++)
       		{
       			for (int k = 0 , key = 0; k < 5 * normal ; k++)
       			{
				if(k%5==0)
       				{
					if (arrno == 1)
					{
						if (k != 0 && k%5==0)
	                                	{
        	                        	        key++;
                	                	}
        					keys[i][j][k]= key;
					}
					else
					{
						if(rank==1)
                                        	keys[i][j][k]= i;
                                        	else if (rank < 7)
                                        	keys[i][j][k]= (rank-1)*size+i;
                                        	else
                                        	keys[i][j][k]= (rank-1)*(size/2)+i;
					}
        			}
       				else if(k%5==1)
       				{
					if (arrno == 1)
					{
						if(rank==1)
                                		keys[i][j][k]= i;
                                		else if (rank < 7)
                                		keys[i][j][k]= (rank-1)*size+i;
                                		else
                                		keys[i][j][k]= (rank-1)*(size/2)+i;
					}
					else
					{
						if (k != 1 && k%5==1)
                                                {
                                                        key++;
                                                }
                                                keys[i][j][k]= key;
					}
				}
       				else if(k%5==2)
       				{
       					keys[i][j][k]= arrno;
       				}
        			else if(k%5==3)
        			{
        				keys[i][j][k]= j;
        			}
       				else if(k%5==4)
       				{
				//	for (int l = 0 ; l < s; l++)
				//	{
       						keys[i][j][k]= arr[l][j]/*arr[(rank - 1) * normal * size + i * normal + j]*/;
				//	}
       				}
	//			if(k%5==4)
       	//			printf("arr=%d , l = %d , rank = %d             ",keys[i][j][k],l,rank);
			}
	//		printf("\n");
       		}
		//l+=2;
       	}
	/*l=arrno;
	printf("size=%d\n",size);
	for (int i = l ; i < (rank<7?size:32) ; i+=2)
	{
		for (int j = 0 ; j < normal ; j++)
		printf("%d ", arr[i][j]);
		printf("\n");
	}*/
/*	for (int i = 0 ; i < size ; i++)
        {
                for (int j = 0 ; j < normal ; j++)
                {
                        for (int k = 0 , key = 0; k < 5 * normal ; k++)
                        {
				if (k!=0 && k%5==0)
				printf("\n");
				printf("key[%d][%d][%d]=%d	",i,j,k,keys[i][j][k]);
			}
			printf("\n");
		}
	}*/
}

int main(int argc , char * argv[])
{
        int rank,comm_size;
        MPI_Init(&argc,&argv);
        MPI_Comm_rank(MPI_COMM_WORLD,&rank);
        MPI_Comm_size(MPI_COMM_WORLD,&comm_size);
        MPI_Status status;
        MPI_Request request;
        char name[MPI_MAX_PROCESSOR_NAME];
        int resultlen;
        int choice = 0;
        int **arrsend1;// = NULL;
	int *arrrecv1;// = NULL;
        int **arrsend2;// = NULL;
        int *arrrecv2;// = NULL;
        int **arr1;// = NULL;
        int **arr2;// = NULL;
        int size = 0;
        int ***keys1;// = NULL;
	int ***keys2; //= NULL;
        int ***Shuffler;// = NULL;
        int ****Shufflerkeys1;// = NULL;
        int ****Shufflerkeys2;// = NULL;
	int *Reducers;// = NULL;
	int ***Input1;//=NULL;
        int ***Input2;//=NULL;
        int **Output1;// = NULL;
        int **Output2;// = NULL;
        FILE *fp1;
        FILE *fp2;
        MPI_Get_processor_name(name,&resultlen);
        if (rank == 0)
        {
                while (choice < 1 || choice > 3)
                {
                        printf("Enter your choice for data (1-3) : ")   ;
                        scanf("%d",&choice);
                        if (choice == 1)
                        {
                                fp1 = fopen("mat1.txt","rw+");
                                fp2 = fopen("mat11.txt","rw+");
                                size=pow(2,6);
                        }
                        else if (choice == 2)
                        {
                                fp1 = fopen("mat2.txt","rw+");
                                fp2 = fopen("mat22.txt","rw+");
                                size = pow(2,7);
                        }
                        else if (choice == 3)
                        {
                                fp1 = fopen("mat3.txt","rw+");
                                fp2 = fopen("mat33.txt","rw+");
                                size = pow(2,8);
                        }
                        else
                        {
                                printf("Invalid Choice!!!!\n");
                        }
                }
                arr1=(int**)malloc(size * sizeof(int*));
                arr2=(int**)malloc(size * sizeof(int*));
                for (int i = 0 ; i < size ; i++)
                {
		//	arr1[i]=NULL;
		//	arr2[i]=NULL;
                        arr1[i]=(int*)malloc(size*sizeof(int));
                        arr2[i]=(int*)malloc(size*sizeof(int));
                }
		for (int i = 0 ; i < size ; i++)
                {
                        for (int j = 0 ; j < size ; j++)
                        {
                                fscanf(fp1,"%d",&arr1[i][j]);
                                fscanf(fp2,"%d",&arr2[i][j]);
                        }
                }
                printf("Master with process id %d running on %s\n" , rank , name);
                if (choice == 1)
                {
                        arrsend1=(int**)malloc(7 * sizeof(int*));
                        arrsend2=(int**)malloc(7 * sizeof(int*));
                        for(int i = 0 ; i < 7 ; i++)
                        {
		//		arrsend1[i]=NULL;
		//		arrsend2[i]=NULL;
                               // if (i<6)
                               // {
                                     arrsend1[i] = i < 6 ? (int*)malloc(size*8*sizeof(int)) : (int*)malloc(size*16*sizeof(int)) ;
                                     arrsend2[i] = i < 6 ? (int*)malloc(size*8*sizeof(int)) : (int*)malloc(size*16*sizeof(int)) ;
  //                                      arrsend2[i]=(int*)malloc(size*8*sizeof(int));
//                               // }
      //                          else if (i==6)
    //                            {
          //                              arrsend1[i]=(int*)malloc(size*16*sizeof(int));
        //                                arrsend2[i]=(int*)malloc(size*16*sizeof(int));
            //                    }
                        }
                        for (int i = 0 , l = 0 , k = 0; i < size ; i++ , l++)
                        {
                                if (l%8==0)
                                {
                                        if(k<6)
                                        {
                                                if(l!=0)
                                                k++;
                                                l=0;
                                        }
                                }
                                for (int j = 0 ; j < size ; j++)
                                {
                                        arrsend1[k][j + l * size] = arr1[i][j];
                                        arrsend2[k][j + l * size] = arr2[i][j];
                                }

                        }
			for (int i = 1 ; i <= 7 ; i++)
                        {
                                if (i < 7)
                                {
                                        MPI_Isend(arrsend1[i-1],size*8,MPI_INT,i,0,MPI_COMM_WORLD,&request);
                                        MPI_Isend(arrsend2[i-1],size*8,MPI_INT,i,10,MPI_COMM_WORLD,&request);
                                }
                                else
                                {
                                        MPI_Isend(arrsend1[i-1],size*16,MPI_INT,i,0,MPI_COMM_WORLD,&request);
                                        MPI_Isend(arrsend2[i-1],size*16,MPI_INT,i,10,MPI_COMM_WORLD,&request);
                                }
                                MPI_Wait(&request,&status);

                                printf("Task MAP assigned to process %d\n",i);
                        }
                }
		for (int i = 0 ; i < 7 ; i++)
		{
			free(arrsend1[i]);
			free(arrsend2[i]);
		}
//		free(arrsend1);
//		free(arrsend2);

                fclose(fp1);
                fclose(fp2);
        }
	MPI_Bcast(&choice,1,MPI_INT,0,MPI_COMM_WORLD);
        MPI_Bcast(&size,1,MPI_INT,0,MPI_COMM_WORLD);

        int**value;// = NULL;
	if (choice == 1)
        {
                if (rank>0)
                printf("Process %d received task MAP on %s\n",rank,name);
                MPI_Barrier(MPI_COMM_WORLD);
                if (rank != 0)
                {
                        arrrecv1=(int*)malloc(size*(rank<7?8:16)*sizeof(int));
                        arrrecv2=(int*)malloc(size*(rank<7?8:16)*sizeof(int));
                        value=(int**)malloc((rank<7?16:32) * sizeof(int*));
                        for(int i = 0 ; i < (rank<7?16:32)  ; i++)
			{
		//		value[i]=NULL;
                        	value[i]=(int*)malloc(size*sizeof(int));
			}
                        //keys=(int*)malloc((5) *sizeof(int));

    			keys1 = (int***)malloc((rank<7?8:16) * sizeof(int**));
    			for (int i = 0; i < (rank<7?8:16); i++) 
    			{
        			//int block_size = (i < 6 ? 16 : 32);
		//		keys1[i] = NULL;
        			keys1[i] = (int**)malloc(size * sizeof(int*));
        			for (int j = 0; j < size; j++) 
        			{
		//			keys1[i][j] = NULL;
					keys1[i][j] = (int*)malloc(5 * size * sizeof(int));
            			/*	void* ptr = NULL;
            				if (posix_memalign(&ptr, ALIGNMENT, 5*size * sizeof(int)) != 0)
            				{
                // Handle error
            				}
            				keys1[i][j] = (int*)ptr;*/
            			}
        		}
			keys2 = (int***)malloc((rank<7?8:16)* sizeof(int**));
                        for (int i = 0; i < (rank<7?8:16); i++) 
                        {
                                //int block_size = (i < 6 ? 16 : 32);
		//		keys2[i] = NULL;
                                keys2[i] = (int**)malloc(size * sizeof(int*));
                                for (int j = 0; j < size; j++)
                                {
		//			keys2[i][j]=NULL;
					keys2[i][j]=(int*)malloc(5 * size * sizeof(int));
                                  /*      void* ptr = NULL;
                                        if (posix_memalign(&ptr, ALIGNMENT, 5 * size * sizeof(int)) != 0)
                                        {
                // Handle error
                                        }
                                        keys2[i][j] = (int*)ptr;*/
                                }
                        }

                        MPI_Irecv(arrrecv1,size*(rank<7?8:16) ,MPI_INT,0,0,MPI_COMM_WORLD,&request);
                        MPI_Irecv(arrrecv2,size*(rank<7?8:16) ,MPI_INT,0,10,MPI_COMM_WORLD,&request);
                        MPI_Wait(&request,&status);
		//	MPI_Barrier(MPI_COMM_WORLD);
                        splitter(arrrecv1,arrrecv2,value,size,(rank<7?16:32));
                        mapperkey(keys1,value,0,(rank<7?8:16),rank, size);
                        mapperkey(keys2,value,1,(rank<7?8:16),rank, size);
//			free(arrrecv1);
//			free(arrrecv2);
			for(int i = 0 ; i < (rank < 7 ? 16 : 32) ; i++)
			{
//				free(value[i]);
			}
//			free(value);
                }

                MPI_Barrier(MPI_COMM_WORLD);
                if(rank>0)
                {
                        printf("Process %d has completed task MAP.\n",rank);
                }
//                MPI_Barrier(MPI_COMM_WORLD);

                Shuffler = (int***)malloc(size * sizeof(int**));
                for (int i = 0; i < size ; i++)
                {
		//	Shuffler[i] = NULL;
                        Shuffler[i] = (int**)malloc(2 * size * sizeof(int*));
                        for (int j = 0 ; j < 2 * size ; j++)
                        {
		//		Shuffler[i][j] = NULL;
                                Shuffler[i][j] = (int*)malloc(4*size*sizeof(int));
    //                         void* ptr = NULL;
  //                           if (posix_memalign(&ptr, ALIGNMENT , size * sizeof(int)) != 0)
//			     {
                // Handle error
  //                           }
//                        Shuffler[i][j] = (int*)ptr;
                          //Shuffler[i][j] = (int*)malloc(2 * size * sizeof(int));
                      }
                }
		for (int i = 0 ; i < size ; i++)
		{
			for (int j = 0 ; j < size ; j++)
			{
				for (int k = 0 ; k < 2 * size ; k++)
				{
					Shuffler[i][j][k]=0;
				}
			}
		}
                Shufflerkeys1=(int****)malloc(7*sizeof(int***));
                for(int i = 0 ; i < 7 ; i++)
                {
		//	 Shufflerkeys1[i] = NULL;
                         Shufflerkeys1[i]=(int***)malloc((i<6?8:16)*sizeof(int**));
                         for (int j = 0 ; j < (i<6?16:32) ; j++)
                         {
		//		Shufflerkeys1[i][j] = NULL;
                                Shufflerkeys1[i][j]=(int**)malloc(size*sizeof(int*));
                                for(int k = 0 ; k < size ; k++)
                                {
		//			Shufflerkeys1[i][j][k] = NULL;
                                        Shufflerkeys1[i][j][k]=(int*)malloc(5*size*sizeof(int));
                                }
                         }
                }
		Shufflerkeys2=(int****)malloc(7*sizeof(int***));
                for(int i = 0 ; i < 7 ; i++)
                {
		//	 Shufflerkeys2[i] = NULL;
                         Shufflerkeys2[i] = (int***)malloc((i<6?8:16)*sizeof(int**));
                         for (int j = 0 ; j < (i<6?8:16) ; j++)
                         {
		//		Shufflerkeys2[i][j] = NULL;
                                Shufflerkeys2[i][j]=(int**)malloc(size*sizeof(int*));
                                for(int k = 0 ; k < size ; k++)
                                {
		//			Shufflerkeys2[i][j][k] = NULL;
                                        Shufflerkeys2[i][j][k]=(int*)malloc(5*size*sizeof(int));
                                }
                         }
                }
		/*for (int i = 0 ; i < 7 ; i++)
                {
                        for (int j = 0 ; j < (i < 6 ? 8 : 16) ; j++)
                        {
                                for (int k = 0 ; k < 2 * size ; k++)
                                {
					for (int l = 0 ; l < 5 * size ; l++)
					{
                                	        Shufflerkeys1[i][j][k][l]=0;
                                	        Shufflerkeys2[i][j][k][l]=0;
                                	}
				}
                        }
                }*/

		if (rank != 0)
		{
                        for (int i = 0 ; i < (rank<7?8:16) ; i++)
                        {
                                for(int j = 0 ; j < size; j++)
				{
                                	MPI_Send(keys1[i][j], 5 * size , MPI_INT, 0, /*rank * (rank<7?16:32) * size  + */i * size + j, MPI_COMM_WORLD);
       					MPI_Send(keys2[i][j], 5 * size , MPI_INT, 0, /*rank * (rank<7?16:32) * size  + */size * size + i * size + j, MPI_COMM_WORLD);
				}
                        }

                }
                else
                {
                        for (int i = 1; i <= 7; i++)
                        {
                                for(int j = 0 ; j < (i<7?8:16) ; j++)
                                {
                                        for(int k = 0 ; k < size ; k++)
                                        {
                                                MPI_Recv(Shufflerkeys1[i-1][j][k], 5*size/*(i<7?16:32)*/, MPI_INT, i ,/* i * (rank < 7 ? 16 : 32) * size + */ j * size + k , MPI_COMM_WORLD, MPI_STATUS_IGNORE);
                                                MPI_Recv(Shufflerkeys2[i-1][j][k], 5*size/*(i<7?16:32)*/, MPI_INT, i ,/* i * (rank < 7 ? 16 : 32) * size + */size * size + j * size + k , MPI_COMM_WORLD, MPI_STATUS_IGNORE);
                    			}
                                }
                        }

			for(int i = 0 , p = 0; i < 7 ; i++)
			{
				for(int j = 0 ; j < (i<6?8:16) ; j++)
				{
					for (int k = 0 , m = 0 , n = 0; k < size ; k++ , n += 2)
					{
						for (int o = 0 ; o < 5*size ;o+=5)
						for(int l = 0 ; l < 5 * size; l+=5)
						{
			//				if (l%5==0)
			//				printf("\n");
			//				printf("HISS=%d 	",p);
			//				p++;
							if(Shufflerkeys1[i][j][k][o]==Shufflerkeys2[i][j][k][l] && Shufflerkeys1[i][j][k][o+1]==Shufflerkeys2[i][j][k][l+1])
							{
								Shuffler[i * 8 + j][n][m]=Shufflerkeys1[i][j][k][o];
								Shuffler[i * 8 + j][n][m+1]=Shufflerkeys1[i][j][k][o+1];
								Shuffler[i * 8 + j][n][m+2]=Shufflerkeys1[i][j][k][o+3];
								Shuffler[i * 8 + j][n][m+3]=Shufflerkeys1[i][j][k][o+4];
								Shuffler[i * 8 + j][n+1][m]=Shufflerkeys2[i][j][k][o];
								Shuffler[i * 8 + j][n+1][m+1]=Shufflerkeys2[i][j][k][o+1];
								Shuffler[i * 8 + j][n+1][m+2]=Shufflerkeys2[i][j][k][o+3];
								Shuffler[i * 8 + j][n+1][m+3]=Shufflerkeys2[i][j][k][o+4];
							//	printf("M=%d , i = %d , j = %d , k = %d , l = %d ,	key = %d , \n",m,i,j,k,l,Shufflerkeys1[i][j][k][l]);
								m+=4;
							}
							/*printf("Shufflerkeys1[%d][%d][%d][%d]key=%d ,		Shufflerkeys1[%d][%d][%d][%d]index=%d , 	Shufflerkeys1[%d][%d][%d][%d]jval=%d ,		Shufflerkeys1[%d][%d][%d][%d]value=%d \n"
														, i , j , k , l , Shufflerkeys1[i][j][k][l]
														, i , j , k , l + 1 , Shufflerkeys1[i][j][k][l+1]
														, i , j , k , l + 3 , Shufflerkeys1[i][j][k][l+3]
														, i , j , k , l + 4 , Shufflerkeys1[i][j][k][l+4]);*/
						}
//						printf("\n\n\n\n");
						if(m >= 2 * size)
						{
							m = 0;
						}
					}
				}
			}
			/*for (int i = 0 ; i < 7 ; i++)
                        {
                                for (int j = 0 ; j < (i < 6 ? 8 : 16) ; j++)
                                {
                                        for (int k = 0 ; k < size ; k++)
                                        {
						for(int l = 0 ; l < 5 * size ; l++)
						{
                                                	if(l != 0 && l % 5 == 0)
                                                	printf ("\n");
                                                	printf("Shufflerkeys1[%d][%d][%d][%d] = %d       " , i , j , k , l , Shufflerkeys2[i][j][k][l]);
						}
                                        }
                                }

                        }*/

			for (int i = 0 ; i < size ; i++)
			{
				for (int j = 0 ; j < 2 * size ; j++)
				{
					for (int k = 0 ; k < 4 * size ; k++)
					{
						if(k != 0 && k % 4 == 0)
						printf ("\n");
						printf("Shuffler[%d][%d][%d] = %d	" , i , j , k , Shuffler[i][j][k]);
					}
				}

			}
			printf("HMMMMMMMMMMMM!!!!!!!!!!!!!!\n");
//                      MPI_Barrier(MPI_COMM_WORLD);
                        Reducers = (int *) malloc (2*sizeof(int));
                        for (int i = 0 ; i < 2 ; i++)
                        Reducers[i]=rand()%7+1;
			for (int i = 0 ; i < 2 ; i++)
			printf("Task Reduce assigned to process %d\n",Reducers[i]);
			for (int i = 1 ; i <= 7 ; i++)
			{
				MPI_Send(Reducers,2,MPI_INT,i,7*size*size,MPI_COMM_WORLD);
			}
			for (int k = 0 ; k < 2 ; k++)
			for(int i = 0 ; i < size ; i++)
			{
				for (int n = 0; n < 2 * size ; n += 2)
				{
					MPI_Send(Shuffler[i][n] , 4 * size , MPI_INT , Reducers[k] , i * 2 * size + n , MPI_COMM_WORLD);
					MPI_Send(Shuffler[i][n+1] , 4 * size , MPI_INT , Reducers[k] , size * size * size + i * 2 * size + n , MPI_COMM_WORLD);
				}
			}
                }
		if (rank != 0)
		{
                        Reducers = (int *) malloc (2*sizeof(int));
			MPI_Recv(Reducers,2,MPI_INT,0,7*size*size,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	//		int **Input1=NULL;
	//		int **Input2=NULL;
	//		int **Output1 = NULL;
	//		int **Output2 = NULL;
			if ((rank == Reducers[0]) || (rank == Reducers[1]))
			{
	                        printf("Process %d received task Reduce on %s\n",rank,name);
				Input1=(int***)malloc(size*sizeof(int**));
				Input2=(int***)malloc(size*sizeof(int**));
				Output1=(int**)malloc(size*sizeof(int*));
				Output2=(int**)malloc(size*sizeof(int*));
			        for (int i = 0 ; i < size ; i++)
				{
		//			Input1[i]=NULL;
		//			Input2[i]=NULL;
		//			Output1[i]=NULL;
		//			Output2[i]=NULL;
					Input1[i]=(int**)malloc(size * sizeof(int*));
					Input2[i]=(int**)malloc(size * sizeof(int*));
					for(int j = 0 ; j < size ; j++)
					{
						Input1[i][j]=(int*)malloc(4 * size * sizeof(int));
	                                        Input2[i][j]=(int*)malloc(4 * size * sizeof(int));
					}
					Output1[i]=(int*)malloc(size * sizeof(int));
					Output2[i]=(int*)malloc(size * sizeof(int));
				}
				for (int i = 0 ; i < size ; i++)
				for (int k = 0 ; k < size ; k++)
				{
					MPI_Recv(Input1[i][k] , 4 * size , MPI_INT , 0 , i * 2 * size + 2 * k , MPI_COMM_WORLD , MPI_STATUS_IGNORE);
					MPI_Recv(Input2[i][k] , 4 * size , MPI_INT , 0 , size * size * size + i * 2 * size + 2 * k , MPI_COMM_WORLD , MPI_STATUS_IGNORE);
				//	printf("BigPPPPPPPPPPPPPPPP%d\n",i);
				}
				printf("Process %d received task Reduce on %s\n",rank,name);/*for (int i = 0 ; i < size ; i++)
				{
					for (int j = 0 ; j < size ; j++)
					{
						for (int k = 0 ; k < 4 * size ; k++)
						{
							if (k!=0 && k%4==0)
                                                	printf("\n");
							printf("Input1[%d][%d][%d]=%d		" , i , j , k , Input1[i][j][k]);
						}
						printf("\n");
					}
				}*/
				for (int i = 0 ; i < size ; i++)
				for (int j = 0 ; j < size ; j++)
				{
					for (int k = 0 ; k < 4 * size ; k+=4)
					{
						if (Input1[i][j][k]==Input2[i][j][k] && Input1[i][j][k+1]==Input2[i][j][k+1] && Input1[i][j][k+2] == Input2[i][j][k+2])
						{
							Output1[i][j]+=Input1[i][j][k+3]*Input2[i][j][k+3];
						}
					}
				}
			//	MPI_Barrier(MPPI_COMM_WORLD);
				printf("Process %d has completed task Reduce \n",rank);
				for (int i = 0 ; i < size ; i++)
				{
					MPI_Send(Output1[i],size,MPI_INT,0,i,MPI_COMM_WORLD);
				}
				/*for(int i = 0 ; i < size ; i++)
				{
					for(int j = 0 ; j < size ; j++)
					printf("Output1[%d][%d]=%d\n",i,j,Output1[i][j]);
				}*/
			}
		//	MPI_Barrier(MPI_COMM_WORLD);
			if (rank == Reducers[0]||rank==Reducers[1])
                        printf("Process %d has completed task Reduce \n",rank);
		}
		if (rank==0)
                {
                	Output2=(int**)malloc(size*sizeof(int*));
                        for(int i = 0 ; i < size ; i++)
                        Output2[i]=(int*)malloc(size*sizeof(int));
                        for (int i = 0 ; i < size ; i++)
                        {
                        	MPI_Recv(Output2[i],size,MPI_INT,0,i,MPI_COMM_WORLD,MPI_STATUS_IGNORE);
                        }
                        printf("Job has been completed\n");
                        MatrixVerify(arr1,arr2,Output2);
                }
        }
//	MPI_Barrier(MPI_COMM_WORLD);
//	free(Reducers);
//	MPI_Bcast(&Reducers,2,MPI_INT,0,MPI_COMM_WORLD);
//                printf("PSSSSSSSSSSTTTTTTTTTTT,%d",Reducers[0]);

        //      MPI_Barrier(MPI_COMM_WORLD);
               // if(rank == Reducers[0])
               // {
                 //       printf("Process %d received task Reduce on %s\n",rank,name);
               // }

//	MPI_Barrier(MPI_COMM_WORLD);
/*	for (int i = 0 ; i < size ; i++)
   //     {
                        for (int j = 0 ; j < size ; j++)
                        free(Shuffler[i][j]);
                        free(Shuffler[i]);
        }
        free(Shuffler);
        for (int i = 0 ; i < 7 ; i++)
	{
		for(int j = 0 ; j < (i < 6 ? 8 : 16) ; j++)
		{
			for (int k = 0 ; k < size ; k++)
			{
                            		free(Shufflerkeys1[i][j][k]);
					free(Shufflerkeys2[i][j][k]);
			}
                	free(Shufflerkeys1[i][j]);
             		free(Shufflerkeys2[i][j]);

		}
                free(Shufflerkeys1[i]);
		free(Shufflerkeys2[i]);
	}
        free(Shufflerkeys1);
        free(Shufflerkeys2);
	free(Reducers);

        if (rank == 0)
        {
		for (int i = 0 ; i < size ; i++)
		{
               		free(arr1[i]);
                	free(arr2[i]);
		}
		free(arr1);
		free(arr2);
                for (int i = 0 ; i < 7 ; i++)
                {
                        free(arrsend1[i]);
                }
                free(arrsend1);
                for (int i = 0 ; i < 7 ; i++)
                {
                        free(arrsend2[i]);
                }
                free(arrsend2);
               // for (int i = 0 ; i < 7 ; i++)
              //  {
                     //   for (int j = 0 ; j < (i < 6 ? 16 : 32) ; j++)
                   //     free(Shuffler[i][j]);
                 //       free(Shuffler[i]);
               // }
             //   free(Shuffler);
        }
        else
        {
//                free(keys);
                free(arrrecv1);
                free(arrrecv2);
                for(int i = 0 ; i < (rank < 7 ? 16 : 32);i++)
                free(value[i]);
                free(value);
        }*/
        MPI_Finalize();
        return 0;
}
