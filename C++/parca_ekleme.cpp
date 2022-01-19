#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <locale.h>
#include <windows.h>
using namespace std;

class parcaEkle{
	int parca;
	
	public: parcaEkle(){
		parca=parcaSec();
		
		if(parca==0) CPU_add();
		else if(parca==1) Anakart_add();
		else if(parca==2) RAM_add();
		else if(parca==3) GPU_add();
		else if(parca==4) HDD_add();
		else if(parca==5) SSD_add();
		else if(parca==6) Kasa_add();
		else if(parca==7) PSU_add();
		else if(parca==8) Cooler_add();
	}
	
	public: CPU_add(){
		ofstream CPU_file("CPU.dll", ios::app);
		ofstream CPU_W("CPU_W.dll", ios::app);
		ofstream CPU_soketW("CPU_soket.dll", ios::app);
		ifstream CPU_soketR("CPU_soket.dll", ios::app);
		
		char Name[99], hamle='x';
		string parca[4]={"1\\1151p", "2\\2066p", "3\\AM4", "4\\TR4"};
		int secim[4]={1}, W, soket, x=0, y=4, z;
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nÝþlemci Adý: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		gets(Name);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nÝþlemci TDP Deðeri: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cin >> W;
		
		while(hamle!='E' && hamle!='e'){
			system("CLS");
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "\n[W-S]";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << " tuþlarýný kullanarak eklemek istediðiniz iþlemcinin soketini seçin ve ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "[E] ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "tuþuyla onaylayýn.\n\n";
			
			for(x=0; x<4; x++){
				if(secim[x]==1){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout << "[x] ";
					z=x;
				}
				else{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					cout << "[ ] ";
				}
				cout << parca[x] << endl;
			}
			
			hamle=getch();
			
			switch(hamle){
				case 72:{
					if(secim[0]==1);
					else{
						secim[z]=0;
						secim[z-1]=1;
					}
					break;
				}
				case 80:{
					if(secim[y-1]==1);
					else{
						secim[z]=0;
						secim[z+1]=1;
					}
					break;
				}
				case 13:{
					for(int a=0; a<y; a++){
						if(secim[a]==1) z=a;
					}
					break;
				}
			}
		}
		if(W>50 || W<500){
				CPU_file << endl << Name;
				CPU_W << endl << W;
				if(z==0) CPU_soketW << endl << "1\\1151p";
				if(z==1) CPU_soketW << endl << "2\\2066p";
				if(z==2) CPU_soketW << endl << "3\\AM4";
				if(z==3) CPU_soketW << endl << "4\\TR4";
				system("CLS");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "Ýþlem Baþarýlý.";
		}
		else{
			system("CLS");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "HATALI GÝRÝÞ";
			return 0;
		}
	}
	
	public: Anakart_add(){
		ofstream Anakart_file("Anakart.dll", ios::app);
		ofstream Anakart_W("Anakart_W.dll", ios::app);
		ofstream Anakart_soketW("Anakart_CPU_soket.dll", ios::app);
		ifstream Anakart_soketR("Anakart_CPU_soket.dll", ios::app);
		
		char Name[99], hamle='x';
		string parca[4]={"1\\1151p", "2\\2066p", "3\\AM4", "4\\TR4"};
		int secim[4]={1}, W, soket, x=0, y=4, z;
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nAnakart Adý: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		gets(Name);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nAnakart TDP Deðeri: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cin >> W;
		
		while(hamle!='E' && hamle!='e'){
			system("CLS");
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "\n[W-S]";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << " tuþlarýný kullanarak eklemek istediðiniz iþlemcinin soketini seçin ve ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "[E] ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "tuþuyla onaylayýn.\n\n";
			
			for(x=0; x<4; x++){
				if(secim[x]==1){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout << "[x] ";
					z=x;
				}
				else{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					cout << "[ ] ";
				}
				cout << parca[x] << endl;
			}
			
			hamle=getch();
			
			switch(hamle){
				case 72:{
					if(secim[0]==1);
					else{
						secim[z]=0;
						secim[z-1]=1;
					}
					break;
				}
				case 80:{
					if(secim[y-1]==1);
					else{
						secim[z]=0;
						secim[z+1]=1;
					}
					break;
				}
				case 13:{
					for(int a=0; a<y; a++){
						if(secim[a]==1) z=a;
					}
					break;
				}
			}
		}
		if(W>0 || W<50){
				Anakart_file << endl << Name;
				Anakart_W << endl << W;
				if(z==0) Anakart_soketW << endl << "1\\1151p";
				if(z==1) Anakart_soketW << endl << "2\\2066p";
				if(z==2) Anakart_soketW << endl << "3\\AM4";
				if(z==3) Anakart_soketW << endl << "4\\TR4";
				system("CLS");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "Ýþlem Baþarýlý.";
		}
		else{
			system("CLS");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "HATALI GÝRÝÞ";
			return 0;
		}
	}
	
	public: RAM_add(){
		ofstream RAM_file("RAM.dll", ios::app);
		ofstream RAM_W("RAM_W.dll", ios::app);
		
		char Name[99], hamle='x';
		int secim[4]={1}, W, soket, x=0, y=4, z;
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nBellek Adý: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		gets(Name);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nBellek TDP Deðeri: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cin >> W;
		
		if(W>0 || W<50){
				RAM_file << endl << Name;
				RAM_W << endl << W;
				system("CLS");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "Ýþlem Baþarýlý.";
		}
		else{
			system("CLS");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "HATALI GÝRÝÞ";
			return 0;
		}
	}
	
	public: GPU_add(){
		ofstream GPU_file("GPU.dll", ios::app);
		ofstream GPU_W("GPU_W.dll", ios::app);
		
		char Name[99], hamle='x';
		int secim[4]={1}, W, soket, x=0, y=4, z;
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nEkran Kartý Adý: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		gets(Name);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nEkran Kartý TDP Deðeri: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cin >> W;
		
		if(W>50 || W<750){
				GPU_file << endl << Name;
				GPU_W << endl << W;
				system("CLS");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "Ýþlem Baþarýlý.";
		}
		else{
			system("CLS");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "HATALI GÝRÝÞ";
			return 0;
		}
	}
	
	public: HDD_add(){
		ofstream HDD_file("HDD.dll", ios::app);
		ofstream HDD_W("HDD_W.dll", ios::app);
		
		char Name[99], hamle='x';
		int secim[4]={1}, W, soket, x=0, y=4, z;
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nHard Disk Adý: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		gets(Name);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nHard Disk TDP Deðeri: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cin >> W;
		
		if(W>0 || W<50){
				HDD_file << endl << Name;
				HDD_W << endl << W;
				system("CLS");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "Ýþlem Baþarýlý.";
		}
		else{
			system("CLS");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "HATALI GÝRÝÞ";
			return 0;
		}
	}
	
	public: SSD_add(){
		ofstream SSD_file("SSD.dll", ios::app);
		ofstream SSD_W("SSD_W.dll", ios::app);
		
		char Name[99], hamle='x';
		int secim[4]={1}, W, soket, x=0, y=4, z;
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nSSD Adý: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		gets(Name);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nSSD TDP Deðeri: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cin >> W;
		
		if(W>50 || W<500){
				SSD_file << endl << Name;
				SSD_W << endl << W;
				system("CLS");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "Ýþlem Baþarýlý.";
		}
		else{
			system("CLS");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "HATALI GÝRÝÞ";
			return 0;
		}
	}
	
	public: Kasa_add(){
		ofstream Kasa_file("Kasa.dll", ios::app);
		ofstream Kasa_W("Kasa_W.dll", ios::app);
		
		char Name[99], hamle='x';
		int secim[4]={1}, W, soket, x=0, y=4, z;
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nKasa Adý: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		gets(Name);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nKasa TDP Deðeri: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cin >> W;
		
		if(W>0 || W<50){
				Kasa_file << endl << Name;
				Kasa_W << endl << W;
				system("CLS");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "Ýþlem Baþarýlý.";
		}
		else{
			system("CLS");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "HATALI GÝRÝÞ";
			return 0;
		}
	}
	
	public: PSU_add(){
		ofstream PSU_file("PSU.dll", ios::app);
		ofstream PSU_W("PSU_W.dll", ios::app);
		
		char Name[99], hamle='x';
		int secim[4]={1}, W, soket, x=0, y=4, z;
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nGüç Kaynaðý Adý: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		gets(Name);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nGüç Kaynaðý TDP Deðeri: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cin >> W;
		
		if(W>=300 || W<2000){
				PSU_file << endl << Name;
				PSU_W << endl << W;
				system("CLS");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << "Ýþlem Baþarýlý.";
		}
		else{
			system("CLS");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "HATALI GÝRÝÞ";
			return 0;
		}
	}
	
	public: Cooler_add(){
		ofstream Cooler_file("Cooler.dll", ios::app);
		ofstream Cooler_soketW("Cooler_CPU_soket.dll", ios::app);
		ifstream Cooler_soketR("Cooler_CPU_soket.dll", ios::app);
		
		char Name[99], hamle='x';
		string parca[5]={"0\\ALL(TR4(Threadripper) Hariç Hepsiyle Uyumlu)", "1\\1151p", "2\\2066p", "3\\AM4", "4\\TR4"};
		int secim[5]={1}, soket, x=0, y=5, z;
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << "\nCooler Adý: ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		gets(Name);
		
		while(hamle!='E' && hamle!='e'){
			system("CLS");
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "\n[W-S]";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << " tuþlarýný kullanarak eklemek istediðiniz iþlemcinin soketini seçin ve ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
			cout << "[E] ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "tuþuyla onaylayýn.\n\n";
			
			for(x=0; x<5; x++){
				if(secim[x]==1){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout << "[x] ";
					z=x;
				}
				else{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
					cout << "[ ] ";
				}
				cout << parca[x] << endl;
			}
			
			hamle=getch();
			
			switch(hamle){
				case 72:{
					if(secim[0]==1);
					else{
						secim[z]=0;
						secim[z-1]=1;
					}
					break;
				}
				case 80:{
					if(secim[y-1]==1);
					else{
						secim[z]=0;
						secim[z+1]=1;
					}
					break;
				}
				case 13:{
					for(int a=0; a<y; a++){
						if(secim[a]==1) z=a;
					}
					break;
				}
			}
		}
		Cooler_file << endl << Name;
		if(z==0) Cooler_soketW << endl << "0\\ALL";
		if(z==1) Cooler_soketW << endl << "1\\1151p";
		if(z==2) Cooler_soketW << endl << "2\\2066p";
		if(z==3) Cooler_soketW << endl << "3\\AM4";
		if(z==4) Cooler_soketW << endl << "4\\TR4";
		system("CLS");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
		cout << "Ýþlem Baþarýlý.";
	}
	
	public:
		int parcaSec(){
			char hamle='z';
			int secim[9]={1}, x, y=9, z;
			string parca[]={"Ýþlemci(CPU)", "Anakart", "Bellek(RAM)", "Ekran Kartý(GPU)", "Hard Disk(HDD)", "Solid State Disk(SSD)", "Kasa", "Güç Kaynaðý(PSU)", "Soðutucu"};
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			
			while(hamle!=27){
				system("CLS");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
				cout << "Çýkmak için ESC'ye basýn.\n\n";
				
				for(int x=0; x<9; x++){
					if(secim[x]==1){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
						cout << "[x] ";
						z=x;
					}
					else{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
						cout << "[ ] ";
					}
					cout << parca[x] << endl;
				}
				
				hamle=getch();
				
				switch(hamle){
					case 72:{
						if(secim[0]==1);
						else{
							secim[z]=0;
							secim[z-1]=1;
						}
						break;
					}
					case 80:{
						if(secim[y-1]==1);
						else{
							secim[z]=0;
							secim[z+1]=1;
						}
						break;
					}
					case 13:{
						for(int a=0; a<y; a++){
							if(secim[a]==1) z=a;
						}
						return z;
						break;
					}
				}
			}
		}
};
