#include <iostream>
#include <iomanip.h>
#include <stdio.h>
#include <conio.h>
#define LOW_VALUE -1

using namespace std;



typedef int tInfo;

typedef struct tnodo *tLista;

struct tnodo {
    tInfo Info;
    tInfo Coe;
    tInfo Exp;
    tLista Sgte;
};

void SacarPrimerNodo(tLista &Lista, tInfo &valor) {
    tLista pElim;

    pElim = Lista;
    valor = Lista->Info;
    Lista = Lista->Sgte;
    delete pElim;

}

int main()
{
    ProcPoli (PolinomioP, PolinomioQ);

    ArmarPoli (LstPoliX, PoliX, rPoliX, fdaPoliX, nomPoliX);

    SumarPoli (LstPoliP, LstPoliQ, LstPoliSum);

    EmitirPoli (LstPoliX, nomPoliX);

    LecEspPoli (PoliX, rPoliX, fdaPoliX);

    LecEspNodo (LstPoliX, rInfoPoliX, fdlPoliX);

    return 0;
}


ProcPoli (tArc PolinomioP, tArc PolinomioQ)
{

}

ArmarPoli (tLista &LstPoliX, tArc PoliX, sReg &rPoliX, bool &fdaPoliX, str4 nomPoliX);
{

}

SumarPoli (tLista &LstPoliP, tLista &LstPoliQ, tLista &LstPoliSum);
{

}

void EmitirPoli(tLista &LstPoliX, str4 nomPoliX) {
	tLista PoliAux;

	cout << endl << nomPoliX << " = ";
	PoliAux = Px;
	while (PoliAux != NULL) {
		cout << PoliAux->Info.coef << " ";
		if (PoliAux->Info.expo > 0)
			cout << "x^" << PoliAux->Info.expo << " +";
		PoliAux = PoliAux->Sgte;
	}
	cout << '\b' << " presione enter para continuar...";
	getch();
} // Emitir Polinomio


void LecEspPoli(tLista PoliX,sReg &rPoliX,bool &fdaPoliX ) {
	if (PoliX != NULL)
		SacarPrimerNodo(PoliX,rPoliX);
	else
		rPoliX.Exp = LOW_VALUE;
};

void LecEspNodo(tLista &LstPoliX,sNodo &rInfoPoliX,bool &fdlPoliX ) {
	if (LstPoliX != NULL)
		SacarPrimerNodo(LstPoliX,rInfoPoliX);
	else
		rInfoPoliX.Info = LOW_VALUE;
}
