#ifndef INDICEINVERTIDO_H
#define INDICEINVERTIDO_H

#include <string>
#include <map>
#include <set>
#include <utility>

using std::string;
using std::map;
using std::set;
using std::pair;

class IndiceInvertido
{
    public:
        IndiceInvertido();
        ~IndiceInvertido();
        //Insere um item no dicion�rio de forma ordenada, caso a chave j� perten�a
        //ao dicion�rio, a lista associada � ele � atualizada
        void inserir(const pair<string,string>& item);
        //Remove um item do dicion�rio, se ele l� estiver
        void remover(const string chave);
        //Verifica se o dicion�rio est� vazio
        bool vazio()const;
        //Retorna a quantidade de itens no dicion�rio
        int tamanho()const;
        //Verifica se a string chave pertence ao �ndice
        bool pertence(const string chave);
        //Retorna o set indexado por chave
        const set<string>& buscar(const string chave);

    private:
       map< string,set<string> > indice_;
};

#endif // INDICEINVERTIDO_H
