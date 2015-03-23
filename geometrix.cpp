#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main ()
{
	//Variablen Quader
	float qhoehe, qbreite, qlaenge, qvolumen, qflaeche, qliter;
	//Variablen Zylinder
	float dzylinder, hzylinder, lzylinder, vzylinder, fzylinder;
	//Variablen Kegel
	float rkegel, dkegel, hkegel, vkegel, fkegel, skegel, lkegel;

	//Variable Eingabe
	int eingabe;
	
	start:
	cout << "Welchen Koerper moechten Sie brechnen? \n";
	
	cout << "1. Quader \n";
	cout << "2. Zylinder \n";
	cout << "3. Kegel \n";
	cout << "\n";
	cout << "Ihre Auswahl > ";
	cin >> eingabe;

	switch(eingabe)
	{
	case 1:
		cout << "Bitte die H\x94 \bhe des Quaders eingeben (cm): "; cin >> qhoehe;
		cout << "Bitte die Laenge des Quaders eingeben (cm): "; cin >> qlaenge;
		cout << "Bitte die Breite des Quaders eingeben (cm): "; cin >> qbreite;

		if((qhoehe<=0)||(qlaenge<=0)||(qbreite<=0))
		{
			cout << "Fehler: Negative Zahlen nicht zulaessig!\n\n";
		}
		else
		{
		qflaeche = 2*(qhoehe*qbreite+qhoehe*qlaenge+qbreite*qlaenge);
		qvolumen = qhoehe*qlaenge*qbreite;
		qliter = qvolumen/1000;

		cout << "\n";
		cout << "Die Flaeche des Quaders betraegt: " << qflaeche << " Quadratzentimeter.\n";
		cout << "Das Volumen des Quaders betraegt: " << qvolumen << " Kubikzentimeter.\n";
		cout << "Das entspricht " << qliter << " Litern.\n";
		cout << "\n";
		break;
		}

	case 2:
		cout << "Bitte den Durchmesser des Zylinders eingeben (cm): "; cin >> dzylinder;
		cout << "Bitte die Hoehe des Zylinders eingeben (cm): "; cin >> hzylinder;

		if((dzylinder<=0)||(hzylinder<=0))
		{
			cout << "Fehler: Negative Zahlen nicht zulaessig!\n\n";
		}
		else
		{
		vzylinder = M_PI * ((dzylinder/2)*(dzylinder/2)) * hzylinder;
		fzylinder = 2 * M_PI * (dzylinder/2) * ((dzylinder/2) + hzylinder);
		lzylinder = vzylinder/1000;
		
		cout << "\n";
		cout << "Die Flaeche des Zylinders betraegt: " << fzylinder << " Quadratzentimeter.\n";
		cout << "Das Volumen des Zylinders betraegt: " << vzylinder << " Kubikzentimeter.\n";
		cout << "Das entspricht " << lzylinder << " Litern.\n";
		cout << "\n";
		break;
		}

	case 3:
		cout << "Bitte den Durchmesser des Kegelbodens angeben (cm): \n"; cin >> dkegel;
		cout << "Bitte die Hoehe des Kegels angeben (cm): \n"; cin >> hkegel;
		
		if((dkegel<=0)||(hkegel<=0))
		 {
			 cout << "Fehler: Negative Zahlen nicht zulaessig!\n\n";
		}
		else
		{
		rkegel = dkegel/2;
		skegel = sqrt((rkegel * rkegel) + (hkegel * hkegel)); 
		vkegel = M_PI / 3 * (rkegel * rkegel) * hkegel;
		fkegel = M_PI * rkegel * (rkegel + skegel);
		lkegel = vkegel/1000;

		cout << "\n";
		cout << "Die Flaeche des Kegels betraegt: " << fkegel << " Quadratzentimeter.\n";
		cout << "Das Volumen des Kegels betraegt: " << vkegel << " Kubikzentimeter.\n";
		cout << "Das entspricht " << lkegel << " Litern.\n";
		cout << "\n";
		break;
		}

	default:
		cout << "Ungueltige Eingabe!\n\n";
		goto start;
		
	}

system("Pause");
return 0;
}
