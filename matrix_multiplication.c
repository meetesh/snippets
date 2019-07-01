#include<stdio.h>

int main()
{
int sizeOfFirstMatrix[2];
int sizeOfSecondMatrix[2];

printf("Enter size of first matrix\n");
scanf("%d",&sizeOfFirstMatrix[0]);
scanf("%d",&sizeOfFirstMatrix[1]);

printf("Enter size of second matrix\n");
scanf("%d",&sizeOfSecondMatrix[0]);
scanf("%d",&sizeOfSecondMatrix[1]);


int matrix1[sizeOfFirstMatrix[0]][sizeOfFirstMatrix[1]];
int matrix2[sizeOfSecondMatrix[0]][sizeOfSecondMatrix[1]];

printf("Enter first matrix\n");
for(int row = 0;row<sizeOfFirstMatrix[0];row++)
{
for(int col = 0;col<sizeOfFirstMatrix[1];col++)
{
scanf("%d",&matrix1[row][col]);
}
}

printf("Enter Second Matrix matrix\n");
for(int row = 0;row<sizeOfSecondMatrix[0];row++)
{
for(int col = 0;col<sizeOfSecondMatrix[1];col++)
{
scanf("%d",&matrix2[row][col]);
}
}


printf("First Matrix : \n");
for(int row=0;row<sizeOfFirstMatrix[0];row++)
{
for(int col=0;col<sizeOfFirstMatrix[1];col++)
{
printf("%14d",matrix1[row][col]);
}
printf("\n");
}


printf("Second Matrix : \n");
for(int row=0;row<sizeOfSecondMatrix[0];row++)
{
for(int col=0;col<sizeOfSecondMatrix[1];col++)
{
printf("%14d",matrix2[row][col]);
}
printf("\n");
}
int resultMatrix[sizeOfFirstMatrix[0]][sizeOfSecondMatrix[1]];
for(int row=0;row<sizeOfFirstMatrix[0];row++)
for(int col=0;col<sizeOfSecondMatrix[1];col++)
resultMatrix[row][col] = 0;

printf("Result matrix\n");
for(int row=0;row<sizeOfFirstMatrix[0];row++)
{
for(int col=0;col<sizeOfSecondMatrix[1];col++)
{
for(int i = 0;i<sizeOfFirstMatrix[1];i++)
{
resultMatrix[row][col] += matrix1[row][i]*matrix2[i][col];
}
}
}

for(int row=0;row<sizeOfFirstMatrix[0];row++)
{
for(int col=0;col<sizeOfSecondMatrix[1];col++)
{
printf("%14d",resultMatrix[row][col]);
}
printf("\n");
}

return 0;
}
