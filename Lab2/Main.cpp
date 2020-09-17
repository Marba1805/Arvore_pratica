#include <iostream>;
#include <Arvore.cpp>;
#include <fstream>;
#include <string>;

using namespace std

struct emp()
{
	string n;
	int s;	
}

int main(int argc, char *argv[])
{

	ifstream ip("spcine.csv");
	
	emp n;
	/* como nao encontrei uma maneira de pular elementos os quais eu nao usaria,
	   eu acabei por criar variaveis, as quais nao fiz nada com elas*/
	string aux;
	string empresa;
	string ano;
	string mes;
	string cargo;
	string lotacao;
	string admissao;
	string nascimento;
	string vencimento;
	string encargo;
	string o_remunera;
	string vinculu;
	string detalhes_v;
	string liminar;
	int cond = 0;
	int cond2 = 0;
	
	
	while (cond != -1)
	{
		getline(ip,n/);
		cond2++
			
		if(is.eof())
		{
			break;
		}
		
	}
	emp c[cond2]
	
	while( cond != -1 )
	{
		
		getline(ip,empresa,',');
		getline(ip,ano,',');
		getline(ip,mes,',');
		getline(ip,n.n,','); // nome , variavel desejada
		getline(ip,cargo,',');
		getline(ip,lotacao,',');
		getline(ip,admissao,',');
		getline(ip,nascimento,',');
		getline(ip,vencimento,',');
		getline(ip,encargo,',');
		getline(ip,aux,','); // salario, variavel desejada
		getline(ip,o_remunera,',');
		getline(ip,vinculu,',');
		getline(ip,detalhe_v,',');
		getline(ip,liminar,/n);
		n.s = stoi(aux);
		
		c[cond] = n;
		cond++;
		
		if(is.eof()){
			break;
		}
		
		
	}
		
	carv = vecToArv(c);
	maio_el(carv);
	meno_el(carv);
	
	void sair()
	{
	exit(0);
	}
	
	
	return 0;
}
