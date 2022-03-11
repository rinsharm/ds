#include<stdio.h>
void merge();
int a[20],b[20],c[20],n,m;
int main()
{
  int i,j;
  printf("enter the size of first array:");
  scanf("%d",&n);
  printf("enter the size of second array:");
  scanf("%d",&m);
  printf("enter the elements in first array:");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
  printf("enter the elements in first array:");
   for(j=0;j<m;j++)
    {
     scanf("%d",&b[j]);
    }
  printf("\nfirst array :");
   for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
  printf("\nsecond array :");
   for(j=0;j<m;j++)
   {
    printf("%d\t",b[j]);
   }
   merge();
}

void merge()
{
int i,j,k;
 i=0;
 j=0;
  k=0;
 
 while(i<n && j<m)
 {
   if(a[i]<b[j])
    {
      c[k]=a[i];
      i++;k++;
    }
   else if(a[i]==b[j])  
    {
      c[k]=a[i];
      i++;j++;k++;
    }
   else
      {
     c[k]=b[j];
       j++;k++;
       }
}

while(i<n)
 {
  c[k++]=a[i++];
  }

while(j<m)
 {
   c[k++]=b[j++];
  }
 

printf("\nthe sorted array is:");
for(i=0;i<k;i++)
{
 printf("%d\t",c[i]);
 }
}

