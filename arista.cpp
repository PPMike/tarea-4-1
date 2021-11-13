#ifndef ARISTA_H
#define ARISTA_H
#include "Vertice.cpp"

class Arista {
private:
  Vertice* vi;
  Vertice* vj;

public:
  Arista (Vertice* vi, Vertice* vj) {
    this->vi = vi;
    this->vj = vj;
  }

  void setVi(Vertice* vi) { this->vi = vi; }

  Vertice* getVi() { return this->vi; }

  void setVj(Vertice* vj) { this->vj = vj; }

  Vertice* getVj() { return this->vj; }
};

#endif /* ifndef ARISTA_H */
