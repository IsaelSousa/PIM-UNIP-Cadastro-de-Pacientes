#include<stdio.h>
#include<locale.h>
#include<string.h>
#include <stdlib.h>

//Sleep
#include <Windows.h>

int opcao = 0;

// Tela de Login ao usuário.
void TelaLogin(){

    // Armazenamento de login de usuário.
    char login[15] = "UP-0123";
    char loginLoad[15];
    char senha[15] = "123";
    char senhaLoad[15];   
    int logged = 0;

    while(!logged){

    // Limpar o console
    printf("*************Area de Login***********\n");

    // Informar o ID
    printf("Digite o Login: ");
    scanf("%s", loginLoad);

    // Informar a senha
    printf("Digite a Senha: ");
    scanf("%s", senhaLoad);

    if (strcmp(login, loginLoad) == 0 && strcmp(senha, senhaLoad) == 0){
        logged = 1;

        printf("\n\nVerificando Credenciais!\n\n");
        printf("1...");
        Sleep(500);
        printf("2...");
        Sleep(500); 
        printf("3...");
        Sleep(500); 
        printf("4...");
        Sleep(500);     
        printf("5...");                     
        Sleep(500);
        printf("\n\nLogin efetuado com Sucesso!\n\n");
        Sleep(1500);        
        system("@cls||clear");
    } else {

        printf("\n\nUsuario nao Existe!\n\n"); 
        printf("Retornando a tela de login.\n");

        printf("1...");
        Sleep(500);
        printf("2...");
        Sleep(500); 
        printf("3...");
        Sleep(500); 
        printf("4...");
        Sleep(500);     
        printf("5...");                     
        Sleep(500);
        system("@cls||clear");
        }
    }     

}

void MostrarMenu(){

    printf("*************************************\n");
    printf("********Seja Bem Vindo Usuario*******\n");
    printf("*************************************\n");

    printf("1) - CADASTRO DE PACIENTES\n");
    printf("2) - LISTAGEM DE PACIENTES\n");
    printf("3) - SAIR DO SISTEMA\n\n");    
    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opcao);

    getchar();    


        switch (opcao)

        {

            case 1 : // Gravar Pacientes

                CadastroPacientes();

            break;

            case 2 : // Gravar Corretores

                ListarPacientes();

            break;

            case 3 : // Fechar programa

                break;

            break;

            default :

                printf("Opção Invalida!");

            break;    
        }

        getchar();



}

void CadastroPacientes(){

    char nome[45];
    char cpf[20];
    char telefone[16];
    
    //Endereco
    char rua[100];
    char numero[10];
    char bairro[100];
    char cidade[100];
    char estado[100];

    char idade[3];
    char email[32];
    char diagnosticData[10];

    printf("\n\nAdicione os dados do Paciente\n");

    // Nome
    printf("Nome: ");
    scanf("%[^\n]", nome);
    getchar();      
    // CFP
    printf("CPF: ");
    scanf("%[^\n]", cpf);
    getchar();
    // Telefone
    printf("Telefone: ");
    scanf("%[^\n]", telefone);
    getchar();
    // Endereço
    printf("\n Endereco \n");
    printf("-> Rua: ");
    scanf("%[^\n]", rua);
    getchar();

    printf("-> Numero: ");
    scanf("%[^\n]", numero);
    getchar();

    printf("-> Bairro: ");
    scanf("%[^\n]", bairro);   
    getchar();

    printf("-> Cidade: ");
    scanf("%[^\n]", cidade);  
    getchar();

    printf("-> Estado: ");
    scanf("%[^\n]", estado);            
    getchar();
    
    // Idade
    printf("Idade: ");
    scanf("%[^\n]", idade);    
    getchar();
    // Email      
    printf("Email: ");
    scanf("%[^\n]", email); 
    getchar(); 
    // Data do Diagnostico  
    printf("Data do Diagnostico: ");
    scanf("%[^\n]", diagnosticData); 
    getchar();  

    printf("\nCadastro Feito\n");

    Sleep(500);
    printf("Nome: %s \n", nome);
    printf("CPF: %d \n", cpf);
    printf("Telefone: %s \n", telefone);
    printf("Endereco");
    printf("-> Rua: %s \n", rua);
    printf("-> Numero: %s \n", numero);
    printf("-> Bairro: %s \n", bairro);   
    printf("-> Cidade: %s \n", cidade);  
    printf("-> Estado: %s \n", estado);                 
    printf("Idade: %d \n", idade);
    printf("Email: %s \n", email);
    printf("Data do Diagnostico: %s \n", diagnosticData);

    FILE *arq;
    arq = fopen("data.txt", "a");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo!");
    }

    printf("\nRegistrando\n");
    printf("1...");
    Sleep(500);
    printf("2...");
    Sleep(500); 
    printf("3...");
    Sleep(500); 
    printf("4...");
    Sleep(500);     
    printf("5...");                     
    Sleep(500);

    fprintf(arq, "Nome: %s \n", nome);
    fprintf(arq, "CPF: %s \n", cpf);
    fprintf(arq, "Telefone: %s \n", telefone);
    fprintf(arq, "Endereco\n");
    fprintf(arq, "-> Rua: %s \n", rua);
    fprintf(arq, "-> Numero: %s \n", numero);
    fprintf(arq, "-> Bairro: %s \n", bairro);
    fprintf(arq, "-> Cidade: %s \n", cidade);
    fprintf(arq, "-> Estado: %s \n", estado);
    fprintf(arq, "Idade: %s \n", idade);
    fprintf(arq, "Email: %s \n", email);
    fprintf(arq, "Data do Diagnostico: %s \n", diagnosticData);
    fprintf(arq, "======================== \n"); 
    fclose(arq);   

    printf("\n\nRegistro Salvo!\n");   
    Sleep(500);   
    printf("Voltando para o menu!\n");
    Sleep(1500);
    system("@cls||clear");
    MostrarMenu();
    
}

void ListarPacientes(){

    FILE *arq;
    char text[200];

    system("@cls||clear");
    printf("*************************************\n");
    printf("********Pacientes Cadastrados********\n");
    printf("*************************************\n");

    arq = fopen("data.txt", "r");
    while(fgets(text, 200, arq) != NULL)
    printf("%s", text);

    fclose(arq);
    getch();

    system("pause");
    system("@cls||clear");
    MostrarMenu();

}

int main(){

    //setlocale(LC_ALL, "");

    TelaLogin();

    MostrarMenu();


    return 0;
}