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
    printf("2) - CADASTRO DE CORRETORES\n");
    printf("3) - SAIR DO SISTEMA\n\n");    
    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opcao);

    getchar();    

}

void CadastroPacientes(){

    char nome[45];
    char cpf[20];
    char telefone[16];
    char endereco[100];
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
    printf("Endereco: ");
    scanf("%[^\n]", endereco);
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

    printf("\n\nPaciente Cadastrado!\n");      

    Sleep(1000);
    printf("Nome: %s \n", nome);
    printf("CPF: %d \n", cpf);
    printf("Telefone: %s \n", telefone);
    printf("Idade: %d \n", idade);
    printf("Email: %s \n", email);
    printf("Data do Diagnostico: %s \n", diagnosticData);
}

void CadastroCorretores(){

    printf("\n\nAdicione os dados do Corretor\n");

}

int main(){

    setlocale(LC_ALL, "");

    TelaLogin();

    MostrarMenu();

        switch (opcao)

        {

            case 1 : // Gravar Pacientes

                CadastroPacientes();

            break;

            case 2 : // Gravar Corretores

                CadastroCorretores();

            break;

            default :

                printf("Opção Invalida!");

            break;    
        }

        getchar();



    return 0;
}