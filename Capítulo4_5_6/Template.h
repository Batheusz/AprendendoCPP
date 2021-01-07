#ifndef TEMPLATE_H
#define TEMPLATE_H

template < typename T> //ou template <class T>
T maximo(T valor1, T valor2, T valor3)
{
    T maximoValor = valor1;
    if (valor2> maximoValor)
    {
        maximoValor = valor2;
    }
    else if (valor3 > maximoValor)
    {
        maximoValor = valor3;
    }
    
    return maximoValor;
}

#endif