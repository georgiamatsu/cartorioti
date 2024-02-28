#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string
		
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
		printf ("N�o foi poss�vel localizar o arquivo, tente novamente! \n");
	}
	
	 while (fgets(conteudo, 100, file)!= NULL)
	 {
	 	printf ("\nEssas s�o as informa��es do usu�rio:\n");
	 	printf ("%s", conteudo);
	 	printf ("\n\n");
	 	
	 }
	 
	 system ("pause");
}

int deletar()
{  
      char cpf [40]; // criamos a vari�vel estilo char string para armazenar as inf do usu�rio no computador
      printf ("Digite o CPF do usu�rio a ser deletado");// comando de tela para o usu�rio
      scanf ("%s",cpf);// vari�vel que ir� armazenar o valor da string cpf dentro da mem�ria do computador 
  
     remove (cpf);// comando respons�vel por remover a fun��o. 
  
      FILE *file; // comando para abrir o arquivo com o valor das strings
      file= fopen (cpf, "r"); // computado: leia o cpf e remova.
  
     printf (" O usu�rio foi deletado com sucesso!\n");
     system ("pause");
  
     if (file == NULL);
  { 
     printf (" O usu�rio n�o se encontra no sistema. Por favor, tente novamente.\n");
     system ("pause");
  }
}

  

  
  

	
int main()
	{
	int opcao=0; //Definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{

		system("cls");

		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
			
		printf("### Cart�rio da EBAC ###\n\n"); //inicio do menu
		printf("Escolha a op��o desejada do menu\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n"); 
		printf("\t4 - Sair do menu \n\n");
		printf("Op��o: ");//fim do menu
				
		scanf("%d", &opcao); //armazenando a escolha do usuário
		
		system("cls");
	
		switch(opcao) //inicio da sele��o
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
			printf("Essa op��o n�o est� dispon�vel!\n");
			system("pause");
			break;
		} //fim da sele��o
			
	}	
}
