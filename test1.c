#include <stdio.h>

void paire(int N , int M )
{

    for (int  i = N ; i < M+1 ; i++)
    {
        if (i%2 ==0)
        {
            printf("%d \n", i); 
        }
        
    }

}

int multiplier(int A, int B)
{
    int res =0 ;

    for (int  i = 0; i < B ; i++)
    {
        res = res + A ; 
    }
    
    return res ; 
}



int main()
{
    int N =2, M  = 10; 

    //paire(N, M); 
    int res = multiplier(3,3); 
    printf("%d", res); 

    return 0; 
}