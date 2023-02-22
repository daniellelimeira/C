#include <iostream>

using namespace std;

#define TAM 10

struct Diaemprestimo{
    int dia, mes, ano;
};

/*Menu da biblioteca*/
void Menu(){
    cout << "Menu:\nEscolha uma das opcoes:\n\n1 - Digitar data de emprestimo\n0 - Sair da biblioteca" << endl;
}

int main()
{
    struct Diaemprestimo data[TAM];
    int selecao_menu, nova_data, ver_datas;
    
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
            cout << "****\nSe desejar inserir novo emprestimo digite 1, caso contrario, digite 0:" << endl;
            cin >> nova_data;
            
            /*Visualizar datas cadastradas:*/
            if(nova_data == 0){
                cout << "Deseja ver as datas dos emprestimos?\n1 - Sim\n0 - Nao\n" << endl;
                cin >> ver_datas;
                
                if(ver_datas == 1){
                    for(int i = 0; i <= TAM; i++){
                        cout << "Data do " << i + 1 << " emprestimo: " << data[i].dia << "/" << data[i].mes << "/" << data[i].ano << endl; 
                    }
                }
                
                cout << "Voce saiu da biblioteca!" << endl;
                break;
            }
        } 
    }
    else{
        cout << "Voce saiu da biblioteca!" << endl;
    }
    
}