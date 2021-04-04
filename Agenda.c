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
	printf("**** 0 Sair                        ****\n");
	printf("***************************************\n");
	printf("***************************************\n");
	
	int i,op,cont=1,busca,alterar;// CADASTRO
	
	while(op!=0)
   {
	int op=1;
	
	printf("Digite uma opção do MENU principal ?\n");
	scanf("%i",&op);

	
		switch (op){
			
			  case 0:
				    system("pause");
				    exit(0);
                    break;
                    
                default:
                
                    printf("Voce deve escolher uma das 6 opcoes\n");

                    break;  
			
		case 1:		
			printf(" Opção CADASTRAR selecionada\n");
		for(i=0;i<10 && cont==1;i++)	{                                   // Estrutura de repetição para adição dos dados do contato 
				
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
			
		printf(" Deseja Continuar (1 para SIM )(0 para NAO )");
		scanf("%d",&cont);
	}	
		break;	
	
	case 2://LISTAR
	    printf("Opcao LISTAR selecionada! \n");
		for(i=0;i<10 && cont==1;i++)	{
			printf("___________________________\n");
			printf("Codigo do Contato : %i\n",&contato[i].codigo);
		    printf("nome : %c\n",&contato[i].nome);
		    printf("Telefone : %c\n",&contato[i].telefone);
		    printf("E-mail : %c\n",&contato[i].email);
		    printf("Data de Nascimento : %c\n",&contato[i].D_nasc);
		    printf("Obsevacoes : %c\n",&contato[i].obs);
			printf("___________________________\n");
	}
		break;
	
	case 3://BUSCAR
		
		printf("Opcao BUSCAR selicionada! \n");
	   	printf("Infome o codigo :\n");
		scanf("%i",&busca);
		
		for(i=0;i<10 ;i++){
			if(contato[i].codigo==busca){
			printf("Codigo %i\n :",&contato[i].codigo);
			printf("Nome %c\n :",&contato[i].nome);
			}
		}
		break;
	case 4: // ALTERAR	
		printf("Opcao ALTERAR selecionada ! \n");
		printf("Informe o codigo : \n ");
		scanf("%i",&alterar);
		
		int alt_cod[i];
		char alt_nome[i];
		char alt_telefone[i];
		char alt_email[i];
		char alt_D_nasc[i];
		char alt_obs[i];
		
		for(i=0;i<10 ;i++){
			if(alterar==contato[i].codigo){
			printf("Codigo %i\n :",&contato[i].codigo);
			scanf("%i",&alt_cod);
				contato[i].codigo==alt_cod[i];
			printf("Nome %c\n :",&contato[i].nome);
			scanf("%c",&alt_nome);
				contato[i].codigo==alt_nome;
		    printf("Telefone : %c\n",&contato[i].telefone);
		    scanf("%c",&alt_telefone[i]);
		    	contato[i].codigo==alt_telefone;
		    printf("E-mail :%c\n",&contato[i].email);
		    scanf("%c",&alt_email[i]);
		    	contato[i].codigo==alt_email;
		    printf("Data de Nascimento : %c\n",&contato[i].D_nasc);
		    scanf("%c",&alt_D_nasc);
		    	contato[i].codigo==alt_D_nasc[i];
		    printf("Obsevacoes : %c\n",&contato[i].obs);
		    	contato[i].codigo==alt_obs[i];
			}
		}
		break;     
        


    }}
	return 0;

}	

