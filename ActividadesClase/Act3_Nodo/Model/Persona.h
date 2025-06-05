

#if !defined(__Templates_Persona_h)
#define __Templates_Persona_h
#include <string>
class Persona
{
public:
   Persona();
   ~Persona();
   int getIdPersona(void);
   void setIdPersona(int newIdPersona);
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   std::string getSegundoNombre(void);
   void setSegundoNombre(std::string newSegundoNombre);
   std::string getCorreo(void);
   void setCorreo(std::string newCorreo);

protected:
private:
   int idPersona;
   std::string cedula;
   std::string nombre;
   std::string segundoNombre;
   std::string apellido;
   std::string correo;


};

#endif