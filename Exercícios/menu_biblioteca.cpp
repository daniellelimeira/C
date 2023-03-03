/******************************************************************************
                              Menu de Biblioteca
			Com opções: inserir nova data de empréstimo
				    imprimir datas de empréstimos
*******************************************************************************/

#include <iostream>

#define MAX_EMPRESTIMOS 4

using namespace std;

// Definir struct para dia, mês e ano 
struct Data{
    int dia, mes, ano;
};

// Opções de Menu 
void Menu(){
    cout << "1 - Inserir novo empréstimo" << endl;
    cout << "2 - Imprimir empréstimos" << endl;
}

// Strucut empréstimo do tipo Data
Data emprestimo[MAX_EMPRESTIMOS];

int main()
{
    int entrada, dia_input, mes_input, ano_input, imprimir, posicao, posicaoAtual = 0;
    char continuar, ver;
    
    bool validacao_menu = false; // validar entrada
    while(!validacao_menu){
        Menu(); // imprimir menu
        cin >> entrada; // ler entrada do usuário
        
        // opcao de novo empréstimo
        if(entrada == 1){ 
            while(posicaoAtual < MAX_EMPRESTIMOS){
                bool validacao_dia = false; // validar dia
                while(!validacao_dia){
                    cout << "Dia: "; 
                    cin >> dia_input; //ler dia
                    if(dia_input > 0 && dia_input <= 31){
                        validacao_dia = true;
                    }else{
                        cout << "ERRO! Dia inválido, digite novamente." << endl;
                    }
                }
                bool validacao_mes = false; //validar mes
                while(!validacao_mes){
                    cout << "Mês: ";
                    cin >> mes_input; //ler mes
                    if(mes_input > 0 && mes_input <= 12){
                        validacao_mes = true;
                    }else{
                        cout << "ERRO! Mês inválido, digite novamnte." << endl; 
                    }
                }
                bool validacao_ano = false; // validar ano
                while(!validacao_ano){
                    cout << "Ano: ";
                    cin >> ano_input; // ler ano
                    if(ano_input > 1990){
                        validacao_ano = true;
                    }else{
                        cout << "ERRO! Ano inválido, digite novamnte." << endl;
                    }
                }
                // Armazenar dia, mes e ano no struct empréstimo do tipo Data
                emprestimo[posicaoAtual].dia = dia_input;
                emprestimo[posicaoAtual].mes = mes_input;
                emprestimo[posicaoAtual].ano = ano_input;
                
                posicaoAtual++;
                
                // Parar o laço caso o usuário não queria add mais empréstimos e entrada seja menor igual à MAX_EMPRESTIMOS
                cout << "Deseja inserir outro empréstimo? [S/N] " << endl;
                cin >> continuar;
                
                if(posicaoAtual == MAX_EMPRESTIMOS){
                    cout << "Limite de cadastro atingido" << endl;
                }
                
                if(continuar == 'N'){
                    break;
                }
            }
            
            cout << "Deseja ver os empréstimos? [S/N] ";
            cin >> ver;
            if(ver == 'S'){
                bool validacao_imprimir = false;
                while(!validacao_imprimir){
                    cout << "1 - Imprimir todos os empréstimos\n2 - Escolher qual empréstimo imprimir" << endl;
                    cin >> imprimir; // ler opção de impressão
                    
                    // imprimir todos os empréstimos:
                    if(imprimir == 1){
                        if(posicaoAtual == 0){ // não imprimir se não houver cadastro
                            cout << "Nenhum empréstimo cadastrado!" << endl;
                        }else{
                            for(int indice; indice <= MAX_EMPRESTIMOS; indice++){
                                cout << "Empréstimo " << indice + 1 << ":" << emprestimo[indice].dia << "/" << emprestimo[indice].mes << "/" << emprestimo[indice].ano << endl;
                            }
                        }
                        validacao_imprimir = true;
                    
                    // escolher qual empréstimo imprimir:
                    }else if(imprimir == 2){
                        if(posicaoAtual == 0){ // não imprimir se não houver cadastro
                            cout << "Nenhum empréstimo cadastrado!" << endl;
                        }else{
                            cout << "Qual empréstimo deseja visualizar? Digite a posição entre 0 e 4." << endl;
                            cin >> posicao;
                            cout << "Empréstimo " << posicao << ":" << emprestimo[posicao].dia << "/" << emprestimo[posicao].mes << "/" << emprestimo[posicao].ano << endl;
                        }
                        validacao_imprimir = true;
                        
                    // opção não válida
                    }else{
                        cout << "A opção não é válida! Digite novamente." << endl;
                    }
                }
            }else{
                break;
            }
            validacao_menu = true; // validar entrada
            
        // opção imprimir empréstimo
        }else if(entrada == 2){ 
            bool validacao_imprimir = false;
            while(!validacao_imprimir){
                cout << "1 - Imprimir todos os empréstimos\n2 - Escolher qual empréstimo imprimir" << endl;
                cin >> imprimir; // ler opção de impressão
                
                // imprimir todos os empréstimos:
                if(imprimir == 1){
                    if(posicaoAtual == 0){ // não imprimir se não houver cadastro
                        cout << "Nenhum empréstimo cadastrado!" << endl;
                    }else{
                        for(int indice; indice <= MAX_EMPRESTIMOS; indice++){
                            cout << "Empréstimo " << indice + 1 << ":" << emprestimo[indice].dia << "/" << emprestimo[indice].mes << "/" << emprestimo[indice].ano << endl;
                        }
                    }
                    validacao_imprimir = true;
                
                // escolher qual empréstimo imprimir:
                }else if(imprimir == 2){
                    if(posicaoAtual == 0){ // não imprimir se não houver cadastro
                        cout << "Nenhum empréstimo cadastrado!" << endl;
                    }else{
                        cout << "Qual empréstimo deseja visualizar? Digite a posição entre 0 e 4." << endl;
                        cin >> posicao;
                        cout << "Empréstimo " << posicao << ":" << emprestimo[posicao].dia << "/" << emprestimo[posicao].mes << "/" << emprestimo[posicao].ano << endl;
                    }
                    validacao_imprimir = true;
                    
                // opção não válida
                }else{
                    cout << "A opção não é válida! Digite novamente." << endl;
                }
            }
            validacao_menu = true; // validar entrada
            
        // Opção não válida
        }else{
            cout << "A opção não é válida! Digite novamente." << endl;
        }
    }
}
