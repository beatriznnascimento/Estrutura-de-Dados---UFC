// Arquivo de Implementacao do TAD Matriz
#include <iostream>
#include <iomanip>
#include "Matriz.h"
using namespace std;

// Aloca espaco dinamicamente para matriz com m linhas e n colunas
Matriz::Matriz(int m, int n)
{
	lin = m;
	col = n;
	mat = new int *[lin]; // alocando pont de linhas p apontar p as colunas

	for (int i = 0; i < n; i++)
	{
		mat[i] = new int[col]; // alocando espacos para as colunas
	}
}

// Destrutor: Libera a memoria que foi alocada dinamicamente no construtor
Matriz::~Matriz()
{
	// apagando as colunas da matriz
	for (int i = 0; i < lin; i++)
	{
		delete[] mat[i];
	}

	delete[] mat; // deletando as linhas

	cout << "matriz liberada" << endl;
}

// Retorna o numero de linhas da matriz
int Matriz::linhas()
{
	return lin;
}

// Retorna o numero de colunas da matriz
int Matriz::colunas()
{
	return col;
}

// Retorna o valor da celula [i][j] da matriz
int Matriz::getValor(int i, int j)
{
	return mat[i][j];
}

// Atribui valor a celula [i][j] da matriz
void Matriz::setValor(int valor, int i, int j)
{
	mat[i][j] = valor;
}

// Imprimir a matriz
void Matriz::print()
{
	for (int i = 0; i < lin; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << setw(7) << mat[i][j];
		}
		cout << "\n";
	}
}

// Soma matrizes
Matriz *Matriz::soma(Matriz &B)
{
	if (lin != B.linhas() || col != B.colunas())
	{
		return nullptr;
	}
	else
	{
		Matriz *C = new Matriz(lin, col);
		for (int i = 0; i < lin; i++)
		{
			for (int j = 0; j < col; j++)
			{
				int soma = mat[i][j] + B.getValor(i, j);
				C->setValor(soma, i, j);
			}
		}
		return C;
	}
}

// Multiplica matrizes
Matriz *Matriz::multiplica(Matriz &B)
{
	if (col != B.linhas())
	{
		return nullptr;
	}
	else
	{
		Matriz *C = new Matriz(lin, B.colunas());
		for (int i = 0; i < lin; i++)
		{
			for (int j = 0; j < B.colunas(); j++)
			{
				int soma = 0;
				for (int k = 0; k < col; k++)
				{
					soma += mat[i][k] * B.getValor(k, j);
				}
				C->setValor(soma, i, j);
			}
		}
		return C;
	}
}