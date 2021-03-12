#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Estrututa de Dados

struct pessoa // estrutura onde denomina as caracteristica para os itens da agenda
{
	int codigo;
	char nome[50];
	char telefone[16];
	char email[50];
	char D_nasc[11];
	char obs [100];
		
};

struct pessoa contato[10];   // criação da varivel de armazenamento dos valores 

int main(int argc, char *argv[]) {
	
	printf("***************************************\n");
	printf("***************************************\n"); // Menu prncipal da Agenda e suas funções
	printf("****       AGENDA DE CONTATOS      ****\n");
	printf("***************************************\n");
	printf("**** 1 Cadastrar                   ****\n");
	printf("**** 2 Listar                      ****\n");
	printf("**** 3 Buscar                      ****\n");
	printf("**** 4 Alterar                     ****\n");
	printf("**** 5 Excluir                     ****\n");
	printf("***************************************\n");
	printf("***************************************\n");
	
	int i,op;
	printf("Digite uma opção do MENU principal ?\n");
	scanf("%i",&op);
	if(op=1){
		printf(" Opção CADASTRAR selecionada\n");}
	      
	for(i=0;i<10;i++)	{                                   // Estrutura de repetição para adição dos dados do contato 
		

	printf("___________________________\n");
	printf("Codigo do Contato : ");
	fflush(stdin);
	scanf("%i",&contato[i].codigo);
	
	printf(" Nome Contato :"); 
	fflush(stdin);
	fgets(contato[i].nome,50,stdin);
	
	printf(" Telefone Contato :");
	fflush(stdin);
	fgets(contato[i].telefone,16,stdin);
	
	printf(" E-mail Contato :");
	fflush(stdin);
	fgets(contato[i].email,50,stdin);
	
	printf(" Data de Nascimento  :");
	fflush(stdin);
	fgets(contato[i].D_nasc,11,stdin);
	
	printf("Observações :");
	fflush(stdin);
	fgets(contato[i].obs,100,stdin);
	printf("___________________________\n");
	


}
	return 0;
}

