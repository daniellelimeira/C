// Calculadora de Notas com Menu:

#include <iostream>
#define TAMANHO 20

using namespace std;

int main()
{
   int menu, disciplinas1, disciplinas2, final, media_final, media_cra, cra;
   int notas = 0, total = 0, soma = 0;
   int media[TAMANHO];
   
   // MENU:
   cout << "MENU \n Selecione uma das opcoes do menu: \n 1 - Calcular medias \n 2 - Calcular CRA \n 0 - Sair" << endl;
   cin >> menu;
   
   // Ponto 1:
   if(menu == 1){
       cout << "\n * Insira quantas disciplinas esta cursando: ";
       cin >> disciplinas1;
       
       for(int i = 1; i <= disciplinas1; i++){
           cout << "\n Insira as notas da disciplina " << i << ":" << endl;
           for(int j = 1; j <= 3; j++){
               cout << j << "º Nota: ";
               cin >> notas;
               soma = soma + notas;
           }
           media[i] = soma / 3;
           cout << "\n Media Disciplina " << i << ": " << media[i] << endl;
           
            /* Média é 70:
        -- Acima de 70 exibe aprovado
        -- Entre 70 e 50 exibe prova final
        -- Abaixo de 50 exibe reprovado */
        
           if(media[i] > 70){
               cout << "*** APROVADO! ***\n" << endl;
           }
           else if(media[i] <= 70 && media[i] >= 50){
               cout << "*** EM PROVA FINAL ***\n" << endl;
               
                /*- Caso esteja de prova final, o programa deve solicitar a nota da prova final
                -- Abaixo de 50 exibe reprovado
                -- Acima de 50 exibe aprovado */
                
               cout << "Digite a nota da prova final: ";
               cin >> final;
               media_final = (final + media[i]) / 2;
               
               if(media_final >= 50){
                   cout << "*** APROVADO! ***\n" << endl;
               }
               else{
                   cout << "*** REPROVADO ***\n" << endl;
               }
           }
           else{
               cout << "*** REPROVADO ***\n" << endl;
           }
           soma = 0;
       }
       
       //-------
       // MENU:
       cout << "\n MENU \n Selecione uma das opcoes do menu: \n 2 - Calcular CRA \n 0 - Sair" << endl;
       cin >> menu;
       
       // Ponto 2:
       if(menu == 2){
           cout << "\n * Insira quantas disciplinas esta cursando: ";
           cin >> disciplinas2;
           
           for(int k = 1; k <= disciplinas2; k++){
               cout << "Insira a media final da disciplinas " << k << ": ";
               cin >> media_cra;
               total = total + media_cra;
           }
           cra = total / disciplinas2;
           cout << "\n CRA: " << cra << endl;
       }
       // Ponto 0:
       else{
           cout << "SUA CONSULTA FOI FINALIZADA COM SUCESSO." << endl;
       }
   }
   
   // Ponto 2:
   else if(menu == 2){
       cout << "\n * Insira quantas disciplinas esta cursando: ";
       cin >> disciplinas2;
       for(int k = 1; k <= disciplinas2; k++){
           cout << "Insira a media final da disciplinas " << k << ": ";
           cin >> media_cra;
           total = total + media_cra;
       }
       cra = total / disciplinas2;
       cout << "\n CRA: " << cra << endl;
       
        //-------
       // MENU:
       cout << "\n MENU \n Selecione uma das opcoes do menu: \n 1 - Calcular medias \n 0 - Sair" << endl;
       cin >> menu;
       
       // Ponto 1:
       if(menu == 1){
           cout << "\n * Insira quantas disciplinas esta cursando: ";
           cin >> disciplinas1;
           
           for(int i = 1; i <= disciplinas1; i++){
               cout << "\n Insira as notas da disciplina " << i << ":" << endl;
                for(int j = 1; j <= 3; j++){
                    cout << j << "º Nota: ";
                    cin >> notas;
                    soma = soma + notas;
                }
                media[i] = soma / 3;
                cout << "\n Media Disciplina " << i << ": " << media[i] << endl;
                
                /* Média é 70:
                -- Acima de 70 exibe aprovado
                -- Entre 70 e 50 exibe prova final
                -- Abaixo de 50 exibe reprovado */
        
                if(media[i] > 70){
                    cout << "*** APROVADO! ***\n" << endl;
                }
                else if(media[i] <= 70 && media[i] >= 50){
                    cout << "*** EM PROVA FINAL ***\n" << endl;
                    
                    /*- Caso esteja de prova final, o programa deve solicitar a nota da prova final
                    -- Abaixo de 50 exibe reprovado
                    -- Acima de 50 exibe aprovado */
                    
                    cout << "Digite a nota da prova final: ";
                    cin >> final;
                    media_final = (final + media[i]) / 2;
                    
                    if(media_final >= 50){
                        cout << "*** APROVADO! ***\n" << endl;
                    }
                    else{
                        cout << "*** REPROVADO ***\n" << endl;
                    }
                }
                else{
                    cout << "*** REPROVADO ***\n" << endl;
                }
                soma = 0;
           }
       }
       
       // Ponto 0:
       else{
       cout << "SUA CONSULTA FOI FINALIZADA COM SUCESSO." << endl;
       }
   }
   
   // Ponto 0:
   else{
       cout << "SUA CONSULTA FOI FINALIZADA COM SUCESSO." << endl;
   }
}