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

#include "alfabeto.h"
#include "cadena.h"

class Language {
  public:
    Language (Cadena cadena, Alfabeto alfabeto) { 
      cadena_ori = cadena;
      alfabeto_ = alfabeto;
    }
  private:
    Cadena cadena_ori;
    std::vector<Cadena> cadenas_;
    Alfabeto alfabeto_;
};