#include <stdio.h> //biblioteca de comunicação do usuario
#include <stdlib.h> //biblioteca de alocação de espaï¿½o de memï¿½ria
#include <locale.h> //biblioteca de alocações de txto por regiï¿½o
#include <string.h> //biblioteca responsavel por cuidar das strings 

int registro()
{
         setlocale(LC_ALL,"Portuguese");
         printf("Você escolheu o registro de nomes\n");
         system("pause");
         
         char arquivo[40];
         char cpf[40];
         char nome[40];
         char sobrenome[40];
         char cargo[40];
         
         printf("Digite o CPF a ser cadastrado:  ");
         scanf("%s", cpf);
         strcpy(arquivo,cpf); //reponsavel por copiar os valores das strings
         
         FILE *file; //cria o arquivo no computador
         file = fopen(arquivo,"w");
         fprintf(file,cpf); //salvo valor da variavel
         fclose(file); //fecho arquivo
         file = fopen (arquivo, "a");
         fprintf(file,",");
         fclose(file);
         
         printf("Digite o nome a ser cadastrado:  ");
         scanf("%s",nome);
         file = fopen(arquivo, "a");
         fprintf(file,nome);
         fprintf(file,",");
         fclose(file); 
         
         printf("Digite o sobrenome a ser cadastrado:  ");
         scanf("%s",sobrenome);
         file = fopen(arquivo, "a");
         fprintf(file,sobrenome);
         fprintf(file,",");
         fclose(file);
         
         printf("Digite o cargo a ser cadastrado:  ");
         scanf("%s",cargo);
         file = fopen(arquivo, "a");
         fprintf(file,cargo); //fprinf inclui no arquivo
         fprintf(file,",");
         fclose(file);
         
}

int consulta()
{
         setlocale(LC_ALL,"Portuguese");
         
         printf("você escolheu consultar nomes\n");
         system("pause");
         
         char cpf[40];
         char conteudo[100];
         
         printf("Digite o CPF ser consultado: ");
         scanf("%s",cpf);
         
         FILE *file; 
         file = fopen(cpf, "r");
         
         if(file == NULL)
         {
             printf("Não foi possível abrir o arquivo, CPF não localizado. \n");
             system("pause");
         }
         while(fgets(conteudo,200,file)!= NULL)
         {
            printf("\n Essas são as informações do usuário: ");
            scanf("%s",conteudo);
            printf("\n\n");
            system("pause");
         } 
}

int deletar()
{
         setlocale(LC_ALL,"Portuguese");
         printf("você escolheu deletar nomes\n");
         system("pause");
         
         char cpf[40];
         
         printf("Digite o CPF a ser deletado: ");
         scanf("%s",cpf);
         
         remove(cpf);
         
         FILE *file; //Procura o arquivo "file"
         file = fopen(cpf,"r"); //Abre o arquivo file e procura pelo CPF digitado
         
         if(file == NULL) //função se 
         {       // Mensagem caso não encontre o CPF digitado 
                 printf("O usuario não se encontra no sistema!\n"); 
                 system("pause");
         }
}
    
int main()
{
    int opcao=0; //definindo variaveis
    int laco=1;
    
    for(laco=1;laco=1;)
    {
         setlocale(LC_ALL,"Portuguese");  //definindo linguagem  
         
         system("cls"); //LIMPA A TELA
         
         printf("### Cartório da Ebac ###\n\n");
         printf("Escolha a opção desejada do menu:\n\n");
         printf("\t1 - Registrar nomes\n");
         printf("\t2 - Consultar nomes\n");
         printf("\t3 - Deletar nomes\n\n");
         printf("opcao: ");
    
         scanf("%d",&opcao); //armazenando escolha do usuario 
    
         system("cls"); 
    
         switch(opcao)
    {
                case 1:
                registro();
                break;
                case 2: 
                conulta();
                break;
                case 3:
                deletar();
                break;
                default: 
                printf("Digite uma opção valida!\n");
                system("pause");
                break;
         
    }
}
}

    

    

