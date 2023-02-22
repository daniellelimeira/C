#include <iostream>

using namespace std;

#define TAM 10

struct Diaemprestimo{
    int dia, mes, ano;
};

void Menu(){
    cout << "Menu:\nEscolha uma das opcoes:\n\n1 - Digitar data de emprestimo\n0 - Sair da biblioteca" << endl;
}

int main()
{
    struct Diaemprestimo data[TAM];
    int selecao_menu;
    
    Menu();
    cin >> selecao_menu;
    
    if(selecao_menu == 1){
        for(int j = 0; j <= TAM; j++){
            cout << "----------------" << endl;
            cout << "NOVO EMPRESTIMO:" << endl;
            cout << "----------------" << endl;
            cout << "Digite o dia do emprestimo: " << endl;
            cin >> data[j].dia;
            cout << "Digite o mes do emprestimo: " << endl;
            cin >> data[j].mes;
            cout << "Digite o ano do emprestimo: " << endl;
            cin >> data[j].ano;
        }
    }
    else{
        cout << "Voce saiu da biblioteca!" << endl;
    }
    
    for(int i = 0; i <= TAM; i++){
        cout << "Data do " << i + 1 << " emprestimo: " << data[i].dia << "/" << data[i].mes << "/" << data[i].ano << endl; 
    }
}