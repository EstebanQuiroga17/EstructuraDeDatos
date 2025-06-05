
#if !defined(__Class_Diagram_2_Fecha_h)
#define __Class_Diagram_2_Fecha_h

#include "Anio.h"

class Fecha
{
public:
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   Anio getAnio(void);
   void setAnio(Anio newAnio);
   void imprimir();
   Fecha siguienteDia(int diasDelMes);
   Fecha(Anio newAnio,int newMes, int newDia);
   ~Fecha();

protected:
private:
   int dia;
   int mes;
   Anio anio;


};

#endif
