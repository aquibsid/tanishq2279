#include<stdio.h>
void main()
{
int A[5],B[5],C[5];
int i,j,same=0;
printf("Enter set A \n");
for(i=0;i<5;i++)
    {
     scanf("%d",&a[i]);
    }
printf("Enter set B \n");
for(i=0;i<5;i++)
    {
     scanf("%d",&b[i]);
    }
printf("Intersection of set A and B is : ");
for(i=0;i<5;i++)
    {
     same=0;
     for(j=0;j<i;j++)
        {
         if(a[j]==a[i])
            {
              same=1;
              break;
            }
        }
    if(same==0)
        {
          for(j=0;j<5;j++)
            {
                 if(b[j]==a[i])
                {
                  printf("%d ",a[i]);
                  break;
                }
            }
        }
    }
}
