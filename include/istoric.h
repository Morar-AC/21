#ifndef ISTORIC_H
#define ISTORIC_H

#include <list>
#include<iostream>
#include<algorithm>

template <typename T>
class istoric {
private:
    std::list<T> lista;
public:
    void addistoric(const T& element);
    void afisistoric() const;
    const std::list<T>& getLista() const { return lista; }
};
template <typename T>
void istoric<T>::addistoric(const T& element) {
    lista.push_back(element);
}







#endif