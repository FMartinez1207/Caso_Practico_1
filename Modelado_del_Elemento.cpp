#include<iostream>

struct Elemento{
    int codigoElemento;
    std::string nombreElemento;
    float longitud;
    float cargas[3];
    float capacidadMaxima;
    int capacidad[10] = {1,2,3,4,5,6,7,8,9,10};
    float factorUtilizacion;
    float estadoSeguridad;
};

void registrarElemento(Elemento &elemento);
float calcularFactor(Elemento *elemento);

int main(){
    Elemento elemento;

    registrarElemento(elemento);
    calcularFactor(&elemento);

    return 0;
}

void registrarElemento(Elemento &elemento){
    int cantidad;

    std::cout<<"\nIngrese la cantidad de elementos que desea registrar (max 10): ";
    std::cin>>cantidad;

    if(cantidad < elemento.capacidad[0]){
        std::cout<<"Dato invalido\n";
    }else if(cantidad > elemento.capacidad[9]){
        std::cout<<"El dato ingresado supera la capacidad maxima de elementos\n";
    }else{
        for(int i = 0; i < cantidad; i++){
            std::cout<<"\n--------------------------------------------------\n";
            std::cout<<"\nIngrese los datos del elemento\n\n";
            std::cout<<"Codigo: ";
            std::cin>>elemento.codigoElemento;
            std::cout<<std::endl;
            std::cout<<"Nombre: ";
            std::cin>>elemento.nombreElemento;
            std::cout<<std::endl;
            std::cout<<"Longitud: ";
            std::cin>>elemento.longitud;
            std::cout<<std::endl;
            
            for(int j = 0; j < 3; j++){
                std::cout<<"Carga "<<(j + 1)<<": ";
                std::cin>>elemento.cargas[j];
                std::cout<<std::endl;
            }

            std::cout<<"Capacidad maxima: ";
            std::cin>>elemento.capacidadMaxima;
        }
    }
}

float calcularFactor(Elemento *elemento){
    float cargaPromedio;

    for(int i = 0; i < 3; i++){
        cargaPromedio += elemento->cargas[i];
    }

    elemento->factorUtilizacion = cargaPromedio / elemento->capacidadMaxima;

    return elemento->factorUtilizacion;
}