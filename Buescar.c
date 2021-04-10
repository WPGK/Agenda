#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Estrututa de Dados

struct pessoa // estrutura onde denomina as caracteristica para os itens da agenda
{
	int codigo,op;
	char nome[50];
	char telefone[16];
	char email[50];
	char D_nasc[11];
	char obs [100];
		
};

struct pessoa contato[10];   // criação da varivel de armazenamento dos valores 

void cadastrar()
{
	int i,cont;
    	printf(" Opção CADASTRAR selecionada\n");
		for(i=0;i<10 && cont==1;i++)	{                                    
			if(contato[i].codigo == 0)	{
            printf("___________________________\n");
			printf("Codigo do Contato : ");
			fflush(stdin);
			scanf("%d",&contato[i].codigo);
            while (contato[i].codigo <= 0)
            {                                                                                                                   //Função para cadastro 

                printf("Informe um codigo maior que zero\n");
                printf("Insira o codigo: ");
                fflush(stdin);
                scanf("%d", &contato[i].codigo);
            }
			
			
			printf(" Nome Contato :"); 
			fflush(stdin);
			scanf("%c",&contato[i].nome);
			
			printf(" Telefone Contato :");
			fflush(stdin);
			scanf("%d",&contato[i].telefone);
			
			printf(" E-mail Contato :");
			fflush(stdin);
			scanf("%c",&contato[i].email);
			
			printf(" Data de Nascimento  :");
			fflush(stdin);
			scanf("%c",&contato[i].D_nasc);
			
			printf("Observações :");
			fflush(stdin);
			scanf("%c",&contato[i].obs);
			printf("___________________________\n");
			
		printf(" Deseja Continuar (1 para SIM )(0 para NAO )");
		scanf("%d",&cont);
		break;
	}
	}}

void listar()
{
	int i ;
    for ( i = 0; i < 10 && contato[i].codigo != 0; i++)
    {

        printf("*****************************************************\n");
        printf("Codigo: %d\n", contato[i].codigo);

        printf("Nome: %s\n", contato[i].nome);

        printf("Telefone: %s\n", contato[i].telefone);                                    // Realizar a listagem dos contatos 

        printf("E-mail: %s\n", contato[i].email);

        printf("Data Nascimento: %s\n", contato[i].D_nasc);

        printf("Observacoes: %s\n", contato[i].obs);

        printf("*****************************************************\n");
    }
    system("pause");
}

void alterar()
{
    int buscaAlterar, encontrado = 0, i;

    printf("Opcao alterar selecionada:");
    scanf("%i", &buscaAlterar);                                                             // Aadiciona a funcao aterar dados de cadastro

    for (i = 0; i < 10; i++)
    {

        if (buscaAlterar == contato[i].codigo)
        {

            printf(" nome:");
            fflush(stdin);
            gets(contato[i].nome);

            printf(" telefone:");
            fflush(stdin);
            gets(contato[i].telefone);

            printf("email:");
            fflush(stdin);
            gets(contato[i].email);

            printf("data de nascimento:");
            fflush(stdin);
            gets(contato[i].D_nasc);

            printf("observacao:");
            fflush(stdin);
            gets(contato[i].obs);

            printf("\n");

            printf("Contato alterado com sucesso !");
            encontrado = 1;
            printf("\n");

            break;
        }
    }
    if (encontrado == 0)
    {
        printf("Contato nao encontrado.\n");
    }
    system("pause");
}


void buscar()
{
    int codBusca, i;

    printf("*****************************************************\n");
    printf("Opcao  buscar Selecionada:");
    scanf("%i", &codBusca);
    printf("*****************************************************\n");
    for (i = 0; i < 10; i++)
    {
                                                                                                                        //Função para realizar busca de dados de contato pela agenda
        if (codBusca == contato[i].codigo)
        {
            printf("Codigo: %d\n", contato[i].codigo);

            printf("Nome: %s\n", contato[i].nome);

            printf("Telefone: %s\n", contato[i].telefone);

            printf("E-mail: %s\n", contato[i].email);

            printf("Data Nascimento: %s\n", contato[i].D_nasc);

            printf("Observacoes: %s\n", contato[i].obs);

            printf("\n");
            break;
        }
    }
    system("pause");
}

void excluir()
{
    int cod, i;

    printf("Opcao EXLCUIR selecionada:");
    scanf("%d", &cod);
    printf("Contato excluido!\n");                                                                            // Exlcuir infomação de contato 

    for (i = 0; i < 3; i++)
    {
        if (contato[i].codigo == cod)
        {
            contato[i].codigo = 0;
            break;
        }
    }
    {
        if (i == 0)
            ;
        {
            ("Contato nao encontrado");
        }
    }
}



void menu()

{
    int op;
    while (op > 0)
    printf("***************************************\n");
	printf("***************************************\n"); // Menu prncipal da Agenda e suas funções
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

        scanf("%d", &op);

        switch (op)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            listar();
            break;
        case 3:
            buscar();
            break;
        case 4:
            alterar();
            break;
        case 5:
            excluir();
            break;
        case 0:
           return 0;
            break;
        }
    }

int main()
{
    menu();
}


