#include <iostream>
using namespace std;
//test 
class Nodo {
public:
    enum terreno {
        ALTOS_CALIDOS,
        LOMAS_MANSAS,
        LLANOS_OPACOS,
        ZONAS_PROFUNDAS
    };

    enum estado {
        NORMAL,
        FERTIL,
        LETAL,
        CORRUPTO
    };

private:
    int x, y;
    terreno tipo;
    estado estadoActual;
    int ciclos_ocupado;
    bool iluminado;

public:
    Nodo() = default;

#include <iostream>
    using namespace std;

    class Nodo {
    public:
        enum terreno {
            ALTOS_CALIDOS,
            LOMAS_MANSAS,
            LLANOS_OPACOS,
            ZONAS_PROFUNDAS
        };

        enum estado {
            NORMAL,
            FERTIL,
            LETAL,
            CORRUPTO
        };

    private:
        int x, y;
        terreno tipo;
        estado estadoActual;
        int ciclos_ocupado;
        bool iluminado;

    public:
        Nodo() = default;

        Nodo(int x, int y): x(x), y(y), tipo(tipo), estadoActual(NORMAL),
                            ciclos_ocupado(0), iluminado(false) {
        }

        int get_x() const {
            return x;
        }

        void set_x(int x) {
            this->x = x;
        }

        int get_y() const {
            return y;
        }

        void set_y(int y) {
            this->y = y;
        }

        terreno get_tipo() const {
            return tipo;
        }

        void set_tipo(const terreno &tipo) {
            this->tipo = tipo;
        }

        estado get_estado_actual() const {
            return estadoActual;
        }

        void set_estado_actual(estado &estado_actual) {
            estadoActual = estado_actual;
        }

        int get_ciclos_ocupado() const {
            return ciclos_ocupado;
        }

        void set_ciclos_ocupado(int ciclos_ocupado) {
            this->ciclos_ocupado = ciclos_ocupado;
        }

        bool is_iluminado() const {
            return iluminado;
        }

        void set_iluminado(bool iluminado) {
            this->iluminado = iluminado;
        }


        ~Nodo() = default;
    };

    int main() {
        return 0;
    }

    Nodo(int x, int y): x(x), y(y), tipo(tipo), estadoActual(NORMAL),
                        ciclos_ocupado(0), iluminado(false) {
    }

    int get_x() const {
        return x;
    }

    void set_x(int x) {
        this->x = x;
    }

    int get_y() const {
        return y;
    }

    void set_y(int y) {
        this->y = y;
    }

    terreno get_tipo() const {
        return tipo;
    }

    void set_tipo(const terreno &tipo) {
        this->tipo = tipo;
    }

    estado get_estado_actual() const {
        return estadoActual;
    }

    void set_estado_actual(estado &estado_actual) {
        estadoActual = estado_actual;
    }

    int get_ciclos_ocupado() const {
        return ciclos_ocupado;
    }

    void set_ciclos_ocupado(int ciclos_ocupado) {
        this->ciclos_ocupado = ciclos_ocupado;
    }

    bool is_iluminado() const {
        return iluminado;
    }

    void set_iluminado(bool iluminado) {
        this->iluminado = iluminado;
    }

    bool es_transitable() const {
        return estadoActual != LETAL;
    }

    bool es_fertil() const {
        return estadoActual == FERTIL;
    }
    ~Nodo() = default;
};

int main() {
    return 0;
}
