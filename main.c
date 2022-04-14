#include <stdio.h>
#include <string.h>
#include "orderSearch.h"
#define MAX_NAMES 5

int main(){
    char names[MAX_NAMES][10], searchName[10];
    int option, total=0;
    do{
        printf("1 - Inserir\n");
        printf("2 - Pesquisar\n");
        printf("3 - Ordenar\n");
        printf("4 - Exibir\n");
        printf("5 - Fechar\n");
        printf("Escolha uma das opções acima:\n");
        scanf("%d", &option);
        switch (option){
            case 1: if(total<MAX_NAMES){
                if(total==0){
                    printf("Digite o seu nome: ");
                    scanf("%s", names[total]);
                }else{
                    if(total>0){
                        printf("Digite o seu nome: ");
                        scanf("%s", names[total]);
                        for(int i=0; i<=total-1; i++){
                          if(strcmp(names[total],names[i])==0){
                            printf("Nome já existente!\n");
                            total = total -1;
                          }
                        }
                    }    
                }
                total++;
            }else{
                printf("Lista Cheia\n");
            }
            break;
            case 2: insertSort(names, total);
            printf("Digite o nome que deseja procurar:");
            scanf("%s", searchName);
            int aux = binarySearch(total, names, searchName);
            if(aux==-1){
                printf("Esse nome não existe\n");
            }else{
                printf("Nome na posição %d\n", aux);
            }
            //size, names,search
	        break;
            case 3: printf("Ordenar lista."); 
            insertSort(names, total);
	        break;
            case 4: if(total>=0){
                for(int i=0; i>total; i++){
                    printf("%s", names[i]);
                }
            }else{
                printf("Lista vazia");
            }
	        break;
        }
    }while(option == 1 || option == 2 || option == 3 || option == 4);
}
