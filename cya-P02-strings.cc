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

#include "alfabeto.h"
#include "cadena.h"

int main(int argc, char *argv[]) {
  std::string archivo_entrada = argv[1];
  std::string archivo_salida = argv[2];

  std::string linea;
  std::string palabra;
  std::vector<std::string> vector;
  std::ifstream archivo(archivo_entrada);
  Cadena cadena1(palabra);
  Alfabeto alfabeto("falacia");
  alfabeto.Salida("salida.txt");

  if (archivo.is_open()) {
    while (!archivo.eof()) {  // Mientras no sea el final del archivo
      std::getline(archivo, linea);
      std::stringstream ss(linea);

      while (ss >> palabra) {
        vector.push_back(palabra);
        5
      }
      cadena1.Salida(palabra);
    }
  } else {
    std::cerr << "No se pudo abrir el archivo." << std::endl;
    return 1;
  }
}