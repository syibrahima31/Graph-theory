#include <stdio.h>

void aire_triangle( int b , int h)
{
    int aire ; 
    aire = (b * h) / 2 ; 
    printf("L'aire du triangle est : %d", aire); 
}



int main()
{
    int base = 3, hauteur = 4 ; 
    aire_triangle(base, hauteur); 
    return 0;
}