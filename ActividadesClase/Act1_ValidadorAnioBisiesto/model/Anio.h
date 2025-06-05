
#if !defined(__Class_Diagram_2_Anio_h)
#define __Class_Diagram_2_Anio_h

class Anio
{
public:
   bool getAnioBisiesto(void);
   void setAnioBisiesto(bool newAnioBisiesto);
   int getAnio(void);
   void setAnio(int anio);
   Anio(int valorAnio);
   Anio();
   ~Anio();

protected:
private:
   bool anioBisiesto;
   int anio;

};

#endif
