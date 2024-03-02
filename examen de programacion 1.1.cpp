#include <iostream>
#include <string>

// Clase base para objetos en el hospital
class ObjetoHospital {
public:
    ObjetoHospital(const std::string& nombre) : nombre_(nombre) {}

    // Método virtual puro para mostrar información del objeto
    virtual void mostrarInformacion() const = 0;

protected:
    std::string nombre_;
};

// Clase para representar una camilla eléctrica
class CamillaElectrica : public ObjetoHospital {
public:
    CamillaElectrica(const std::string& nombre) : ObjetoHospital(nombre) {}

    // Atributos específicos
    int altura_;
    std::string superficie_;
    bool ruedasConFreno_;
    bool sistemaElevacion_;

    // Método para mostrar información específica de la camilla
    void mostrarInformacion() const override {
        std::cout << "Camilla eléctrica: " << nombre_ << std::endl;
        std::cout << "Altura: " << altura_ << " cm\nSuperficie: " << superficie_
                  << "\nRuedas con freno: " << (ruedasConFreno_ ? "Sí" : "No")
                  << "\nSistema de elevación: " << (sistemaElevacion_ ? "Sí" : "No") << std::endl;
    }
};

// Clase para representar un monitor de signos vitales
class MonitorSignosVitales : public ObjetoHospital {
public:
    MonitorSignosVitales(const std::string& nombre) : ObjetoHospital(nombre) {}

    // Atributos específicos
    bool pantallaTactil_;
    bool conexionInalambrica_;
    bool bateriaRecargable_;
    bool alarmaAjustable_;

    // Método para mostrar información específica del monitor
    void mostrarInformacion() const override {
        std::cout << "Monitor de signos vitales: " << nombre_ << std::endl;
        std::cout << "Pantalla táctil: " << (pantallaTactil_ ? "Sí" : "No")
                  << "\nConexión inalámbrica: " << (conexionInalambrica_ ? "Sí" : "No")
                  << "\nBatería recargable: " << (bateriaRecargable_ ? "Sí" : "No")
                  << "\nAlarma ajustable: " << (alarmaAjustable_ ? "Sí" : "No") << std::endl;
    }
};

// Clase para representar un desfibrilador automático externo (DAE)
class Desfibrilador : public ObjetoHospital {
public:
    Desfibrilador(const std::string& nombre) : ObjetoHospital(nombre) {}

    // Atributos específicos
    bool interfazVoz_;
    bool electrodosAutoadhesivos_;
    bool registroEventos_;
    bool modoManualAutomatico_;

    // Método para mostrar información específica del desfibrilador
    void mostrarInformacion() const override {
        std::cout << "Desfibrilador automático externo (DAE): " << nombre_ << std::endl;
        std::cout << "Interfaz de voz: " << (interfazVoz_ ? "Sí" : "No")
                  << "\nElectrodos autoadhesivos: " << (electrodosAutoadhesivos_ ? "Sí" : "No")
                  << "\nRegistro de eventos: " << (registroEventos_ ? "Sí" : "No")
                  << "\nModo manual y automático: " << (modoManualAutomatico_ ? "Sí" : "No") << std::endl;
    }
};

// Clase para representar una bata de aislamiento
class BataAislamiento : public ObjetoHospital {
public:
    BataAislamiento(const std::string& nombre) : ObjetoHospital(nombre) {}

    // Atributos específicos
    std::string materialImpermeable_;
    bool cierreFrontal_;
    bool mangasElasticas_;
    std::string etiquetaIdentificacion_;

    // Método para mostrar información específica de la bata
    void mostrarInformacion() const override {
        std::cout << "Bata de aislamiento: " << nombre_ << std::endl;
        std::cout << "Material impermeable: " << materialImpermeable_
                  << "\nCierre frontal: " << (cierreFrontal_ ? "Sí" : "No")
                  << "\nMangas elásticas: " << (mangasElasticas_ ? "Sí" : "No")
                  << "\nEtiqueta de identificación: " << etiquetaIdentificacion_ << std::endl;
    }
};

// Clase para representar una jeringa de dosificación automática
class JeringaAutomatica : public ObjetoHospital {
public:
    JeringaAutomatica(const std::string& nombre) : ObjetoHospital(nombre) {}

    // Atributos específicos
    int configuracionDosis_;
    bool pantallaLCD_;
    bool sistemaSeguridad_;
    std::string recipienteDesechable_;

    // Método para mostrar información específica de la jeringa
    void mostrarInformacion() const override {
        std::cout << "Jeringa de dosificación automática: " << nombre_ << std::endl;
        std::cout << "Configuración de dosis: " << configuracionDosis_
                  << "\nPantalla LCD: " << (pantallaLCD_ ? "Sí" : "No")
                  << "\nSistema de seguridad: " << (sistemaSeguridad_ ? "Sí" : "No")
                  << "\nRecipiente desechable: " << recipienteDesechable_ << std::endl;
    }
};

int main() {
    // Ejemplo de uso de las clases
    CamillaElectrica camilla("Camilla A1");
    camilla.altura_ = 80;
    camilla.superficie_ = "Vinilo";
    camilla.ruedasConFreno_ = true;
    camilla.sistemaElevacion_ = true;
    camilla.mostrarInformacion();

    MonitorSignosVitales monitor("Monitor V2");
    monitor.pantallaTactil_ = true;
    monitor.conexionInalambrica_ = true;
    monitor.bateriaRecargable_ = true;
    monitor.alarmaAjustable_ = true;
    monitor.mostrarInformacion();

    Desfibrilador desfibrilador("DAE X3");
    desfibrilador.interfazVoz_ = true;
    desfibrilador.electrodosAutoadhesivos_ = true;
    desfibrilador.registroEventos_ = true;
    desfibrilador.modoManualAutomatico_ = true;
    desfibrilador.mostrarInformacion();

    BataAislamiento bata("Bata Z5");
    bata.materialImpermeable_ = "Polietileno";
    bata.cierreFrontal_ = true;
    bata.mangasElasticas_ = true;
    bata.etiquetaIdentificacion_ = "Paciente A";
    bata.mostrarInformacion();

    JeringaAutomatica jeringa("Jeringa M8");
    jeringa.configuracionDosis_ = 10;
    jeringa.pantallaLCD_ = true;
    jeringa.sistemaSeguridad_ = true;
    jeringa.recipienteDesechable_ = "Plástico";
    jeringa.mostrarInformacion();

    return 0;
}
