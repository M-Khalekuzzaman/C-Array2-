//Write a program that can take some numbers and display maximum
#include<stdio.h>
int main()
{

 int number;
printf("Enter your array number : ");
scanf("%d",&number);
int marks[number];

for(int i = 0 ; i<=number-1 ; i++)
{
    printf("Enter your marks value : \n");
}
for(int j = 0 ; j<=number-1 ; j++)
{
    scanf("%d",&marks[j]);
}
int min = marks[0];
for(int k  =1 ;k<=number-1;k++)
{
    if(min > marks[k])
    {
               min = marks[k];
    }

}
printf("Minimum value : %d\n",min);

    getch();
}
