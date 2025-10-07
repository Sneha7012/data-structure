#include<stdio.h>
#include<stdlib.h>
void insertion();
void deletion();
void searching();
void sorting();
void display();
int array[100];
int num;
int n;
int main()
{
printf("enter the number of elements:");
scanf("%d",&num);
for(int i=0;i<num;i++)
{
scanf("%d",&array[i]);
}
printf("the array elements are:");
for(int i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
while(1)
{
printf("\n enter option:\n1.insertion\n2.deletion\n3.searching\n4.sorting\n5.display\n6.exit\n");
scanf("%d",&n);
switch(n)
{
case 1:
  insertion();
  break;
case 2:
  deletion();
  break;
case 3:
  searching();
  break;
case 4:
  sorting();
  break;
case 5:
  display();
  break;
case 6:
  exit(0);
  break;
default:printf("invalid option\n");
  break;
}
}
return 0;
}
void insertion()
{
int number;
printf("enter the number to be inserted\n");
scanf("%d",&number);
array[num]=number;
num=num+1;
printf("the array elements are:\n");
for(int i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
}

void deletion()
{
int i,ind,j;
if(num>0)
{
printf("enter the index of element\n");
scanf("%d",&ind);
for(int j=ind;j<num;j++)
array[j]=array[j]+1;
num=num-1;
}
else
{
printf("\n array is empty\n");
}
printf("the array elements are:\n");
for(int i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
}

void searching()
{
int num,tosearch,found,i;
printf("\n enter element to search:");
scanf("%d",&tosearch);
found=0;
for(int i=0;i<num;i++)
{
if(array[i]==tosearch)
{
found=1;
break;
}
}
if(found==1)
{
printf("\n%d is found at position %d\n",tosearch,i+1);
}
else
{
printf("\n%d is not found in the array \n",tosearch);
}
}
void sorting()
{
int i,a,j;
for(int i=0;i<num;++i)
{
for(j=i+1;j<num;++j)
{
if(array[i]>array[j])
{
a=array[i];
array[i]=array[j];
array[j]=a;
}
}
}
printf("the numbers arranged in accending order are given below\n");
for(int i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
}
void display()
{
int i;
printf("the array elements are:");
for(int i=0;i<num;i++)
{
printf("%d\n",array[i]);
}
}

