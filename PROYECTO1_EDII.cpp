#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

using namespace std;

struct Nodo{
    int dato;
    Nodo *Siguiente;
};

//void menu();//FUNION PARA EL MENU COMPLETO Y SUBMENU

void iniciar_LIFO();//FUNCION PAR AINICIALIZAR LA PILA EN NULL
void ins_LIFO(Nodo *&, int);//FUNCION PARA INSERTAR ELEMENTOS EN LISTA LIFO
void most_LIFO(Nodo *);//FUNCION PARA MOSTRAR ELEMENTOS DE LA PILA
void buscar_LIFO(Nodo *, int);//FUNCION PARA BUSCAR EN LA PILA
void quit_LIFO(Nodo *&, int &);//FUNCION PARA LIMPIAR PILA
bool vacia_LIFO(Nodo *&);//FUNCION PARA VALIDAR SI LA PILA ESTA VACIA
void elim_LIFO();//FUNCION PARA VACIAR LA PILA EN NULL

void iniciar_FIFO();//FUNCION PAR AINICIALIZAR LA COLA EN NULL
void ins_FIFO(Nodo *&, Nodo *&, int );//FUNCION PARA INSERTAR ELEMENTOS A LA COLA
void most_FIFO(Nodo *);//FUNCION PARA MOSTRAR ELEMENTOS DE LA COLA
void buscar_FIFO(Nodo *&, Nodo *&, int );//FUNCION PARA BUSCAR EN LA COLA
void quit_LIFO(Nodo *&, Nodo *&, int &);//FUNCION PARA LIMPIAR COLA
bool vacia_FIFO(Nodo *&);//FUNCION PARA VALIDAR SI LA PILA ESTA COLA
void elim_FIFO();//FUNCION PARA VACIAR LA COLA EN NULL

int main(){
    Nodo * pila = NULL;
    Nodo * inicio = NULL;
    Nodo * fin = NULL;

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
                   printf("\nEDITAR ELEMENTOS\n\n");
                   printf("Digite valor a cambiar de la pila: ");
                   scanf("%d",&dbusc);
                    while(pila!=NULL){
                    if(pila->dato==dbusc){
                        quit_LIFO(pila,dbusc);
                        printf("\nDigite el nuevo valor a ingresar: ");
                        scanf("%d",&nuevo_dato);
                        ins_LIFO(pila,nuevo_dato);
                        pila=pila->Siguiente;
                        printf("\nEl valor <%d>, fue reemplazado por <%d>de la LIFO\n",dbusc,nuevo_dato);
                        vald=true;
                        }else{
                            pila=pila->Siguiente;
                        }
                    }
                    if(vald!=true){
                        printf("\nEl valor buscado <%d>, no se encuentra en la lista LIFO\n",dbusc);
                    }
                    break;
                case 7:
                    printf("\nELIMINAR ELEMENTOS\n\n");
                    while(pila!=NULL){
                    quit_LIFO(pila,n);
                    }
                    if(vacia_LIFO(pila)){
                        printf("\nElementos eliminados correctamente!\n\n");}
                    break;
                case 8:
                    printf("\nLIFO VACIA\n\n");
                    if(vacia_LIFO(pila)){
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
                        printf("\n\t\t INICIALIZAR FIFO\n");
                        iniciar_FIFO();
                        printf("\nFIFO Inicializada correctamente!!!\n\n");
                        break;
                    case 2:
                        printf("\n\t\t INSERTAR ELEMENTOS FIFO\n");
                        printf("\nDigite un valor numerico (Digite <0> para detener el ingreso: \n");
                        while(n!=0){
                            scanf("%d",&n);
                            if(n!=0){
                            ins_FIFO(inicio,fin,n);
                            }
                        }
                        printf("\nDatos ingresados correctamente!!\n\n");
                        break;
                    case 3:
                        printf("\n 1. MOSTRAR EL PRIMER ELEMENTO ");
                        printf("\n 2. MOSTRAR EL ULTIMO ELEMENTO ");
                        printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);
                        switch(opc_sm){
                        case 1:printf("\n\t\t PRIMER ELEMENTO FIFO\n");
                                printf("\nEl primer elemento es <%d>\n\n",inicio->dato);
                            break;
                        case 2:printf("\n\t\t ULTIMO ELEMENTO FIFO\n");
                                printf("\nEl ultimo elemento es <%d>\n\n",inicio->Siguiente->Siguiente->dato);
                            break;
                        case 3:printf("\n\t\t TODOS LOS ELEMENTOS FIFO\n");
                                printf("\nLos elemntos de la FIFO son: \n\n");
                                most_FIFO(inicio);
                            break;
                        default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        }
                        break;
                    case 4:printf("\n\t\t BUSCAR ELEMENTOS EN FIFO\n");
                            printf("\nDigite valor a buscar: \n");
                            scanf("%d",&dbusc);

                            buscar_FIFO(inicio,fin,dbusc);
                            printf("\n\n");

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
                    //menu();
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
    return 0;
}

//void menu(){//MENU Y SUB MENU GENERALES DEL PROGRAMA
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


void iniciar_FIFO(){//FUNCION PARA INICIALIZAR LA COLA EN NULL
    Nodo * inicio = NULL;
    Nodo * fin = NULL;
}
void ins_FIFO(Nodo *&inicio, Nodo *&fin, int num){//FUNCION PARA INSERTAR ELEMENTOS A LA COLA
    Nodo *nuevo_nodo = reservar_memoria;
    nuevo_nodo -> dato = num;
    nuevo_nodo -> Siguiente = NULL;
    if((vacia_FIFO(inicio))){
        inicio = nuevo_nodo;
    }else{
        fin -> Siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
}

void most_FIFO(Nodo *inicio){//FUNCION PARA MOSTRAR ELEMENTOS DE LA COLA
    while(vacia_LIFO(inicio)!=true){
        printf("<%d>, ",inicio->dato);
        inicio=inicio->Siguiente;
    }
}
/*
void quit_FIFO(Nodo *&inicio, Nodo *&fin, int &num){//FUNCION PARA LIMPIAR COLA
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->Siguiente;
    free(aux);
}*/
bool vacia_FIFO(Nodo *&inicio){//FUNCION PARA VALIDAR SI LA COLA ESTA VACIA
    return (inicio==NULL)?true: false;
}

void elim_FIFO(){//FUNCION PARA VACIAR LA COLA EN NULL
    Nodo * inicio = NULL;
    Nodo * fin = NULL;
}

void buscar_FIFO(Nodo *&inicio, Nodo *&fin, int num){//FUNCION PARA BUSCAR EN LA COLA
    bool encontrado=false;
    Nodo *primero=reservar_memoria;
    primero=inicio;

    if(vacia_FIFO(inicio)!=true){
        while (primero!=fin){
        if(primero->dato==num){
            encontrado=true;
            }
            primero=primero->Siguiente;
        }
    }
    if(encontrado){
        printf("\nEl dato %d, se encuentra en la Cola!!",num);
    }else{
        printf("\nEl dato %d, no se encuentra en la Cola!\n",num);
    }
}


