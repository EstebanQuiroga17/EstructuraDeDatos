

#if !defined(__DiagramasTa7_SerieDeFibonacci_h)
#define __DiagramasTa7_SerieDeFibonacci_h

class SerieDeFibonacci
{
public:
   void calcularSerie(int a = 0, int b = 1, int count = 0);
   SerieDeFibonacci(int newNumeroDeTerminos);
   ~SerieDeFibonacci();
   int getNumeroDeTerminos(void);
   void setNumeroDeTerminos(int newNumeroDeTerminos);

protected:
private:
   int numeroDeTerminos;


};

#endif