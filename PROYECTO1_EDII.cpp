#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

using namespace std;

struct Nodo{
    int dato;
    Nodo *Siguiente;
};

void menu();//FUNION PARA EL MENU COMPLETO Y SUBMENU

void iniciar_LIFO();//FUNCION PAR AINICIALIZAR LA PILA EN NULL
void ins_LIFO(Nodo *&, int);//FUNCION PARA INSERTAR ELEMENTOS EN LISTA LIFO
void most_LIFO(Nodo *);//FUNCION PARA MOSTRAR ELEMENTOS DE LA PILA
void buscar_LIFO(Nodo *, int);//FUNCION PARA BUSCAR EN LA PILA
void quit_LIFO(Nodo *&, int &);//FUNCION PARA LIMPIAR PILA
bool vacia_LIFO(Nodo *&);//FUNCION PARA VALIDAR SI LA PILA ESTA VACIA
void elim_LIFO();//FUNCION PARA VACIAR LA PILA EN NULL

int main(){
    menu();
    system("cls");
    printf("\n\n\n\t\t\tHAS SALIDO DEL PROGRAMA, VUELVA PRONTO!!!\n\n\n\n");
    system("Pause");
    return 0;
}

void menu(){//MENU Y SUB MENU GENERALES DEL PROGRAMA
    Nodo * pila = NULL;

    char opc_mp;
    int n,opc_sm,dbusc, i=0;
    bool vald=false;
    int nuevo_dato;
    do{
        system("cls");
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
            printf("\n 1. CREAR LISTA");//OK
            printf("\n 2. INSERTAR ELEMENTOS ");//OK
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
                    iniciar_LIFO();
                    printf("\nPila creada e iniciada exitosamente!\n");
                    break;
                case 2:
                    printf("\n\t\t INSERTAR ELEMENTOS LIFO\n");
                    printf("\nDigite un valor numerico (Digite <0> para detener el ingreso: \n");
                    while(n!=0){
                        scanf("%d",&n);
                        if(n!=0){
                        ins_LIFO(pila,n);
                        }
                    }
                    printf("\n\n");
                    break;
                case 3:
                    printf("\n 1. MOSTRAR EL PRIMER ELEMENTO ");
                    printf("\n 2. MOSTRAR EL ULTIMO ELEMENTO ");
                    printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                    printf("\n Ingrese una opcion: ");
                    scanf("%d", &opc_sm);
                    switch(opc_sm){
                    case 1: printf("\n El primer elemento es: <<%d>> \n",pila->dato);
                        break;
                    case 2: printf("\n El ultimo elemento es %d \n",pila->dato);
                        break;
                    case 3:
                        printf("\nMOSTRAR TODOS LOS ELEMENTOS \n\n");
                        printf("\nLa lista LIFO contiene los siguientes elementos: \n\n");
                        most_LIFO(pila);
                        printf("\n\n<<%d>>",n);
                        break;
                    default: printf("\n Ingreso una opcion invalida!!! \n\n");
                    }
                    break;
                case 4:
                    int buscar;
                    printf("\nBUSCAR ELEMENTOS\n\n");
                    printf("Digite valor a buscar en la pila: ");
                    scanf("%d",&buscar);
                    buscar_LIFO(pila,buscar);
                    break;
                case 5:
                    printf("\ELIMINAR ELEMENTOS\n\n");
                    printf("Digite valor a eliminar de la pila: ");
                    scanf("%d",&dbusc);
                    while(pila!=NULL){
                    if(pila->dato==dbusc){
                        quit_LIFO(pila,dbusc);
                        pila=pila->Siguiente;
                        printf("\nEl valor buscado <%d>, fue eliminado de la lista LIFO\n",dbusc);
                        vald=true;
                        }else{
                            pila=pila->Siguiente;
                        }
                    }
                    if(vald!=true){
                        printf("\nEl valor buscado <%d>, no se encuentra en la lista LIFO\n",dbusc);
                    }
                    break;
                case 6:
                    printf("\EDITAR ELEMENTOS\n\n");
                    printf("Digite valor a cambiar de la pila: ");
                    scanf("%d",&dbusc);
                    Nodo *aux1 = NULL;
                    aux1= reservar_memoria;
                    aux1=pila;
                    while(aux1!=NULL){
                    if(aux1->dato==dbusc){
                        quit_LIFO(aux1,dbusc);
                        printf("\nDigite el nuevo valor a ingresar: ");
                        scanf("%d",&nuevo_dato);
                        ins_LIFO(aux1,nuevo_dato);
                        aux1=aux1->Siguiente;
                        printf("\nEl valor <%d>, fue reemplazado por <%d>de la LIFO\n",dbusc,nuevo_dato);
                        vald=true;
                        }else{
                            aux1=aux1->Siguiente;
                        }
                    }
                    if(vald!=true){
                        printf("\nEl valor buscado <%d>, no se encuentra en la lista LIFO\n",dbusc);
                    }
                    break;
                case 7:
                    printf("\nELIMINAR ELEMENTOS\n\n");
                        while(pila!=NULL){
                        quit_LIFO(pila,&n);
                        }
                    printf("\nElementos eliminados correctamente!\n\n");
                    break;
                case 8:
                    printf("\nLA LIFO ESTA VACIA?\n\n");
                    if(vacia_LIFO(pila)==true){
                        printf("\nLa lista LIFO esta vacia!\n\n");
                    }else{
                        printf("\nLa lista LIFO  no esta vacia! ((%d))\n\n",pila->dato);
                    }
                    break;
                case 9:
                    printf("\nELIMINAR LIFO\n\n");
                    elim_LIFO();
                    printf("\nLista eliminada correctamente!\n\n");
                    break;
                case 0:
                    system("cls");
                    menu();
                    break;
                default: printf("\n Ingreso una opcion invalida!!! \n\n");
                    break;
            }

                break;
            case 'b':
                system("cls");
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
                        system("cls");
                        menu();
                        break;
                    default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        break;
                }
                break;
            case 'c':
                system("cls");
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
                        system("cls");
                        menu();
                        break;
                    default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        break;
                }
                break;
            case 'd':
                system("cls");
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
                        system("cls");
                        menu();
                        break;
                    default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        break;
                }
                break;

            case 'e':
                system("cls");
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
                        system("cls");
                        menu();
                        break;
                    default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        break;
                }
                break;

            case 'f':
                system("cls");
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
                        default:
                            printf("\n Ingreso una opcion invalida!!! \n\n");
                        break;
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
                system("cls");
                printf("\t\t\n MENU OPERACIONES ANEXAS \n\n");
                printf("\n a. CONCATENAR DOS LISTAS ");
                printf("\n b. SUMAR DOS LISTAS ");
                printf("\n c. DIVIDIR DOS LISTAS ");
                printf("\n d. ELEVAR UNA LISTA A LA POTENCIA DE OTRA ");
                printf("\n e. COPIAR UNA LISTA EN OTRA ");
                printf("\n f. PROBLEMA DE JOSEPHUS ");
                printf("\n v. VOLVER AL MENU PRINCIPAL ");
                printf("\n Ingrese una opcion (En Minusculas): ");
                scanf("%s", &opc_mp);

                switch(opc_mp){
                case 'a':
                    printf("aaaaaaaaaaaaaaaaaa");
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
                case 'v':
                    system("cls");
                    menu();
                    break;
                default:
                    printf("\n Ingreso una opcion invalida!!! \n\n");
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
    system("cls");
    printf("\n\n\n\t\t\tHAS SALIDO DEL PROGRAMA, VUELVA PRONTO!!!\n\n\n\n");
    system("Pause");
}
void iniciar_LIFO(){//FUNCION PAR AINICIALIZAR LA PILA EN NULL (OK)
    Nodo * pila = NULL;
}
void ins_LIFO(Nodo *&pila, int n){//FUNCION INSERTAR ELEMENTOS EN PILA (OK)

    Nodo *nuevo_nodo = reservar_memoria;
    nuevo_nodo->dato=n;
    nuevo_nodo->Siguiente=pila;
    pila= nuevo_nodo;
}
void most_LIFO(Nodo *pila){//FUNCION PARA MOSTRAR ELEMENTOS DE LA PILA
    while(vacia_LIFO(pila)!=true){
        printf("<%d>",pila->dato);
        pila=pila->Siguiente;
    }
}
void quit_LIFO(Nodo *&pila, int &n){//FUNCION PARA LIMPIAR PILA
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->Siguiente;
    free(aux);
}
bool vacia_LIFO(Nodo *&pila){//FUNCION PARA VALIDAR SI LA PILA ESTA VACIA
    return (pila==NULL)?true: false;
}
void elim_LIFO(){//FUNCION PARA VACIAR LA PILA EN NULL
    Nodo * pila = NULL;
}
void buscar_LIFO(Nodo *pila, int datobuscado){//FUNCION PARA BUSCAR EN LA PILA
    bool encontrado;
    Nodo *primero=reservar_memoria;
    primero=pila;

    if(pila!=NULL){
        while (primero!=NULL){
        if(primero->dato==datobuscado){
                encontrado=true;
            }
                primero=primero->Siguiente;
        }

    }else{  printf("\nEl dato consultado, no se encuentra en la pila!\n");}

    if(encontrado){
        printf("\nEl dato consultado, se encuentra en la pila!!");
    }
}
