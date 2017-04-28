#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define reservar_memoria (Nodo *)malloc(sizeof(Nodo))

using namespace std;

struct Nodo{
    int dato;
    Nodo *Siguiente;
};

    Nodo * pila;
    Nodo * inicio;
    Nodo * fin;

void iniciar_LIFO();//FUNCION PAR AINICIALIZAR LA PILA EN NULL
void ins_LIFO(Nodo *&, int);//FUNCION PARA INSERTAR ELEMENTOS EN LISTA LIFO
void most_LIFO();//FUNCION PARA MOSTRAR ELEMENTOS DE LA PILA
void buscar_LIFO(Nodo *, int);//FUNCION PARA BUSCAR EN LA PILA
void quit_LIFO(Nodo *&, int &);//FUNCION PARA LIMPIAR PILA
bool vacia_LIFO(Nodo *&);//FUNCION PARA VALIDAR SI LA PILA ESTA VACIA
void elim_LIFO();//FUNCION PARA VACIAR LA PILA EN NULL
void mod_LIFO();//FUNCION PARA MODIFICAR ELEMENTOS DE LA PILA

void iniciar_FIFO();//FUNCION PAR AINICIALIZAR LA COLA EN NULL
void ins_FIFO(Nodo *&, Nodo *&, int );//FUNCION PARA INSERTAR ELEMENTOS A LA COLA
void most_FIFO();//FUNCION PARA MOSTRAR ELEMENTOS DE LA COLA
void buscar_FIFO();//FUNCION PARA BUSCAR EN LA COLA
void quit_FIFO();//FUNCION PARA LIMPIAR COLA
bool vacia_FIFO(Nodo *&);//FUNCION PARA VALIDAR SI LA PILA ESTA COLA
void elim_FIFO();//FUNCION PARA VACIAR LA COLA EN NULL
void edit_elemento_FIFO();//FUNCION PARA EDITAR ELEMENTO DE LA COLA

void iniciar_CIRC();//FUNCION PARA INICIALIZAR LA COLA EN NULL
void ins_CIRC(Nodo *&, Nodo *&, int );//FUNCION PARA INSERTAR ELEMENTOS A LA COLA
void most_CIRC(Nodo *);//FUNCION PARA MOSTRAR ELEMENTOS DE LA COLA
bool buscar_CIRC(Nodo *&, Nodo *&, int );//FUNCION PARA BUSCAR EN LA COLA
void quit_CIRC(Nodo *&, Nodo *&, int &);//FUNCION PARA LIMPIAR COLA
bool vacia_CIRC(Nodo *&);//FUNCION PARA VALIDAR SI LA PILA ESTA COLA
void elim_CIRC();//FUNCION PARA VACIAR LA COLA EN NULL
bool elim_elemento_CIRC(Nodo *&, Nodo *&, int );//FUNCION PARA ELIMINAR ELEMENTO DE LA COLA
bool edit_elemento_CIRC(Nodo *&, Nodo *&, int );//FUNCION PARA EDITAR ELEMENTO DE LA COLA

int main(){
    char opc_mp;
    int n,opc_sm,dbusc, val;
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
                        }else{
                            if(n==0){
                                printf("\nDesea ingresar este elemento a la Pila? |1|-SI o |2|-NO ");
                                scanf("%d",&val);
                                if(val==1){
                                    ins_LIFO(pila,n);
                                    n=1;
                                    printf("\nContinue Registrando valores!!\n\n");
                                }else{
                                    n=0;
                                }
                            }

                        }
                    }
                    printf("\n\n");
                    break;
                case 3:
                    printf("\n 1. MOSTRAR EL PRIMER ELEMENTO ");
                    printf("\n 2. MOSTRAR EL fin ELEMENTO ");
                    printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                    printf("\n Ingrese una opcion: ");
                    scanf("%d", &opc_sm);
                    switch(opc_sm){
                    case 1: printf("\n El primer elemento es: <<%d>> \n",pila->dato);
                        break;
                    case 2:
                        while(pila!=NULL){
                                n=pila->dato;
                            if(pila->Siguiente==NULL){
                                printf("\n El fin elemento es %d \n",n);
                                pila=pila->Siguiente;
                            }else{pila=pila->Siguiente;}
                        }
                        break;
                    case 3:
                        printf("\nMOSTRAR TODOS LOS ELEMENTOS \n\n");
                        printf("\nLa lista LIFO contiene los Siguientes elementos: \n\n");
                        most_LIFO();
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
                   mod_LIFO();
                    break;
                case 7:
                    printf("\nELIMINAR ELEMENTOS\n\n");
                    if(pila!=NULL){
                        pila=NULL;
                        printf("\n\nElementos de la Pila eliminados Correctamente!");
                    }else{
                            printf("\nLa Pila Ya se encuentra vacia!!");
                    }
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
                            }else{
                            if(n==0){
                                printf("\nDesea ingresar este elemento a la Pila? |1|-SI o |2|-NO ");
                                scanf("%d",&val);
                                if(val==1){
                                    ins_FIFO(inicio,fin,n);
                                    n=1;
                                    printf("\nContinue Registrando valores!!\n\n");
                                }else{
                                    n=0;
                                }
                            }

                        }
                        }
                        printf("\nDatos ingresados correctamente!!\n\n");
                        break;
                case 3:
                        printf("\n 1. MOSTRAR EL PRIMER ELEMENTO ");
                        printf("\n 2. MOSTRAR EL fin ELEMENTO ");
                        printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);
                        switch(opc_sm){
                        case 1: printf("\n El primer elemento es: <<%d>> \n",inicio->dato);
                            break;
                        case 2:
                            while(inicio!=NULL){
                                    n=inicio->dato;
                                if(inicio->Siguiente==NULL){
                                    printf("\n El fin elemento es %d \n",n);
                                    inicio=inicio->Siguiente;
                                }else{inicio=inicio->Siguiente;}
                            }
                            break;
                        case 3:
                            printf("\nMOSTRAR TODOS LOS ELEMENTOS \n\n");
                            printf("\nLa lista LIFO contiene los Siguientes elementos: \n\n");
                            most_FIFO();
                            break;
                        default: printf("\n Ingreso una opcion invalida!!! \n\n");
                        }
                        break;
                    case 4:printf("\n\t\t BUSCAR ELEMENTOS EN FIFO\n");
                            buscar_FIFO();
                        break;
                    case 5:printf("\n\t\t ELIMINAR ELEMENTO EN FIFO\n");
                           quit_FIFO();
                        break;
                    case 6:printf("\n\t\t EDITAR ELEMENTO EN FIFO\n");
                            edit_elemento_FIFO();
                        break;
                    case 7:printf("\n\t\t VACIAR ELEMENTOS DE FIFO\n");
                            elim_FIFO();

                        break;
                    case 8:
                        printf("\nLIFO VACIA\n\n");
                        if(vacia_LIFO(pila)){
                            printf("\nLa lista FIFO esta vacia!\n\n");
                        }else{
                            printf("\nLa lista FIFO  no esta vacia! ((%d))\n\n",pila->dato);
                        }
                        break;
                    case 9:printf("\nELIMINAR FIFO\n\n");
                        elim_FIFO();
                        printf("\nLa FIFO ha sido eliminada correctamente!!");
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
                        printf("\n\t\t CREAR LISTA CIRCULAR\n");
                        iniciar_CIRC();
                        printf("\nLista Cicular creada e iniciada exitosamente!\n");
                        break;
                    case 2:
                        printf("\n 1. AL INICIO ");
                        printf("\n 2. AL FINAL ");
                        printf("\n 3. DESPUES DE UN Nodo ");
                        printf("\n 4. ANTES DE UN Nodo ");
                        printf("\n 5. EN MEDIO DE DOS NodoS ");
                        printf("\n 6. EN FORMA ASCENDENTE ");
                        printf("\n 7. EN FORMA DESCENDENTE ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);

                        switch(opc_sm){
                        case 1:
                            printf("\n\t\t INSERTAR VALOR AL INICIO\n");
                            printf("\nDigite un valor numerico (Digite <0> para detener el ingreso: \n");
                            while(n!=0){
                                scanf("%d",&n);
                                if(inicio==NULL && fin==NULL){
                                    ins_CIRC(inicio,fin,n);
                                    inicio=inicio->Siguiente;
                                    printf("\n\nValor ingresado correctamente!\n");
                                }else{
                                    printf("\nNo es posible agregar valor, el principio no esta vacio!!\n\n");
                                }
                            }
                            break;
                        case 2:
                            printf("\n\t\t INSERTAR VALOR AL FINAL\n");
                            printf("\nDigite un valor numerico (Digite <0> para detener el ingreso: \n");
                            while(n!=0){
                                scanf("%d",&n);
                                if(inicio->Siguiente == fin){
                                    ins_CIRC(inicio,fin,n);
                                    inicio=inicio->Siguiente;
                                    printf("\n\nValor ingresado correctamente!\n");
                                }else{
                                    printf("\nNo es posible agregar valor, el principio no esta vacio!!\n\n");
                                }
                            }
                            break;
                        case 3:
                            printf("\n\t\t INSERTAR VALOR DESPUES DE UN Nodo\n");
                            printf("\nDigite un valor numerico (Digite <0> para detener el ingreso: \n");
                            while(n!=0){
                                while(inicio!=NULL){
                                    scanf("%d",&n);
                                    if(inicio->Siguiente==NULL ){
                                        ins_CIRC(inicio,fin,n);
                                        inicio=inicio->Siguiente;
                                        printf("\n\nValor ingresado correctamente!\n");
                                    }else{
                                        printf("\nNo es posible agregar valor, vuelva a intentar!!\n\n");
                                        inicio=inicio->Siguiente;
                                    }
                                }
                            }
                            break;
                        case 4:
                            printf("\n\t\t INSERTAR VALOR ANTES DE UN Nodo\n");
                            printf("\nDigite un valor numerico (Digite <0> para detener el ingreso: \n");
                            while(n!=0){
                                while(inicio!=NULL){
                                    if(inicio->Siguiente==NULL){
                                        scanf("%d",&n);
                                        inicio->dato=n;
                                        inicio=inicio->Siguiente;
                                        printf("\n\nValor ingresado correctamente!\n");
                                    }else{
                                        printf("\nNo es posible agregar valor, vuelva a intentar!!\n\n");
                                        inicio=inicio->Siguiente;
                                    }
                                }
                            }
                            break;
                        case 5:
                            printf("\n\t\t INSERTAR VALOR ASCENDENTEMENTE\n");
                            printf("\nDigite un valor numerico (Digite <0> para detener el ingreso: \n");
                            while(n!=0){
                                while(inicio!=NULL){
                                    scanf("%d",&n);
                                    if(inicio->Siguiente==NULL ){
                                        ins_CIRC(inicio,fin,n);
                                        inicio=inicio->Siguiente;
                                        printf("\n\nValor ingresado correctamente!\n");
                                    }else{
                                        printf("\nNo es posible agregar valor, vuelva a intentar!!\n\n");
                                        inicio=inicio->Siguiente;
                                    }
                                }
                            }
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
                        printf("\n 2. MOSTRAR EL fin ELEMENTO ");
                        printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                        printf("\n 4. MOSTRAR EL ANTERIOR ELEMENTOS A UN Nodo DADO ");
                        printf("\n Ingrese una opcion: ");
                        scanf("%d", &opc_sm);
                        switch(opc_sm){
                        case 1:
                            printf("\n\nEl primer elemento es: <%d>",inicio->dato);
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
                        printf("\n 3. DESPUES DE UN Nodo ");
                        printf("\n 4. ANTES DE UN Nodo ");
                        printf("\n 5. EN MEDIO DE DOS NodoS ");
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
                        printf("\n 2. MOSTRAR EL fin ELEMENTO ");
                        printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                        printf("\n 4. MOSTRAR EL ANTERIOR ELEMENTOS A UN Nodo DADO ");
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
                        printf("\n 3. DESPUES DE UN Nodo ");
                        printf("\n 4. ANTES DE UN Nodo ");
                        printf("\n 5. EN MEDIO DE DOS NodoS ");
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
                        printf("\n 2. MOSTRAR EL fin ELEMENTO ");
                        printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                        printf("\n 4. MOSTRAR EL ANTERIOR ELEMENTOS A UN Nodo DADO ");
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
                        printf("\n 3. DESPUES DE UN Nodo ");
                        printf("\n 4. ANTES DE UN Nodo ");
                        printf("\n 5. EN MEDIO DE DOS NodoS ");
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
                        printf("\n 2. MOSTRAR EL fin ELEMENTO ");
                        printf("\n 3. MOSTRAR TODOS LOS ELEMENTOS ");
                        printf("\n 4. MOSTRAR EL ANTERIOR ELEMENTOS A UN Nodo DADO ");
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

void iniciar_LIFO(){//FUNCION PAR AINICIALIZAR LA PILA EN NULL (OK)
    Nodo * pila = NULL;
}
void ins_LIFO(Nodo *&pila, int n){//FUNCION INSERTAR ELEMENTOS EN PILA (OK)
    Nodo *nuevo_Nodo = reservar_memoria;
    nuevo_Nodo->dato=n;
    nuevo_Nodo->Siguiente=pila;
    pila= nuevo_Nodo;
}
void most_LIFO(){//FUNCION PARA MOSTRAR ELEMENTOS DE LA PILA
    Nodo * aux = reservar_memoria;
    aux = pila;
    if(pila != NULL){
        while(aux != NULL){
            printf("<%d>", aux->dato);
            aux=aux->Siguiente;
        }
    }else{
        printf("\n\nPila Vacia!!!");
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
    Nodo* aux = reservar_memoria;
    aux = pila;
    int nodo_consultado=0, encontrado=0;
    printf("\nDigite Dato a consultar: ");
    scanf("%d", &nodo_consultado);
    if(pila != NULL){
        while(aux != NULL){
            if(aux->dato == nodo_consultado){
                printf("\nEl Dato ( %d ) - Se encuentra en la Pila\n", nodo_consultado);
                encontrado = 1;
            }
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Dato ( %d ) - No se encuentra en la Pila\n", nodo_consultado);
        }
    }else{
        printf("\nPila Vacia\n");
    }
}
void mod_LIFO(){
    Nodo* aux = reservar_memoria;
    aux = pila;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite valor a buscar para editar: ");
    scanf("%d", &nodo_consultado);
    if(pila != NULL){
        while(aux != NULL){
            if(aux->dato == nodo_consultado){
                printf("\nEl Dato ( %d ) - Se encuentra en la Pila\n", nodo_consultado);
                printf("\nDigite Nuevo Dato: ");
                scanf("%d", &aux->dato);
                printf("\n\nNodo modificado Correctamente\n");
                encontrado = 1;
            }
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Dato ( %d ) - No se encuentra en la Pila\n", nodo_consultado);
        }
    }else{
        printf("\nPila Vacia\n");
    }
}


void iniciar_FIFO(){//FUNCION PARA INICIALIZAR LA COLA EN NULL
    Nodo * inicio = NULL;
    Nodo * fin = NULL;
}
void ins_FIFO(Nodo *&inicio, Nodo *&fin, int num){//FUNCION PARA INSERTAR ELEMENTOS A LA COLA
    Nodo *nuevo_Nodo = reservar_memoria;
    nuevo_Nodo -> dato = num;
    nuevo_Nodo -> Siguiente = NULL;
    if((vacia_FIFO(inicio))){
        inicio = nuevo_Nodo;
    }else{
        fin -> Siguiente = nuevo_Nodo;
    }
    fin = nuevo_Nodo;
}
void most_FIFO(){//FUNCION PARA MOSTRAR ELEMENTOS DE LA COLA
    Nodo *aux = reservar_memoria;
    aux = inicio;
    if(inicio!= NULL){
        while(aux != NULL){
            printf("\n     %d", aux -> dato);
            aux = aux -> Siguiente;
        }
    }else{
        printf("\n\nCola Vacia!\n");
    }
}
void quit_FIFO(){//FUNCION PARA LIMPIAR COLA
    Nodo * aux = reservar_memoria;
    aux = inicio;
    Nodo * anterior = reservar_memoria;
    anterior = NULL;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite Dato a Eliminar: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL && encontrado != 1){
            if(aux->dato == nodo_consultado){
                if(aux == inicio){
                    inicio = inicio -> Siguiente;
                }else{
                    anterior -> Siguiente = aux -> Siguiente;
                }
                printf("\nDato Eliminado Con Exito!!\n");
                encontrado = 1;
            }
            anterior = aux;
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Dato No Ha Sido Encontrado\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\nCola Vacia!!\n");
    }
}
bool vacia_FIFO(Nodo *&inicio){//FUNCION PARA VALIDAR SI LA COLA ESTA VACIA
    return (inicio==NULL)?true: false;
}
void elim_FIFO(){//FUNCION PARA VACIAR LA COLA EN NULL
    Nodo * inicio = NULL;
    Nodo * fin = NULL;
}
void buscar_FIFO(){//FUNCION PARA BUSCAR EN LA COLA
    Nodo *aux = reservar_memoria;
    aux = inicio;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite Valor a Consultar: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL){
            if(aux->dato == nodo_consultado){
                printf("\nEl Dato ( %d ) - Se Ha Encontrado!!\n", nodo_consultado);
                encontrado = 1;
            }
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nValor (%d) No Encontrado\n",nodo_consultado);
        }
    }else{
        printf("\nCola Vacia\n");
    }
}
void edit_elemento_FIFO(){//FUNCION PARA EDITAR ELEMENTO DE LA COLA
    Nodo* aux = reservar_memoria;
    aux = inicio;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite Valor a consultar para editar: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL){
            if(aux->dato == nodo_consultado){
                printf("\nEl Valor ( %d ) - Se ha encontrado\n\n", nodo_consultado);
                printf("\nDigite Nuevo Dato: ");
                scanf("%d", &aux->dato);
                printf("\nValor modificado correctamente\n");
                encontrado = 1;
            }
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Dato no ha sido encontrado\n");
        }
    }else{
        printf("\nCola Vacia\n");
    }
}

void iniciar_CIRC(){//FUNCION PARA INICIALIZAR LA COLA EN NULL
    Nodo * inicio = NULL;
    Nodo * fin = NULL;

}
void ins_CIRC(Nodo *&inicio, Nodo *&fin, int num){//FUNCION PARA INSERTAR ELEMENTOS A LA COLA
    Nodo *nuevo_Nodo = reservar_memoria;
    nuevo_Nodo -> dato = num;
    nuevo_Nodo -> Siguiente = NULL;
    if(vacia_CIRC(inicio)){
        inicio = nuevo_Nodo;
    }else{
        fin -> Siguiente = nuevo_Nodo;
    }
    fin = nuevo_Nodo;
}
void most_CIRC(Nodo *inicio){//FUNCION PARA MOSTRAR ELEMENTOS DE LA COLA
    while(vacia_LIFO(inicio)!=true){
        printf("<%d>, ",inicio->dato);
        inicio=inicio->Siguiente;

    }
}
void quit_CIRC(Nodo *&inicio, Nodo *&fin, int &num){//FUNCION PARA LIMPIAR COLA
    num = inicio -> dato;
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
bool vacia_CIRC(Nodo *&inicio){//FUNCION PARA VALIDAR SI LA COLA ESTA VACIA
    return (inicio==NULL)?true: false;
}
void elim_CIRC(){//FUNCION PARA VACIAR LA COLA EN NULL
    Nodo * inicio = NULL;
    Nodo * fin = NULL;
}
bool buscar_CIRC(Nodo *&inicio, Nodo *&fin, int num){//FUNCION PARA BUSCAR EN LA COLA
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
    return encontrado;
}

void ins_LISTA(){
    Nodo* nuevo = reservar_memoria;
    printf("\n\nDigite Dato a Ingresar en la Lista: ");
    scanf("%d", &nuevo->dato);
    if(inicio == NULL){
        inicio = nuevo;
        inicio -> Siguiente = NULL;
        fin = nuevo;
    }else{
        fin -> Siguiente = nuevo;
        nuevo -> Siguiente = NULL;
        fin = nuevo;
    }
    printf("\nIngreso Exitoso\n");
}

void most_Lista(){
    Nodo* aux = reservar_memoria;
    aux = inicio;
    if(inicio != NULL){
        while(aux != NULL){
            printf("\n     %d", aux -> dato);
            aux = aux -> Siguiente;
        }
    }else{
        printf("\n\nLista Vacia");
    }
}

void busc_LISTA(){//
    Nodo* aux = reservar_memoria;
    aux = inicio;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite Dato a Consultar: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL){
            if(aux->dato == nodo_consultado){
                printf("\nEl Valor ( %d ) - Se encuentra en la Lista\n", nodo_consultado);
                encontrado = 1;
            }
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Valor nos e encuentra en la lista\n");
        }
    }else{
        printf("\nLA Lista Vacia!!\n");
    }
}

void edit_LISTA(){//FUNCION PARA EDITAR LOS ELEMENTOS DE UNA LISTA
    Nodo* aux = reservar_memoria;
    aux = inicio;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nDigite dato a buscar en la lista para ser modificado: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL){
            if(aux->dato == nodo_consultado){
                printf("\nDato Encontrado ( %d )\n", nodo_consultado);
                printf("\nDigite nuevo Dato: ");
                scanf("%d", &aux->dato);
                printf("\nModificado Exitosamente\n");
                encontrado = 1;
            }
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl dato no se encuentra en la lista\n");
        }
    }else{
        printf("\nLista Vacia\n");
    }
}

void elim_elemento_LISTA(){//FUNION PARA ELIMINAR ELEMENTOS DE UNA LISTA
    Nodo* aux = reservar_memoria;
    aux = inicio;
    Nodo* anterior = reservar_memoria;
    anterior = NULL;
    int nodo_consultado = 0, encontrado = 0;
    printf("\nIngrese dato a buscar para eliminar: ");
    scanf("%d", &nodo_consultado);
    if(inicio != NULL){
        while(aux != NULL && encontrado != 1){
            if(aux->dato == nodo_consultado){
                if(aux == inicio){
                    inicio = inicio -> Siguiente;
                }else{
                    anterior -> Siguiente = aux -> Siguiente;
                }
                printf("\nSe ha encontrado el dato\n");
                encontrado = 1;
            }
            anterior = aux;
            aux = aux -> Siguiente;
        }
        if(encontrado == 0){
            printf("\nEl Dato no se encontra\n");
        }else{
            free(anterior);
        }
    }else{
        printf("\nLista Vacia!!\n");
    }
}
