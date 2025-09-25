// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 2: Cadenas y lenguajes
// Autor: Camila Valentina Alonso Yepez
// Correo: alu0101548999@ull.edu.es
// Fecha: 24/09/2025
// Archivo cadena.h: programa cliente.
// Contiene la función main del proyecto que usa las clases X e Y
// para ... (indicar brevemente el objetivo)
// Referencias:
// Enlaces de interés
//
// Historial de revisiones
// 16/09/2025 - Creación (primera versióln) del código

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

// CLASE CADENA
class Cadena {
 public:
  Cadena() { palabra_ = ""; };
  Cadena(std::string palabra) { palabra_ = palabra; };

  std::string get_cadena() { return palabra_; }
  void Salida(std::string archivo_salida);
  void Longitud(std::string archivo_salida);
  void Inversa(std::string archivo_salida);

 private:
  std::string palabra_;
};

void Cadena::Salida(std::string archivo_salida) {
  std::ofstream archivo(archivo_salida);
  std::cout << get_cadena() << std::endl;
}

void Cadena::Longitud(std::string archivo_salida) {
  std::ofstream archivo(archivo_salida);
  archivo << get_cadena().size() << "\n";
}

void Cadena::Inversa(std::string archivo_salida) {
  std::ofstream archivo(archivo_salida);
  for (int i = get_cadena().size() -1 ; i >= 0; i--) {
    archivo << get_cadena().at(i);
  }
}