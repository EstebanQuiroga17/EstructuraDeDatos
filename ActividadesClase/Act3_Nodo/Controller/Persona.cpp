
#include <string>
#include "../Model/Persona.h"
using namespace std;

Persona::Persona()
{
}


Persona::~Persona()
{
   // TODO : implement
}



int Persona::getIdPersona(void)
{
   return idPersona;
}

void Persona::setIdPersona(int newIdPersona)
{
   idPersona = newIdPersona;
}


std::string Persona::getCedula(void)
{
   return cedula;
}


void Persona::setCedula(std::string newCedula)
{
   cedula = newCedula;
}

std::string Persona::getNombre(void)
{
   return nombre;
}


void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}


std::string Persona::getApellido(void)
{
   return apellido;
}

void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}


std::string Persona::getSegundoNombre(void)
{
    return segundoNombre;
}

void Persona::setSegundoNombre(std::string newSegundoNombre)
{
    segundoNombre = newSegundoNombre;
}


std::string Persona::getCorreo(void)
{
   return correo;
}

void Persona::setCorreo(std::string newCorreo)
{
   correo = newCorreo;
}