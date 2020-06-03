#include <stdio.h>
#include <stdlib.h>

void labirinto(int matriz[][50],int n, int m, int i, int j,int cont);
void cima(int matriz[][50], int n,int m,int i, int j, int cont);
void esquerda(int matriz[][50], int n,int m,int i, int j, int cont);
void direita(int matriz[][50], int n,int m,int i, int j, int cont);
void baixo(int matriz[][50], int n,int m,int i, int j, int cont);

int main()
{
 int i,j;
 int cont1,cont2;
 int destino1,destino2;
 int n,m;
 int cont=2;
 
 printf("Maze scale, 10x10 , 5x10, 25x25, etc:\n");
 scanf ("%d %d",&n,&m);
 printf("Start point : x & y (coordinates)\n");
 scanf("%d %d",&i,&j);
 printf("Finish Line: x & y (coordinates)\n");
 scanf("%d %d",&destino1,&destino2);

int matriz[50][50];
for(cont1=0;cont1<n;cont1++)
 {
 	for(cont2=0;cont2<m;cont2++)
 	{
 		matriz[cont1][cont2]=0;
	}
 }

printf("Fill in your matrix: ( 1 = avaliable path / 0 = wall) \n");
 for(cont1=0;cont1<n;cont1++)
 {
 	for(cont2=0;cont2<m;cont2++)
 	{
 		scanf("%d",&matriz[cont1][cont2]);
	}
 }


	matriz[destino1][destino2]=99;
	matriz[i][j]=2;
	labirinto(matriz,n,m,i,j,cont);
	printf("\nNumber of moves until reaching the destination: \n");
	printf("%d",matriz[destino1][destino2]-2);

}


void labirinto(int matriz[][50],int n, int m, int i, int j,int cont)
{
	baixo(matriz,n,m,i,j,cont);     //go down
	cima(matriz,n,m,i,j,cont);      //go up
	direita(matriz,n,m,i,j,cont);   //go right
	esquerda(matriz,n,m,i,j,cont);  //go left
}


void cima(int matriz[][50], int n,int m,int i, int j, int cont)
{

	if((matriz[i-1][j]==1||matriz[i-1][j]==99||(matriz[i-1][j]>matriz[i][j]+1&&matriz[i-1][j]>2&&matriz[i-1][j]<99))&&matriz[i-1][j]!=2)
	{// m[4] = *(m+4*4)
		cont++;
		matriz[i-1][j]=cont;

		labirinto(matriz,n,m,i-1,j,cont);


	}


}
void direita(int matriz[][50], int n,int m,int i, int j, int cont)
{
	if((matriz[i][j+1]==1||matriz[i][j+1]==99||(matriz[i][j+1]>matriz[i][j]+1&&matriz[i][j+1]>2&&matriz[i][j+1]<99))&&matriz[i][j+1]!=2)
	{
		cont++;
		matriz[i][j+1]=cont;

		labirinto(matriz,n,m,i,j+1,cont);

	}
}
void baixo(int matriz[][50], int n,int m,int i, int j, int cont)
{
	if((matriz[i+1][j]==1||matriz[i+1][j]==99||(matriz[i+1][j]>matriz[i][j]+1&&matriz[i+1][j]>2&&matriz[i+1][j]<99))&&matriz[i+1][j]!=2)
	{
		cont++;
		matriz[i+1][j]=cont;

		labirinto(matriz,n,m,i+1,j,cont);

	}

}
void esquerda(int matriz[][50], int n,int m,int i, int j, int cont)
{
	if((matriz[i][j-1]==1||matriz[i][j-1]==99||(matriz[i][j-1]>matriz[i][j]+1&&matriz[i][j-1]>2&&matriz[i][j-1]<99))&&matriz[i][j-1]!=2)
	{
		cont++;
		matriz[i][j-1]=cont;

		labirinto(matriz,n,m,i,j-1,cont);

	}

}
