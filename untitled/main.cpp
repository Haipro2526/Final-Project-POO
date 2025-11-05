#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class humano {
private:
    string name;
    int age;
    int id;
public:
    humano():name("n/a"),age(0),id(0){}
    humano(const string &name, int age, int id): name(name),age(age),id(id) {}
    void mostrar() {
        cout<<"Nombre: "<<name<<"\n"
        <<"Edad: "<<age<<"\n"
        <<"Documento de indentidad: "<<id<<endl;
    }



};

class samuel:public humano {

};



int main() {
humano h;
    h.mostrar();
}
