#include<stdio.h>
int main ()
{
    int i,n,j=1,L=0,O=0,nL=0,nO=0,f=0;
    int k=1;
    scanf ("%d",&n);
    char str[n];
    int arr[n],t=n-1;
    for(i=0;i<n;i++)arr[i]=0;
    scanf ("%s",str);
    while(t--)
    {
        for(i=0;i<k;i++)
        {
            if(str[i]=='L')L++;
            else O++;
        }
        for(j=k;j<n;j++)
        {
            if(str[j]=='L')nL++;
            else nO++;
        }
        if(L==nL||O==nO)arr[i]=-1;
        else arr[i]=i;
        nL=0;
        nO=0;
        L=0;
        O=0;
        k++;
    }
    for (i=0;i<n;i++)
    {
        if (arr[i]!=-1&&arr[i]!=0)
        {
            f=1;
            printf("%d\n",i);
            return 0;
        }
    }
    if (f==0)printf ("-1\n");   
}