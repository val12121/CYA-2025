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

#include "language.h"

int main(int argc, char *argv[]) {
  if (argc != 4) {
    // Rellenar
    std::cout << "Holi" << std::endl;
    return 0;
  }

  // Recogemos los archivos
  std::string archivo_entrada = argv[1];
  std::string archivo_salida = argv[2];
  int opcode = std::stoi(argv[3]);
  
  std::string linea;
  std::string palabra;
  std::string alfabeto_p;
  std::vector<std::string> vector;

  std::ifstream archivo(archivo_entrada);
  if (archivo.is_open()) {
    while (!archivo.eof()) {
      std::getline(archivo, linea);
      std::stringstream ss(linea);
      ss >> palabra;
      ss >> alfabeto_p;

      std::cout << palabra << std::endl;
      std::cout << alfabeto_p << std::endl;

      Alfabeto alfabeto (alfabeto_p);
      Cadena cadena(palabra);
      Language lenguaje(cadena, alfabeto);

      switch (opcode)
      {
      //alfabeto
      case 0:
        alfabeto.Salida(archivo_salida);
        break;
      //longitud
      case 1:
        cadena.Longitud(archivo_salida);
        break;
      //inversa
      case 2: 
        cadena.Inversa(archivo_salida);
        break;
      //prefijos
      case 3:
        
        break;
      //sufijos
      case 4: 
        break;
      default:
        break;
      }
    }
  } else {
    std::cerr << "No se pudo abrir el archivo." << std::endl;
    return 1;
  }
}