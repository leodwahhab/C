// Projeto1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>;

//bibliotecas das aulas do brendon
#include <stdlib.h>;
#include <stdio.h>;


int main()
{   
    char nome;
    int ano;
    int idade;

    printf("Digite seu nome: ");
    scanf_s("%c", &nome);

    printf("\nDigite o ano em que voce nasceu: ");
    scanf_s("%i", &ano);
    idade = (2021 - ano);

    printf("\nVoce se chama ", nome, " e tem ", idade, " anos.\n");

    system("pause");
    return 0;



    //printf("ola mundo!\n");

    //std::cout << "Hello World!\n";
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
