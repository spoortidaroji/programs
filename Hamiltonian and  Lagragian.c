#include<stdio.h>
int n,a[100],b[100],i=k=0,j;
void main()
{ 
  printf("Enter the size\n");
  scanf("%d",n);
  printf("Enter the marks\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("The Answer is\n");
  for(i=0;i<n;i++)
  {
   for(j=i;j<n;j++)
   {
    if(a[i]<a[j])
    {
     b[k]=a[j];
     k++;
     break;
    }
   }
   i=j;
  }
  if(b[k-1]!=a[n-1])
  {
    b[k]=a[n-1];
     k++;
  }
  for(i=0;i<k;i++)
  {
   printf("%d\n",b[i]);
  }
}