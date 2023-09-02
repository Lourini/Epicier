#include<stdio.h>
#include<stdlib.h> 
struct article
{
	float p;
	int n;
	char nom[30];
};
void ticket(struct article A[],int n,int m)
{
	int i;
	printf("***********\nbonjour votre ticket :\n");
	printf("\tnom\tquantite\tprix\n");
	for(i=n-1;i<m-1;i++)
	{
		printf("article %d \t %s \t %d\t %2f\n",i+1,A[i].nom,A[i].n,A[i].p*A[i].n);
		printf("******\n merci pour votre visite \n au revoir\n");
	}
}
int main()
{
	FILE*fichier;
	int N,i,n,m;
	float S,M;
	float p[1000];
	struct article A[30];
	S=0;i=-1;
	fichier=fopen("Users\asus\Desktop\Nouveau dossier (8)\resultat.txt","w");
	printf("\n***************\n");
	printf("bonjour\n");
	printf("logiciel EPC VERSION 1.2\n");
	printf("************\n");
	do
	{
		i++;
		printf("donner le nom de l'article %d\n",i+1);
		scanf("%s",&A[i].nom);
		printf("donner le prix de l'article et la qauntite:\n");
		scanf("%f%d",&A[i].p,&A[i].n);
		S=S+A[i].p;
	}
	while(A[i].p);
	N=i;
	if(i)
	{
		M=S/N;
	}
	else
	{
		M=0;
	}
	printf("\nla somme des prix %2 \n",S);
	fputs("\n la somme de prix :",fichier);
	fputs("S",fichier);
	printf("le nombre d'article :%d",N);
	fputs("le fichier d'articles ",fichier);
	fputs(N,fichier);
	printf(" la moyenne de prix %2f",M);
	fputs(" la moyenne de prix",fichier);
	fputs("M",fichier);
	printf("la liste des prix\n");
	printf("\nvouler vous lesting oui 1 non 0");
	scanf("%d",i);
	if(i)
	{
		printf("donner le numero de debut et de finale");
		scanf("%%d",&n,&m);
		ticket(A,n,m);
	}
	system("pause");
}
