#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Estrututa de Dados

struct pessoa // estrutura onde denomina as caracteristica para os itens da agenda
{
	int codigo,opc;
	char nome[50];
	char telefone[16];
	char email[50];
	char D_nasc[11];
	char obs [100];
		
};

struct pessoa contato[10];   // cria��o da varivel de armazenamento dos valores 

int main(int argc, char *argv[]) {

opc == 1;

while (opc =!0){	
	printf("***************************************\n");
	printf("***************************************\n"); // Menu prncipal da Agenda e suas fun��es
	printf("****       AGENDA DE CONTATOS      ****\n");
	printf("***************************************\n");
	printf("**** 1 Cadastrar                   ****\n");
	printf("**** 2 Listar                      ****\n");
	printf("**** 3 Buscar                      ****\n");
	printf("**** 4 Alterar                     ****\n");
	printf("**** 5 Excluir                     ****\n");
	printf("**** 0 -Sair                       ****\n");
	printf("***************************************\n");
	printf("***************************************\n");


	int i,op,cont=1;// CADASTRO
	printf("Digite uma op��o do MENU principal ?\n");
	scanf("%i",&op);
	if(op==1){
		printf(" Op��o CADASTRAR selecionada\n");
	      
	for(i=0;i<10 && cont==1;i++)	{                                   // Estrutura de repeti��o para adi��o dos dados do contato 
		

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
	
	printf("Observa��es :");
	fflush(stdin);
	fgets(contato[i].obs,100,stdin);
	printf("___________________________\n");
	
	printf(" Deseja Continuar (1 para SIM )(0 para NAO )");
	scanf("%d",&cont);
	
 }}//LISTAR
else if(op==2){ 
	printf("Opcao LISTAR selecionada! \n");
	for(i=0;i<10 && cont==1;i++)	{
	printf("___________________________\n");
	printf("Codigo do Contato : \n",&contato[i].codigo);
    printf("nome : \n",&contato[i].nome);
    printf("Telefone : \n",&contato[i].telefone);
    printf("E-mail : \n",&contato[i].email);
    printf("Data de Nascimento : \n",&contato[i].D_nasc);
    printf("Obsevacoes : \n",&contato[i].obs);
	printf("___________________________\n");
}}
	return 0;
}

