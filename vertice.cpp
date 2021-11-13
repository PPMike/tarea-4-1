#ifndef VERTICE_H
#define VERTICE_H

class Vertice {
private:
  int id;
  int dato;

public:
  Vertice (int id, int dato) {
    this->id = id;
    this->dato = dato;
  }
  void setId(int id) { this->id = id; }

  int getId() { return this->id; }

  void setDato(int dato) { this->dato = dato; }

  int getDato() { return this->dato; }
};

#endif /* ifndef VERT */
