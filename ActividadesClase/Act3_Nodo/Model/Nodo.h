

#if !defined(__Templates_Nodo_h)
#define __Templates_Nodo_h

#include "Persona.h"

class Nodo
{
public:
   Persona getPersona(void);
   void setPersona(Persona newPersona);
   Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);
   Nodo();
   ~Nodo();

protected:
private:
   Persona persona;
   Nodo* siguiente;


};

#endif