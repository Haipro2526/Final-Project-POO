#include <iostream>
#include <string>
using namespace std;

struct Pasiente {
    string name[100];
    int age;
};
void menu(){
    cout<<"1. Add a new user"<<endl;
    cout<<"2. View all users"<<endl;
    cout<<"3. Exit"<<endl;
    return;
}
int main() {
    Pasiente pasiente;
    int opcion,n=0,a=0;
    menu();

        do {
            cin>>opcion;
            if (opcion ==1) {
                pasiente.name[n++];
                

            }


            if (opcion==2) {
                for (int i=0;i<n;i++) {
                    cout<<pasiente.name[i]<<endl;
                }
            }
        }while (opcion!=3);
}