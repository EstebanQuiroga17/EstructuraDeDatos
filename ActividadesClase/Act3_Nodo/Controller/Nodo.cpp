#include "../Model/Nodo.h"

Persona Nodo::getPersona(void)
{
   return persona;
}

void Nodo::setPersona(Persona newPersona)
{
   persona = newPersona;
}

Nodo* Nodo::getSiguiente(void)
{
   return siguiente;
}

void Nodo::setSiguiente(Nodo* newSiguiente)
{
   siguiente = newSiguiente;
}

Nodo::Nodo()
{
}

Nodo::~Nodo()
{
   // TODO : implement
}