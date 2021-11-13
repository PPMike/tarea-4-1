#include "Arista.cpp"
#include "Vertice.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {

  cout << "Ingresa los numeros separados por comas" << endl;

  int tmp, cnt = 1;
  char coma;
  vector<Vertice *> v;
  vector<Arista *> a;
  Vertice *anterior = nullptr;

  while (cin >> tmp) {
    cin >> coma;
    Vertice *actual = new Vertice(cnt, tmp);
    if (anterior) {
      a.push_back(new Arista(anterior, actual));
    }
    anterior = actual;
    cnt++;
  }

  for (int i = 0; i < a.size(); ++i) {
    cout << "id: " << a[i]->getVi()->getId()
         << " dato: " << a[i]->getVi()->getDato() << "; ";
    if (i == a.size() - 1) {
      cout << "id: " << a[i]->getVj()->getId()
           << " dato: " << a[i]->getVj()->getDato() << "; ";
    }
  }
  cout << endl;

  return 0;
}
