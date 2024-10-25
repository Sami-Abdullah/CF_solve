#include<stdio.h>
int main ()
{
    int i,n;
    char col[9]="abcdefgh";
    char row[9]="12345678";
    scanf ("%d",&n);
    char str[3];
    while (n--)
    {
        scanf ("%s",str);
        for (i=0;i<8;i++)
        {
            if(col[i]!=str[0])printf ("%c%c ",col[i],str[1]);
        }
        for (i=0;i<8;i++)
        {
            if (row[i]!=str[1])printf("%c%c ",str[0],row[i]);
        }
        printf("\n");
       
    }
}