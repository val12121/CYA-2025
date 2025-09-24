// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Cadenas y lenguajes
// Autor: Camila Valentina Alonso Yepez
// Correo: alu0101548999@ull.edu.es
// Fecha: 24/09/2025
// Archivo cya-P02-strings.cc: programa cliente.
// Contiene la función main del proyecto que usa las clases X e Y
// para ... (indicar brevemente el objetivo)
// Referencias:
// Enlaces de interés

// Historial de revisiones
// 16/09/2025 - Creación (primera versióln) del código

#include <iostream>
#include <math>
#include <fstream>

int main(int argc, char* argv[]) {

  std::string archivo_entrada = argc[1];
  std::string archivo_salida = argc[2];

  std::ifstream archivo;

  if (archivo.open(archivo_entrada)) {
    //Todo bien
  } else {
    std::cerr << "No se pudo abrir el archivo." << std::endl;
    return 1;
  }
}