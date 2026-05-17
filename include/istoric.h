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

template <typename T>
void istoric<T>::afisistoric() const {
    std::cout << "Istoric joc:\n";

   
    std::for_each(lista.begin(), lista.end(), [](const T& elem) {
    
        std::cout << "Runda:  " << elem << "\n";
    });
}




#endif