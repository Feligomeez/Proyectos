#include<iostream>
using namespace std;
#define N 6

class polinomios{
    int polinomio1 [N];
    int polinomio2 [N];
    int grado1;
    int grado2;

public:
    void CargarPolinomios();
    void MostrarPolinomios();
    bool Iguales();
    void SumarPolinomios();
};

void polinomios::CargarPolinomios(){
    grado1 = 0;
    grado2 = 0;
    for (int i = 0; i < N; i++){
    cout << "Introduce los terminos del primer polinomio. Hueco " << i << ": ";
    cin >> polinomio1[i];
    if (polinomio1[i] != 0)
    grado1 = polinomio1[i];

    cout << "Introduce los terminos del segundo polinomio. Hueco " << i << ": ";
    cin >> polinomio2[i];
    if (polinomio2[i] != 0)
    grado2 = polinomio2[i];

    }
}

void polinomios::MostrarPolinomios(){
    int i;
    for(i = 5; i >= 0; i--){
    if(polinomio1[i] != 0)
    cout << polinomio1[i] << "x^" << i << " + ";
    else
        cout << polinomio1[i];
} cout<<endl;
    for (i = 5; i >= 0; i--)
        if (polinomio2[i] != 0)
        cout << polinomio2[i] << "x^" << i << " + ";

        else
            cout << polinomio2[i];

}

bool polinomios::Iguales(){
    for (int i = 0; i < N; i++)
        if (polinomio1[i] != polinomio2[i])
        return false;
        return true;



}

void polinomios::SumarPolinomios(){
int PolinomioSuma[N];
for(int i = 0; i < N; i++)
PolinomioSuma[i] = polinomio1[i] + polinomio2[i];
for(int i = 5; i >= 0; i--){
    if(PolinomioSuma[i] != 0)
    cout << PolinomioSuma[i] << "x^" << i << " + ";
    else
        cout << PolinomioSuma[i];
}
}
int main(){
polinomios P;
int opc;
float result;
do{
	cout<< "\n\n\n\n\n\n";
	cout<< "\t\t\t         MENU.\n";
	cout<< "\t\t\t      1.- Cargar polinomios.\n";
	cout<< "\t\t\t      2.- Mostrar polinomios.\n";
	cout<< "\t\t\t      3.- Sumar polinomios.\n";
	cout<< "\t\t\t      4.- Ver si los polinomios son iguales.\n";
	cout<< "\t\t\t      5.- Salir.\n";
	cout<< "\n\n Elija la opcion: ";
	cin >> opc;


	switch(opc){
	    case 1: P.CargarPolinomios();
	    break;
	    case 2: P.MostrarPolinomios();
	    break;
	    case 3: P.SumarPolinomios();
	    break;
	    case 4: if(P.Iguales())
	    cout << "Los polinomios son iguales";
	    else cout << "Los polinomios no son iguales";
	    break;
	}


}
while (opc != 5);


return 0;
}
