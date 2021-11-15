#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,j,n,c;

    printf("Tapez le nombre de numéros que vous souhaitez organiser :");
    scanf("%d",&n);
    int T[n];
    for(i=0;i<n;i++)
    {
        printf("tapez le nomber %d  :",i+1);
        scanf("%d",&T[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(T[i]>T[j])
            {
                c=T[i];
                T[i]=T[j];
                T[j]=c;

            }
        }
    }
    printf("Range les nombres du plus petit au plus grand   :");
    for(i=0;i<n;i++)
    {

        printf(" %d ",T[i]);
    }
    printf("\n");


        printf("Range les nombres du plus grand au plus petit   :");
    for(i=n-1;i>=0;i--)
    {

        printf(" %d ",T[i]);
    }
    printf("\n");

    system("pause");


    return 0;
}


