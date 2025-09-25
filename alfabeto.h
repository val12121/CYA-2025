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
//
// Historial de revisiones
// 16/09/2025 - Creación (primera versióln) del código

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

// CLASE ALFABETO
class Alfabeto {
 public:
  Alfabeto(std::string alfabeto) { alfabeto_ = alfabeto; };
  Alfabeto() { alfabeto_ = ""; };
  std::string get_alfabeto() { return alfabeto_; }
  void Salida(std::string archivo_salida);

 private:
  std::string alfabeto_;
};

void Alfabeto::Salida(std::string archivo_salida) {
  std::ofstream archivo(archivo_salida);
  archivo << "{";
  for (int i = 0; i < get_alfabeto().size(); i++) {
    if (i != get_alfabeto().size() - 1) {
      archivo << get_alfabeto().at(i) << ", ";
    } else {
      archivo << get_alfabeto().at(i) << "}";
    }
  }
  archivo << "\n";
}