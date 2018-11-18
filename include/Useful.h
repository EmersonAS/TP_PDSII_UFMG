#ifndef USEFUL_H_INCLUDED
#define USEFUL_H_INCLUDED

#include <string>
#include <utility>
#include <fstream>

#include "IndiceInvertido.h"

using std::string;
using std::pair;
using std::ifstream

//Transforma as letras mai�sculas em min�sculas e remove caracteres de pontua��o da string
void AjustaString(string& s);
//L� as palavras do arquivo e as adiciona ao �ndice invertido
void LeArquivo(string file_name, IndiceInvertido& indice);

#endif // USEFUL_H_INCLUDED
