
#include "../model/Anio.h"
#include "../model/ValidarDatos.h"


bool Anio::getAnioBisiesto(void)
{
   return anioBisiesto;
}

void Anio::setAnioBisiesto(bool newAnioBisiesto)
{
   anioBisiesto = newAnioBisiesto;
}

int Anio::getAnio(void){
    return anio;
}

void Anio::setAnio(int newAnio){
    anio = newAnio;
}

Anio::Anio(int valorAnio)
{
  anio = valorAnio;
  ValidarDatos::validarAnioBisiesto(valorAnio);
}

Anio::Anio()
{

}

Anio::~Anio()
{
   // TODO : implement
}
