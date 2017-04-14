#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

struct Nodo{
    int dato;
    Nodo *Siguiente;
};

void menu();//FUNION PARA EL MENU COMPLETO Y SUBMENU

void ins_LIFO(Nodo *&, int);//FUNCION PARA INSERTAR ELEMENTOS EN LISTA LIFO


bool colaVacia(Nodo *&inicio);
void insertar(Nodo *&inicio, Nodo *&fin, int num);
void eliminar(Nodo *&inicio, Nodo *&fin, int &num);

int main(){
    menu();
    return 0;
}

void menu(){
    Nodo * pila = NULL;
    Nodo * inicio = NULL;
    Nodo * fin = NULL;

    int numero;
    char opc_mp;
    int opc_sm;
    do{
        printf("\n\t\t MENU PROYECTO 1 - EDII \n\n");
        printf("\n a. LISTAS LIFO");
        printf("\n b. LISTAS FIFO ");
        printf("\n c. LISTA CIRCULAR SIMPLEMENTE ENLAZADA ");
        printf("\n d. LISTA CIRCULAR DOBLEMENTE ENLAZADA ");
        printf("\n e. LISTA SIMPLEMENTE ENLAZADAS ");
        printf("\n f. LISTA DOBLEMENTE ENLAZADAS ");
        printf("\n g. OPERACIONES ANEXAS ");
        printf("\n s. Salir \n");
        printf("\n Ingrese una opcion (En Minusculas): ");
        scanf("%s", &opc_mp);
        switch(opc_mp){
            case 'a':
            system("cls");
            printf("\n\t\t MENU LIFO \n\n");
            printf("\n 1. CREAR LISTA");
            printf("\n 2. INSERTAR ELEMENTOS ");
            printf("\n 3. IMPRIMIR ELEMENTOS ");
            printf("\n 4. BUSCAR ELEMENTOS ");
            printf("\n 5. ELIMINAR ELEMENTOS ");
            printf("\n 6. EDITAR ELEMENTOS ");
            printf("\n 7. VACIAR ELEMENTOS ");
            printf("\n 8. LISTA VACIA ");
            printf("\n 9. ELIMINAR LISTA ");
            printf("\n 0. VOLVER AL MENU PRINCIPAL \n");
            printf("\n Ingrese una opcion: ");
            scanf("%d", &opc_sm);
            switch(opc_sm){
                case 1:
                    printf("\n\t\t CREAR LISTA LIFO\n");
                    printf("\nPila creada exitosamente!\n");
                    break;
                case 2:
                    int n;
                    printf("\n\t\t INSERTAR ELEMENTOS LIFO\n");
                    printf("\nDigite un valor numerico (Digite <0> para detener el ingreso: \n");
                    while(n!=0){
                        scanf("%d",&n);
                        ins_LIFO(pila,n);
                    }
                    break;
                case 3:
                    printf("\n 1. MOSTRAR EL PRIMER ELEMENTO ");
                    printf("\n 2. MOSTRAR EL ULTIMO ELEMENTO ");
                    printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                    printf("\n Ingrese una opcion: ");
                    scanf("%d", &opc_sm);
                    switch(opc_sm){
                    case 1:
                        int n;
                        n=pila->Siguiente->dato;
                        printf("\n El primer elemento es %d \n",n);
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    default: printf("\n Ingreso una opcion invalida!!! \n\n");
                    }
                    break;
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 7:
                    break;
                case 8:
                    break;
                case 9:
                    break;
                case 0:
                    menu();
                    break;
                default: printf("\n Ingreso una opcion invalida!!! \n\n");
                    break;
            }

                break;
            case 'b':
                printf("\t\t\n MENU FIFO \n\n");
                printf("\n 1. CREAR LISTA");
                printf("\n 2. INSERTAR ELEMENTOS ");
                printf("\n 3. IMPRIMIR ELEMENTOS ");
                printf("\n 4. BUSCAR ELEMENTOS ");
                printf("\n 5. ELIMINAR ELEMENTOS ");
                printf("\n 6. EDITAR ELEMENTOS ");
                printf("\n 7. VACIAR ELEMENTOS ");
                printf("\n 8. LISTA VACIA ");
                printf("\n 9. ELIMINAR LISTA ");
                printf("\n 0. VOLVER AL MENU PRINCIPAL \n");
                printf("\n Ingrese una opcion: ");
                scanf("%d", &opc_sm);
                switch(opc_sm){
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        printf("\n 1. MOSTRAR EL PRIMER ELEMENTO ");
                        printf("\n 2. MOSTRAR EL ULTIMO ELEMENTO ");
                        printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);
                        switch(opc_sm){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        }
                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                        break;
                    case 9:
                        break;
                    case 0:
                        menu();
                        break;
                    default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        break;
                }
                break;
            case 'c':
                printf("\t\t\n MENU LISTAS CIRCULARES SIMPLEMENTE ENLAZADAS \n\n");
                printf("\n 1. CREAR LISTA");
                printf("\n 2. INSERTAR ELEMENTOS ");
                printf("\n 3. IMPRIMIR ELEMENTOS ");
                printf("\n 4. BUSCAR ELEMENTOS ");
                printf("\n 5. ELIMINAR ELEMENTOS ");
                printf("\n 6. EDITAR ELEMENTOS ");
                printf("\n 7. VACIAR ELEMENTOS ");
                printf("\n 8. LISTA VACIA ");
                printf("\n 9. ELIMINAR LISTA ");
                printf("\n 0. VOLVER AL MENU PRINCIPAL \n");
                printf("\n Ingrese una opcion: ");
                scanf("%d", &opc_sm);
                switch(opc_sm){
                    case 1:
                        break;
                    case 2:
                        printf("\n 1. AL INICIO ");
                        printf("\n 2. AL FINAL ");
                        printf("\n 3. DESPUES DE UN NODO ");
                        printf("\n 4. ANTES DE UN NODO ");
                        printf("\n 5. EN MEDIO DE DOS NODOS ");
                        printf("\n 6. EN FORMA ASCENDENTE ");
                        printf("\n 7. EN FORMA DESCENDENTE ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);

                        switch(opc_sm){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            break;
                        case 5:
                            break;
                        case 6:
                            break;
                        case 7:
                            break;
                        default: printf("\n Ingreso una opcion invalida!!! \n\n");
                            break;
                        }

                        break;
                    case 3:
                        printf("\n 1. MOSTRAR EL PRIMER ELEMENTO ");
                        printf("\n 2. MOSTRAR EL ULTIMO ELEMENTO ");
                        printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                        printf("\n 4. MOSTRAR EL ANTERIOR ELEMENTOS A UN NODO DADO ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);
                        switch(opc_sm){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        }
                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                        break;
                    case 9:
                        break;
                    case 0:
                        menu();
                        break;
                    default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        break;
                }
                break;
            case 'd':
                printf("\t\t\n MENU LISTAS CIRCULARES DOBLEMENTE ENLAZADAS \n\n");
                printf("\n 1. CREAR LISTA");
                printf("\n 2. INSERTAR ELEMENTOS ");
                printf("\n 3. IMPRIMIR ELEMENTOS ");
                printf("\n 4. BUSCAR ELEMENTOS ");
                printf("\n 5. ELIMINAR ELEMENTOS ");
                printf("\n 6. EDITAR ELEMENTOS ");
                printf("\n 7. VACIAR ELEMENTOS ");
                printf("\n 8. LISTA VACIA ");
                printf("\n 9. ELIMINAR LISTA ");
                printf("\n 0. VOLVER AL MENU PRINCIPAL \n");
                printf("\n Ingrese una opcion: ");
                scanf("%d", &opc_sm);
                switch(opc_sm){
                    case 1:
                        break;
                    case 2:
                        printf("\n 1. AL INICIO ");
                        printf("\n 2. AL FINAL ");
                        printf("\n 3. DESPUES DE UN NODO ");
                        printf("\n 4. ANTES DE UN NODO ");
                        printf("\n 5. EN MEDIO DE DOS NODOS ");
                        printf("\n 6. EN FORMA ASCENDENTE ");
                        printf("\n 7. EN FORMA DESCENDENTE ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);

                        switch(opc_sm){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            break;
                        case 5:
                            break;
                        case 6:
                            break;
                        case 7:
                            break;
                        default: printf("\n Ingreso una opcion invalida!!! \n\n");
                            break;
                        }

                        break;
                    case 3:
                        printf("\n 1. MOSTRAR EL PRIMER ELEMENTO ");
                        printf("\n 2. MOSTRAR EL ULTIMO ELEMENTO ");
                        printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                        printf("\n 4. MOSTRAR EL ANTERIOR ELEMENTOS A UN NODO DADO ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);
                        switch(opc_sm){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        }
                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                        break;
                    case 9:
                        break;
                    case 0:
                        menu();
                        break;
                    default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        break;
                }
                break;

            case 'e':
                printf("\t\t\n MENU LISTAS SIMPLEMENTE ENLAZADAS \n\n");
                printf("\n 1. CREAR LISTA");
                printf("\n 2. INSERTAR ELEMENTOS ");
                printf("\n 3. IMPRIMIR ELEMENTOS ");
                printf("\n 4. BUSCAR ELEMENTOS ");
                printf("\n 5. ELIMINAR ELEMENTOS ");
                printf("\n 6. EDITAR ELEMENTOS ");
                printf("\n 7. VACIAR ELEMENTOS ");
                printf("\n 8. LISTA VACIA ");
                printf("\n 9. ELIMINAR LISTA ");
                printf("\n 0. VOLVER AL MENU PRINCIPAL \n");
                printf("\n Ingrese una opcion: ");
                scanf("%d", &opc_sm);
                switch(opc_sm){
                    case 1:
                        break;
                    case 2:
                        printf("\n 1. AL INICIO ");
                        printf("\n 2. AL FINAL ");
                        printf("\n 3. DESPUES DE UN NODO ");
                        printf("\n 4. ANTES DE UN NODO ");
                        printf("\n 5. EN MEDIO DE DOS NODOS ");
                        printf("\n 6. EN FORMA ASCENDENTE ");
                        printf("\n 7. EN FORMA DESCENDENTE ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);

                        switch(opc_sm){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            break;
                        case 5:
                            break;
                        case 6:
                            break;
                        case 7:
                            break;
                        default: printf("\n Ingreso una opcion invalida!!! \n\n");
                            break;
                        }

                        break;
                    case 3:
                        printf("\n 1. MOSTRAR EL PRIMER ELEMENTO ");
                        printf("\n 2. MOSTRAR EL ULTIMO ELEMENTO ");
                        printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                        printf("\n 4. MOSTRAR EL ANTERIOR ELEMENTOS A UN NODO DADO ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);
                        switch(opc_sm){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        }
                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                        break;
                    case 9:
                        break;
                    case 0:
                        menu();
                        break;
                    default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        break;
                }
                break;

            case 'f':
                printf("\t\t\n MENU LISTAS DOBLEMENTE ENLAZADAS \n\n");
                printf("\n 1. CREAR LISTA");
                printf("\n 2. INSERTAR ELEMENTOS ");
                printf("\n 3. IMPRIMIR ELEMENTOS ");
                printf("\n 4. BUSCAR ELEMENTOS ");
                printf("\n 5. ELIMINAR ELEMENTOS ");
                printf("\n 6. EDITAR ELEMENTOS ");
                printf("\n 7. VACIAR ELEMENTOS ");
                printf("\n 8. LISTA VACIA ");
                printf("\n 9. ELIMINAR LISTA ");
                printf("\n 0. VOLVER AL MENU PRINCIPAL \n");
                printf("\n Ingrese una opcion: ");
                scanf("%d", &opc_sm);
                switch(opc_sm){
                    case 1:
                        break;
                    case 2:
                        printf("\n 1. AL INICIO ");
                        printf("\n 2. AL FINAL ");
                        printf("\n 3. DESPUES DE UN NODO ");
                        printf("\n 4. ANTES DE UN NODO ");
                        printf("\n 5. EN MEDIO DE DOS NODOS ");
                        printf("\n 6. EN FORMA ASCENDENTE ");
                        printf("\n 7. EN FORMA DESCENDENTE ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);

                        switch(opc_sm){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        case 4:
                            break;
                        case 5:
                            break;
                        case 6:
                            break;
                        case 7:
                            break;
                        default: printf("\n Ingreso una opcion invalida!!! \n\n");
                            break;
                        }

                        break;
                    case 3:
                        printf("\n 1. MOSTRAR EL PRIMER ELEMENTO ");
                        printf("\n 2. MOSTRAR EL ULTIMO ELEMENTO ");
                        printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                        printf("\n 4. MOSTRAR EL ANTERIOR ELEMENTOS A UN NODO DADO ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);
                        switch(opc_sm){
                        case 1:
                            break;
                        case 2:
                            break;
                        case 3:
                            break;
                        default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        }
                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        break;
                    case 8:
                        break;
                    case 9:
                        break;
                    case 0:
                        menu();
                        break;
                    default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        break;
                }
                break;

            case 'g':
                printf("\t\t\n MENU OPERACIONES ANEXAS \n\n");
                printf("\n a. CONCATENAR DOS LISTAS ");
                printf("\n b. SUMAR DOS LISTAS ");
                printf("\n c. DIVIDIR DOS LISTAS ");
                printf("\n d. ELEVAR UNA LISTA A LA POTENCIA DE OTRA ");
                printf("\n e. COPIAR UNA LISTA EN OTRA ");
                printf("\n f. PROBLEMA DE JOSEPHUS ");
                printf("\n Ingrese una opcion (En Minusculas): ");
                scanf("%s", opc_mp);

                switch(opc_mp){
                case 'a':
                    break;
                case 'b':
                    break;
                case 'c':
                    break;
                case 'd':
                    break;
                case 'e':
                    break;
                case 'f':
                    break;
                }

                break;
            case 's':
                exit(0);
                break;
            default: printf("\n Ingreso una opcion invalida!!! \n\n");
                break;
            }
        system("Pause");
        system("cls");
        }while(opc_mp != 's');
}

void ins_LIFO (Nodo *&pila, int n){

    Nodo *nuevo_nodo = reservar_memoria;
    nuevo_nodo->dato=n;
    nuevo_nodo->Siguiente=pila;
    pila= nuevo_nodo;
}

bool colaVacia(Nodo *&inicio){
    return (inicio == NULL) ? true: false;
}
void insertar(Nodo *&inicio, Nodo *&fin, int numero){
    Nodo *nuevo_nodo = reservar_memoria;
    nuevo_nodo -> dato = numero;
    nuevo_nodo -> Siguiente = NULL;
    if(colaVacia(inicio)){
        inicio = nuevo_nodo;
    }else{
        fin -> Siguiente = nuevo_nodo;
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
        inicio = aux -> Siguiente;
    }
    free(aux);
}
