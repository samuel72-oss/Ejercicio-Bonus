#include <iostream>
int main() {
    int vec[5];
    int suma=0;
    int i=0;
    std::cout<<"Bienvenido al programa que suma"<<std::endl;

    while (i<5) {
        std::cout<<"Ingrese el numero: ";
        std::cin>>vec[i];
        i=i+1;
        }

    i=0;

    while (i<5) {
        suma= suma + vec[i];
        i=i+1;
        }
    std::cout<<"La suma de los numeros ingresados es de: "<<suma<<std::end1;
}