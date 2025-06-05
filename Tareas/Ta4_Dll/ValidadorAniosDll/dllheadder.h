#ifndef dllheadder_H
#define dllheadder_H

namespace dllspec{
class ValidadorDatos{
public:
    static __declspec(dllexport) int validarNumeros(char msj[20]);
    static __declspec(dllexport) bool validarAnioBisiesto(int anio);
    static __declspec(dllexport) int validarMes(int mes, int anio);
    static __declspec(dllexport) bool validarDia(int dia, int mes);
};
}

#endif 
