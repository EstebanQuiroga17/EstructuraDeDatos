#include "../Model/Nodo.h"
#include "../Model/Persona.h"
#include "../libs/json.hpp"
#include <iostream>
#include <string>
#include <fstream>
using json = nlohmann::json;
using namespace std;

int main(){
    Nodo primerNodo;
    Persona persona;
    int id;
    string cedula;
    string nombre;
    string segundoNombre;
    string apellido;
    string correo;

    cout<<"Ingrese el ID de la persona: "<<endl;
    cin>>id;
    persona.setIdPersona(id);
    cout<<"Ingrese la cedula de la persona: "<<endl;
    cin>>cedula;
    persona.setCedula(cedula);
    cout<<"Ingrese el nombre de la persona: "<<endl;
    cin>>nombre;
    persona.setNombre(nombre);
    cout<<"Ingrese el segundo nombre de la persona: "<<endl;
    cin>>segundoNombre;
    persona.setSegundoNombre(segundoNombre);   

    std::ifstream archivo("utils/Persona.json");
    json j;

    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo Persona.json" << std::endl;
        return 1;
    }

    archivo.seekg(0, std::ios::end);
    if (archivo.tellg() == 0) {
        j["personas"] = json::array();
        archivo.close();
    } else {        
        archivo.seekg(0, std::ios::beg);
        archivo >> j;
        archivo.close();
    }

    char primerCaracter = nombre[0];
    char segundoCaracter = segundoNombre[0];
    bool correoExiste;
    int i=0;

    do {
        correo = string(1, primerCaracter) + string(1, segundoCaracter);
        if (i > 0) {
            correo += to_string(i);
        }
        correo += "@espe.edu.ec";
        correoExiste = false;
        for (const auto& personaJson : j["personas"]) {
            if (personaJson["correo"] == correo) {
                correoExiste = true;
                break;
            }
        }
        i++;
    } while (correoExiste);

    persona.setCorreo(correo);
    cout<<"El correo generado es: "<<correo<<endl;

    
    json nuevaPersona = {
        {"idPersona", persona.getIdPersona()},
        {"cedula", persona.getCedula()},
        {"nombre", persona.getNombre()},
        {"segundoNombre", persona.getSegundoNombre()},
        {"apellido", persona.getApellido()},
        {"correo", persona.getCorreo()}
    };


    j["personas"].push_back(nuevaPersona);

    std::ofstream archivoSalida("utils/Persona.json");
    if (!archivoSalida.is_open()) {
        std::cerr << "Error: No se pudo abrir el archivo para escritura" << std::endl;
        return 1;
    }
    archivoSalida << j.dump(4); 
    archivoSalida.close();
    
    std::cout << "Datos guardados exitosamente en el archivo." << std::endl;

}