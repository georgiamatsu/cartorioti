#include <stdio.h> //biblioteca de comunicaÃ§Ã£o com o usuÃ¡rio
#include <stdlib.h> //biblioteca de alocaÃ§Ã£o de espaÃ§o em memÃ³ria
#include <locale.h> //biblioteca de alocaÃ§Ãµes de texto por regiÃ£o
#include <string.h> //biblioteca responsÃ¡vel por cuidar das string
		
int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);	
	
    system("pause");

}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	char cpf [40];
	char conteudo [100];
	
	printf (" Digite o CPF a ser consultado:");
	scanf ("%s", cpf);
	
	FILE *file;
	file = fopen (cpf, "r");
	
	if(file == NULL)
	{
		printf ("Não foi possível localizar o arquivo, tente novamente! \n");
	}
	
	 while (fgets(conteudo, 100, file)!= NULL)
	 {
	 	printf ("\nEssas são as informações do usuário:\n");
	 	printf ("%s", conteudo);
	 	printf ("\n\n");
	 	
	 }
	 
	 system ("pause");
}

int deletar()
{  
      char cpf [40]; // criamos a variável estilo char string para armazenar as inf do usuário no computador
      printf ("Digite o CPF do usuário a ser deletado");// comando de tela para o usuário
      scanf ("%s",cpf);// variável que irá armazenar o valor da string cpf dentro da memória do computador 
  
     remove (cpf);// comando responsável por remover a função. 
  
      FILE *file; // comando para abrir o arquivo com o valor das strings
      file= fopen (cpf, "r"); // computado: leia o cpf e remova.
  
     printf (" O usuário foi deletado com sucesso!\n");
     system ("pause");
  
     if (file == NULL);
  { 
     printf (" O usuário não se encontra no sistema. Por favor, tente novamente.\n");
     system ("pause");
  }
}

  

  
  

	
int main()
	{
	int opcao=0; //Definindo variÃ¡veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{

		system("cls");

		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
			
		printf("### Cartório da EBAC ###\n\n"); //inicio do menu
		printf("Escolha a opção desejada do menu\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n"); 
		printf("\t4 - Sair do menu \n\n");
		printf("Opção: ");//fim do menu
				
		scanf("%d", &opcao); //armazenando a escolha do usuÃ¡rio
		
		system("cls");
	
		switch(opcao) //inicio da seleção
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
		
			case 3:
			deletar();
			break;
			
			case 4: 
			printf ("Obrigado por utilizar o sistema.\n");
			return 0;
			break;
		
			default:
			printf("Essa opção não está disponível!\n");
			system("pause");
			break;
		} //fim da seleção
			
	}	
}
