#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string nombre;
    int edad;

public:
    Animal(string nombre, int edad) {
        this->nombre = nombre;
        this->edad = edad;
    }

    virtual void hablar() = 0; // Método virtual puro

    string getNombre() { return nombre; }
    int getEdad() { return edad; }
};
class Perro : public Animal {
public:
    Perro(string nombre, int edad) : Animal(nombre, edad) {}

    void hablar() override { cout << "Woof!" << endl; }
};


class Gato : public Animal{
public:
  Gato(string nombre, int edad) : Animal(nombre, edad) {}

  void hablar() override { cout << "Miau!" << endl; }
};


int main() {
    Perro perro("Toby", 5);
    Gato gato("Misha", 3);

    // Polimorfismo: Se llama al método hablar() de cada objeto
    // según su tipo específico.
    perro.hablar();
    gato.hablar();

    return 0;
}