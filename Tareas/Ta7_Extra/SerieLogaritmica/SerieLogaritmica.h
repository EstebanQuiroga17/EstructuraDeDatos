#if !defined(__Class_Diagram_2_SerieLogaritmica_h)
#define __Class_Diagram_2_SerieLogaritmica_h

class SerieLogaritmica
{
public:
   double Calcular(int n);
   double getA(void);
   void setA(double newA);
   SerieLogaritmica();
   ~SerieLogaritmica();

protected:
private:
   double sumatoriaLog(int n);

   double a;


};

#endif