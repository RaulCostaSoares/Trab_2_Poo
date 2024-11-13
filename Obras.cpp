#include "Obras.hpp"

using namespace std;

Obras::Obras(const string& titulo, const string& autor, const string& genero, const string& midia, int anoPublicacao)
    : titulo(titulo), autor(autor), genero(genero), anoPublicacao(anoPublicacao), midia(midia) {}

string Obras::getTitulo() const {
    return titulo;
}

string Obras::getAutor() const {
    return autor;
}

string Obras::getGenero() const {
    return genero;
}

string Obras::getMidia() const {
    return midia;
}

int Obras::getAnoPublicacao() const {
    return anoPublicacao;
}