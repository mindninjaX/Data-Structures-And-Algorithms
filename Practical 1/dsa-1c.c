#include<stdio.h>
#include<stdlib.h> 
void display(int[][3]); 
void main()
{
int c; 
void func1(); 
void func2(); 
void func3(); 
void func4();
printf("\n-:Matrix Manipulation Functions (for 3X3 Matrix):-");
printf("\n-------------------------------------");
printf("\n Matrix Addition :1"); 
printf("\nMatrix Subtraction :2");
printf("\nMatrix Multiplication :3"); 
printf("\nFind Transpose Matrix :4"); 
printf("\nEnter Your Choice :"); 
scanf("%d",&c); 
switch(c)
{
case 1:
 func1(); 
break; 
case 2: 
 func2(); 
break;
case 3:
 func3(); 
break;
case 4:
 func4(); 
break;
default:
printf("\nInvalid Choice");
}
getch();
}
void func1()
{
int x[3][3],y[3][3],z[3][3]; 
void getmatrix(int[][3]); 
void addition(int[][3],int[][3],int[][3]);
getmatrix(x); 
getmatrix(y); 
addition(x,y,z); 
printf("\n-:Matrix1:-\n"); 
display(x); 
printf("\n-:Matrix2:-\n"); 
display(y);
printf("\n-:MatrixAddition(Result):-\n"); 
display(z);
}
void getmatrix(int t[][3])
{
int i,j; 
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enterelement[%d][%d]:",i,j); 
scanf("%d",&t[i][j]);
}
}
}
void addition(int p[][3],int q[][3],int r[][3])
{int i,j;
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
r[i][j]=p[i][j]+q[i][j];
}
}
void func2()
{
int x[3][3],y[3][3],z[3][3]; 
void getmatrix(int[][3]); 
void subtraction(int[][3],int[][3],int[][3]);
getmatrix(x); 
getmatrix(y); 
subtraction(x,y,z); 
printf("\n-:Matrix1:-\n"); 
display(x); 
printf("\n-:Matrix2:-\n"); 
display(y);
printf("\n-:MatrixSubtraction(Result):-\n"); 
display(z);
}
void subtraction(int p[3][3],int q[3][3],int r[3][3])
{
int i,j; for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
r[i][j]=p[i][j]-q[i][j];
}
}
void func3()
{
int x[3][3],y[3][3],z[3][3]; 
void getmatrix(int[][3]);
void multiplication(int[][3],int[][3],int[][3]);
getmatrix(x); 
getmatrix(y); 
multiplication(x,y,z); 
printf("\n-:Matrix1:-\n"); 
display(x); printf("\n-:Matrix2:-\n"); 
display(y);
printf("\n-:MatrixMultiplication(Result):-\n"); 
display(z);
}
void multiplication(int p[][3],int q[3][3],int r[3][3])
{
int i,j,k; for(i=0;i<3;i++)
//conditioni<totalrowofmatrix1
{
for(j=0;j<3;j++)
//conditioni<totalcolofmatrix1or//conditioni<totalrowofmatrix2
{
r[i][j]=0;
for(k=0;k<3;k++)//conditioni<totalcolofmatrix2 
r[i][j]+=p[i][k]*q[k][j];
}
}
}
void func4()
{
int x[3][3],y[3][3]; 
void getmatrix(int[][3]); 
void transpose(int[][3],int[][3]);
getmatrix(x); 
transpose(x,y); 
printf("\n-:Matrix1:-\n"); 
display(x);
printf("\n-:TransposeMatrix:-\n"); 
display(y);
}
void transpose(int p[][3],int q[][3])
{
int i,j; for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
q[i][j]=p[j][i];
}
}
void display(int m[][3])
{
int i,j; printf("\n\n"); for(i=0;i<3;i++)
{
for(j=0;j<3;j++) printf("%d",m[i][j]);
printf("\n");
}
}

