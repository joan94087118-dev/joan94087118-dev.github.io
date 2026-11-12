# Ejercicios de introducción a la programación (C++)

Cada ejercicio está en un archivo `.cpp` independiente.

## Ejercicios incluidos
- 3.25 a, b y c: factorial y aproximaciones mediante series.
- 3.26 a y b: cifrado y descifrado.
- 4.15: aproximación de pi.
- 4.8: producto de números impares.
- 5.2: tarifas de aparcamiento.
- 5.6: números aleatorios.
- 5.18: inversión de cifras.
- 5.21: lanzamiento de una moneda.
- 5.26: Torres de Hanói.

## Compilación
La mayoría de los archivos se pueden compilar con:

```bash
g++ nombre_del_archivo.cpp -o programa
./programa
```

El ejercicio `3.25a_factorial.cpp` utiliza Boost.Multiprecision (`cpp_int`) para poder calcular factoriales grandes. En un entorno con Boost instalado se compila igual que los demás.

Revisa cada ejercicio y prueba distintos datos antes de entregarlo.
