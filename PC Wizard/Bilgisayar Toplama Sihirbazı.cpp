#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include "parca_ekleme.cpp"
#include "parca_secimi.cpp"
using namespace std;

int user(){
	int PC[9]={0};
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	char yukariOK=72, asagiOK=80;
	cout << "[A�a��/Yukar�]";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	
	cout << " oklar� kullanarak istedi�iniz par�ay� i�aretleyin ve ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	
	cout << "[ENTER]";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	
	cout << " tu�uyla onaylay�n.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	
	cout << "Devam etmek i�in bir tu�a bas�n...";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	
	getch();
	
	robot PC1;
	PC1.Robot(PC, 9);
	sonuc PC2(PC, 9);
}

int admin(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	
	cout << "[A�a��/Yukar�]";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	
	cout << " oklar� kullanarak eklemek istedi�iniz par�an�n t�r�n� i�aretleyin ve ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	
	cout << "[ENTER]";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	
	cout << " tu�uyla onaylay�n.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	
	cout << "Devam etmek i�in bir tu�a bas�n...";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	
	getch();
	system("CLS");
	
	parcaEkle PC1;
}

int main(){
	char hamle='3';
	setlocale(LC_ALL, "Turkish");
	
	while(hamle!='9' && hamle!='1' && hamle!='2'){
		system("CLS");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "ZIRHLIO�LU Bilgisayar Toplama Sihirbaz�na Ho�geldiniz.\n\n";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cout << "1.";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << " Admin Giri�i" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cout << "2.";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << " Kullan�c� Giri�i" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cout << "9.";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << " ��k��" << endl << endl;
		
		hamle=getch();
		
		if(hamle=='1') admin();
		else if(hamle=='2') user();
		else if(hamle=='9'){
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
			return 0;
		}
	}
}
