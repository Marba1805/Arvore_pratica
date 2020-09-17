#include <iostream>
using namespace std;

class No
{
private:
	No *esq, *dir;
	emp chave;
	
public:
	No(int chave)
	{
		this->chave = chave;
		esq = NULL;
		dir = NULL;
	}

	int getChave()
	{
		return chave.s;
	}
	
	emp getChaveCom()
	{
		return chave;
	}

	No* getEsq()
	{
		return esq;
	}

	No* getDir()
	{
		return dir;
	}

	void setEsq(No *no)
	{
		esq = no;
	}

	void setDir(No *no)
	{
		dir = no;
	}
};

class Arvore
{
private:
	No *raiz;

public:
	Arvore()
	{
		raiz = NULL;
	}
	
	void inserirAux(No *no, emp chave)
	{
		// se for menor, entao insere a esquerda
		if(chave.s < no->getChave())
		{
			// verifica se a esquerda eh nulo
			if(no->getEsq() == NULL)
			{
				No *novo_no = new No(chave);
				no->setEsq(novo_no); // seta o novo_no a esquerda
			}
			else
			{
				// sen?o, continua percorrendo recursivamente
				inserirAux(no->getEsq(), chave);
			}
		}
		// se for maior, entao insere a direita
		else if(chave.s > no->getChave())
		{
			// verifica se a direita eh nulo
			if(no->getDir() == NULL)
			{
				No *novo_no = new No(chave);
				no->setDir(novo_no); // seta o novo_no a direita
			}
			else
			{
				// senao, continua percorrendo recursivamente
				inserirAux(no->getDir(), chave);
			}
		}
		// se for igual, nao vai inserir
		// n?o pode existir 2 chaves iguais
	}
	
	void inserir(int chave)
	{
		if(raiz == NULL) // verifica se a Arvore esta vazia
			raiz = new No(chave); // cria um novo no
		else
			inserirAux(raiz, chave);
	}



	No* getRaiz()
	{
		return raiz;
	}

	void emOrdem(No* no)
	{
		if(no != NULL)
		{
			emOrdem(no->getEsq());
			cout << no->getChave() << " ";
			emOrdem(no->getDir());
		}
	}
		int Print_Em_Ordem(){ 
		//esquerda - raiz - direita
			if(no != NULL)
		{
			Print_Em_Ordem(no->getEsq());
			cout << no->getChave() << " ";
			Print_Em_Ordem(no->getDir());
		}
	}


		int Print_Pre_Ordem(){
		//raiz - esquerda - direita
			if(no != NULL)
		{
			cout << no->getChave() << " ";
			Print_Pre_Ordem(no->getEsq());
			Print_Pre_Ordem(no->getDir());
		}
	}
	
		int Print_Pos_Ordem(){
		//esquerda - direita - raiz		
			if(no != NULL)
		{
			Print_Pos_Ordem(no->getEsq());
			Print_Pos_Ordem(no->getDir());
			cout << no->getChave() << " ";
		}
	}
	int count = 0;
	int contEl(){ 
			if(no != NULL)
		{
			contEl(no->getEsq());
			cont = count + 1;
			contEl(no->getDir());
			return count;
		}
		
	int meno_el(){
		if(getEsq() != NULL)
		{
			meno_el(no->getEsq());
		}
		else()
		{
			return no;
		}
		
	}
	int maio_el(){
		if(maio_elr() != NULL)
		{
			meno_el(no->maio_el());
		}
		else()
		{
			return no;
		}
		
	}
	
		void busca(No* no)
	{
		if(no != input)
		{
			busca(no->getEsq());
			cout << no->getChave() << " ";
			busca(no->getDir());
		}
		else(){
			return no;
		}
	}
		count = 0;
		int local_Val_ex(int n){
			// deleta o no local	
		if(no > n)
		{
			local_Val_ex(no->getEsq());
			count =+ 1;
		}
		if(no < n){
			local_Val_ex(no->getDir());
			count =+ 1;			
		}
		
		if(no == n(){
			return no, count;
		}
	}
	
	int del_no(int n){
		local_Val_ex(n) -> NULL;
	}
	
		
	void isBST()
	//cheka se os galhos(direito e esquerdo) sao menores e maiores respectivamente.
	//sendo assim acrecenta 1 ao contador
	{
	if(getDir()<no && no>getEsq())
	{
		count=+1;
	}
	//recursivamente muda os galhos para chekar as sub-arvores
	getDir(no.isBST);
	getEsq(no.isBST);
	if (count = contEl)
	{
		return o;
	}
	}
	void busca(No* no)
	{
		if(no != input)
		{
			busca(no->getEsq());
			cout << no->getChave() << " ";
			busca(no->getDir());
		}
		else(){
			return no;
		}
	}
	
	int tamVet(v)
	{
		int tam = 0;
		int i = 0;
		while(v[i]= NULL)
		{
			tam = +1;
			i= +1;
		}
		return tam;
	}

	void vecToArv(v)
	{
		for(int n =0; n =tamVet(v); n++)
		{
			inser(v[n]);
		}
	}
};
