#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
#include<unistd.h>
void simpleparallel();
void forloopparallel();
void parallelif();
void parallelif1();
void parallelforif();
void paralleldefaultshared();
void parallelprivate();
void parallelprivate1();
void parallelprivate2();
void parallelprivate3();
int main(int argc , char * argv[])
{
    //simpleparallel();
    //forloopparallel();
    //parallelif();
    //parallelif1();
    //parallelforif();
    //paralleldefaultshared();
    //parallelprivate();
    parallelprivate1();
    //parallelprivate2();
    //parallelprivate3();
}

void simpleparallel()
{
    #pragma omp parallel    
    {
        printf("Hello World from threads111111 ............ %d\n" , omp_get_thread_num());
    }

    #pragma omp parallel
    {
        printf("Hello World from threads222222 ............ %d\n" , omp_get_thread_num());
    }
}

void forloopparallel()
{
    #pragma omp parallel for
        for(int i = 0 ; i < 40 ; i++)
        printf("Thread num : %d     i = %d \n" , omp_get_thread_num() , i);
}

void parallelif()
{
    int n = 0;
    int cond = 5;
    printf("Enter no of threads : ");
    scanf("%d",&n);
    omp_set_num_threads(n);
    #pragma omp parallel if (n > cond) num_threads(n)//here num_threads is optional. Used for setting number of threads thath will run this parallel section
    {
        for (int i = 0 ; i < 10 ; i++)
        {
            printf("Ifthreads : %d      i = %d \n" , omp_get_thread_num() , i);
        }
    }
}

void parallelif1()
{
    int n = 0;
    int cond = 5;
    printf("Enter no of threads : ");
    scanf("%d" , &n);
    omp_set_num_threads(n);
    #pragma omp parallel if (n > cond) num_threads(n - 2)
    {
        printf("Thread id : %d \n" , omp_get_thread_num());
    }
}

void parallelforif()
{
    int n = 0;
    int cond = 5;
    printf("Enter no of threads : ");
    scanf("%d" , &n);
    omp_set_num_threads(n);
    #pragma omp parallel for if (n > cond) 
    for (int i = 0 ; i < 20 ; i++)
    {
        printf("Thread %d running iteration i = %d \n" , omp_get_thread_num() , i);
    }   
}

void parallelprivate()
{
    int n = 0;
    int threaddata = 6;
    printf("Enter no of threads : ");
    scanf ("%d" , &n);
    omp_set_num_threads(n);
    #pragma omp parallel private(threaddata)
    {
        threaddata = 100;
    }
    printf("Thread data = %d \n" , threaddata);
}

void paralleldefaultshared()
{
    int n = 0;
    printf("Enter no of threads : ");
    scanf("%d" , &n);
    omp_set_num_threads(n);
    int a = 50;
    int b = 0;
    int i;
    const int N = 1000; 
    #pragma omp parallel for default (shared) 
    for (i = 0 ; i < N ; i++)
    {
        b = a + i;
        printf("a = %d    ,   b = %d    ,   i = %d  ,   thread = %d\n" , a , b , i , omp_get_thread_num());
    }
    printf("a=%d    ,   b=%d    ,   (expected a = 50 , b = 1049)\n" , a , b);
}

void parallelprivate1()
{
    int n = 0;
    printf("Enter no of threads : ");
    scanf("%d" , &n);
    omp_set_num_threads(n);
    int a = 50;
    int b = 0;
    int i;
    const int N = 20; //Note const should always be used as shared , otherwise will give error.
    #pragma omp parallel for default (none) private(i , a , b) shared(N)
    for (i = 0 ; i < N ; i++)
    {
        b = a + i;
        printf("a = %d    ,   b = %d    ,   i = %d  ,   thread = %d\n" , a , b , i , omp_get_thread_num());
    }
    printf("a=%d    ,   b=%d    ,   (expected a = 50 , b = 1049)\n" , a , b);
}

void parallelprivate2()
{
    int n = 0;
    printf("Enter no of threads : ");
    scanf("%d" , &n);
    omp_set_num_threads(n);
    int a = 50;
    int b = 0;
    int i;
    const int N = 1000;
    #pragma omp parallel for default(none) private(i , a) lastprivate(b) shared (N)
    for (i = 0 ; i < N ; i++)
    {
        b = a + i;
        printf("a = %d    ,   b = %d    ,   i = %d  ,   thread = %d\n" , a , b , i , omp_get_thread_num());
    }
    printf("a = %d    ,   b = %d    ,   (expected a = 50 , b = 1049)\n" , a , b);
}

void parallelprivate3()
{
    int n = 0;
    printf("Enter no of threads : ");
    scanf("%d" , &n);
    omp_set_num_threads(n);
    int a = 50;
    int b = 0;
    int i;
    const int N = 1000;
    #pragma omp parallel for default(none) private (i) firstprivate(a) lastprivate(b) shared(N)
    for(i = 0 ; i < N ; i++)
    {
        b = a + i;
        printf("a = %d    ,   b = %d    ,   i = %d  ,   thread = %d\n" , a , b , i , omp_get_thread_num());
    }
    printf("a = %d    ,   b = %d    ,   (expected a = 50 , b = 1049)\n" , a , b);
}