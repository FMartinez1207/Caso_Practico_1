#include<iostream>

struct Elemento{
    int codigoElemento;
    std::string nombreElemento;
    float longitud;
    float cargas[3];
    int capacidad[10];
    float factorUtilizacion;
    float estadoSeguridad;
};

void registrarElemento(Elemento &elemento);

int main(){
    Elemento elemento;

    registrarElemento(elemento);

    return 0;
}

void registrarElemento(Elemento &elemento){
    int n;

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
    
    for(int i = 0; i < 3; i++){
        std::cout<<"Carga "<<(i + 1)<<": ";
        std::cin>>elemento.cargas[i];
        std::cout<<std::endl;
    }

    std::cout<<"Capacidad maxima: ";
    std::cin>>elemento.capacidad[n];
}