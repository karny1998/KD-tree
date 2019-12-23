#include <punto_direccion.h>
#include <list>
#include <kdTree.h>
#include <iostream>
//
// Created by victor on 22/12/19.
//




int main(){
    std::list<point> lista;

    point p1 = newPoint(3,1,4);
    point p2 = newPoint(2,3,7);
    point p3 = newPoint(2,1,3);
    point p4 = newPoint(2,4,5);
    point p5 = newPoint(1,4,4);
    point p6 = newPoint(0,5,7);
    point p7 = newPoint(4,3,4);
    point p8 = newPoint(6,1,4);
    point p9 = newPoint(5,2,5);
    point p10 = newPoint(4,0,6);
    point p11 = newPoint(7,1,6);
    point p12 = newPoint(7,1,7);

    lista.push_back(p1);
    lista.push_back(p2);
    lista.push_back(p3);
    lista.push_back(p4);
    lista.push_back(p5);
    lista.push_back(p6);
    lista.push_back(p7);
    lista.push_back(p8);
    lista.push_back(p9);
    lista.push_back(p10);
    lista.push_back(p11);
    lista.push_back(p12);




    kdtree arbolPrueba(lista);
    point nuevo = newPoint(7,1,5);
    point cercano =  arbolPrueba.cercano(nuevo);

    std::list<point> cercanos = arbolPrueba.cercanos(nuevo, lista, 2);

    for (auto const& i : cercanos) {
        std::cout << i.x << " " << i.y << " "  << i.z << std::endl;
    }


}
