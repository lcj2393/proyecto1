#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void menu();
bool colaVacia(Nodo *&inicio);
void insertar(Nodo *&inicio, Nodo *&fin, int num);
void eliminar(Nodo *&inicio, Nodo *&fin, int &num);

int main(){
    menu();
    return 0;
}

void menu(){
    Nodo * inicio = NULL;
    Nodo * fin = NULL;
    int opcion, numero;
    do{
        printf("\n MENU \n");
        printf("\n 1. Insertar ");
        printf("\n 2. Eliminar ");
        printf("\n 3. Salir \n");
        printf("\n Ingrese una opcion: ");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:
                printf("\nIngrese numero a insertar: ");
                scanf("%d", &numero);
                insertar(inicio, fin, numero);
                break;
            case 2:
                while(inicio != NULL){
                    eliminar(inicio, fin, numero);
                    printf("%d ", numero);
                }

                break;
            case 3:
                exit(0);
                break;
            default: printf("\n Ingreso una opcion invalidad \n\n");
                break;
            }
        system("Pause");
        system("cls");
        }while(opcion != 3);
}
bool colaVacia(Nodo *&inicio){
    return (inicio == NULL) ? true: false;
}
void insertar(Nodo *&inicio, Nodo *&fin, int numero){
    Nodo *nuevo_nodo = reservar_memoria;
    nuevo_nodo -> dato = numero;
    nuevo_nodo -> siguiente = NULL;
    if(colaVacia(inicio)){
        inicio = nuevo_nodo;
    }else{
        fin -> siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    printf("\n Dato insertado correctamente \n");
}
void eliminar(Nodo *&inicio, Nodo *&fin, int &numero){
    numero = inicio -> dato;
    Nodo *aux = reservar_memoria;
    aux = inicio;
    if(inicio == fin){
        inicio = NULL;
        fin = NULL;
    }else{
        inicio = aux -> siguiente;
    }
    free(aux);
}
