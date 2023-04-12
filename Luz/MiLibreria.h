#ifndef _MI_LIBRERIA_H_
#define _MI_LIBRERIA_H_

class MiLibreria {
  public:
    MiLibreria(int ledPin, int ldrPin);
    void inicializar();
    void ciclo();

  private:
    int ledPin;
    int ldrPin;
    int ldrValue;
};

#endif
