#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>

using namespace std;

template<class T>

class Pilha {
private:
	T *itens;
	int cap_maxima;
	int topo_pilha;
public:
	Pilha(int capacidade) {
		this->cap_maxima= capacidade;
		itens=new T[capacidade-1];
		topo_pilha = 0;
	}
	~Pilha() {
		delete []this->itens;
	}
	void empilha(T item) {
		if(topo_pilha<cap_maxima){
			itens[topo_pilha]=item;
//			cout<<itens[topo_pilha]<<": "<<item<<endl;
			this->topo_pilha = this->topo_pilha+1;
		}else{
			throw "Estouro de pilha";
		}
	}
	T desempilha() {
		if(topo_pilha>0){
			topo_pilha = topo_pilha -1;
		}else{
			throw"Pilha vazia";
		}
		return itens[topo_pilha];
	}
	int tamanho() {
		return this->topo_pilha;
	}
};
#endif // PILHA_H_




/*
template <class T>
class Pilha {
private:
	// Atributos para array de items, capacidade e topo da pilha
public:
	Pilha(int capacidade) {
		// instancia array de items, inicializa capacidade e topo
	}

	~Pilha() {
		// destroy array de items
	}

	void empilha(T item) {
		// empilha um item no topo da pilha; lança “Estouro da pilha” se cheia
	}

	T desempilha() {
		// remove um item do topo da pilha; lança “Pilha vazia” se vazia
	}

	int tamanho() {
		// retorna o número de elementos na pilha.
	}
};

*/




/*

//Pilha2.h - Testes OK

#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>

using namespace std;

template<class T>

class Pilha {
private:
	T *itens;
	int cap_maxima;
	int topo;
	int tam_pilha;
public:
	Pilha(int capacidade) {
		this->cap_maxima= capacidade;
		itens=new T[capacidade];
		topo = 0;
		tam_pilha = 0;
	}
	~Pilha() {
		delete []this->itens;
	}
	void empilha(T item) {
		if(tam_pilha<cap_maxima){
			itens[topo]=item; //indexando item no array
//			cout<<array[topo]<<": "<<item<<endl;
			topo++;
			tam_pilha = tam_pilha + 1;
		}else{
			throw "Estouro de pilha";
		}
	}
	T desempilha() {
		if(tam_pilha>0){
			topo--;
			tam_pilha = tam_pilha - 1;
		}else{
			throw"Pilha vazia";
		}
		return itens[topo];
	}
	int tamanho() {
		return this->tam_pilha;
	}
};
#endif // PILHA_H_

*/




/*

//Pilha3.h - Testes OK

#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#include <iostream>
using namespace std;

template<class T>
class Pilha {
private:
	int tam_maximo = 0;
	int topo_pilha = 0;
	T *items;
public:
	Pilha(int capacidade) {
		this->tam_maximo = capacidade;
		items = new T[this->tam_maximo];
		cout<<"Tamanho do array "<<tam_maximo<<endl<<endl;
	}
	~Pilha() {
		delete[] items;
	}
	void empilha(T item) {
		if(topo_pilha < tam_maximo) {
			items[this->topo_pilha] = item;
			this->topo_pilha = this->topo_pilha + 1;
		}else {
			throw"Estouro da pilha!( pilha cheia)";
		}

	}
	T desempilha() {

		T item_atual;
		if (topo_pilha > 0) {
			this->topo_pilha = this->topo_pilha - 1;
			item_atual = this->items[this->topo_pilha];
//			cout<<item_atual<<endl;
		} else {
			throw"Pilha vazia";
		}
		return items[topo_pilha];
	}
	int tamanho() {
		return this->topo_pilha;
	}
};
#endif // PILHA_H_INCLUDED


*/
