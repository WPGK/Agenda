#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Estrututa de Dados

struct pessoa
{
	int codigo;
	char nome[50];
	char telefone[16];
	char email[50];
	char D_nasc[11];
	char obs [100];
		
};

struct pessoa contato[3];

int main(int argc, char *argv[]) {
	
	int i;
	
	for(i=0;i<3;i++)	{

	printf("___________________________\n");
	printf("Codigo do Contato : ");
	fflush(stdin);
	scanf("%i",&contato[i].codigo);
	printf("___________________________\n");
	
	printf("___________________________\n");
	printf(" Nome Contato :");
	fflush(stdin);
	fgets(contato[i].nome,50,stdin);
	printf("___________________________\n");
	
	printf("___________________________\n");
	printf(" Telefone Contato :");
	fflush(stdin);
	fgets(contato[i].telefone,16,stdin);
	printf("___________________________\n");
	
	printf("___________________________\n");
	printf(" E-mail Contato :");
	fflush(stdin);
	fgets(contato[i].email,50,stdin);
	printf("___________________________\n");
	
	printf("___________________________\n");
	printf(" Data de Nascimento  :");
	fflush(stdin);
	fgets(contato[i].D_nasc,11,stdin);
	printf("___________________________\n");
	
	printf("___________________________\n");
	printf("Observações :");
	fflush(stdin);
	fgets(contato[i].obs,100,stdin);
	printf("___________________________\n");
	

}
	return 0;
}
