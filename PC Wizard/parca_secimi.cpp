#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <locale.h>
#include <windows.h>
using namespace std;

class sonuc{
	
	public: sonuc(int PC[], int n){
		PC_son(PC, n);
		getch();
	}
	
	public:
		int PC_son(int PC[], int n){
			string readed;
			int sayac=0, x=0;
			string parca[]={"Ýþlemci(CPU) = ", "Anakart = ", "Bellek(RAM) = ", "Ekran Kartý(GPU) = ", "Hard Disk(HDD) = ", "Solid State Disk(SSD) = ", "Kasa = ", "Güç Kaynaðý(PSU) = ", "Soðutucu = "};
			system("CLS");
			
			ifstream CPU_file;
			ifstream Anakart_file;
			ifstream RAM_file;
			ifstream GPU_file;
			ifstream HDD_file;
			ifstream SSD_file;
			ifstream Kasa_file;
			ifstream PSU_file;
			ifstream Cooler_file;
			
			CPU_file.open("CPU.dll", ios::in);
			Anakart_file.open("Anakart.dll", ios::in);
			RAM_file.open("RAM.dll", ios::in);
			GPU_file.open("GPU.dll", ios::in);
			HDD_file.open("HDD.dll", ios::in);
			SSD_file.open("SSD.dll", ios::in);
			Kasa_file.open("Kasa.dll", ios::in);
			PSU_file.open("PSU.dll", ios::in);
			Cooler_file.open("Cooler.dll", ios::in);
			
			while(!CPU_file.eof()){
				getline(CPU_file, readed);
				if(PC[x]==sayac){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout << parca[x] << readed << endl << endl;
					x++;
					break;
				}
				sayac++;
			}
			sayac=0;
			
			while(!Anakart_file.eof()){
				getline(Anakart_file, readed);
				if(PC[x]==sayac){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
					cout << parca[x] << readed << endl << endl;
					x++;
					break;
				}
				sayac++;
			}
			sayac=0;
			
			while(!RAM_file.eof()){
				getline(RAM_file, readed);
				if(PC[x]==sayac){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
					cout << parca[x] << readed << endl << endl;
					x++;
					break;
				}
				sayac++;
			}
			sayac=0;
			
			while(!GPU_file.eof()){
				getline(GPU_file, readed);
				if(PC[x]==sayac){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout << parca[x] << readed << endl << endl;
					x++;
					break;
				}
				sayac++;
			}
			sayac=0;
			
			while(!HDD_file.eof()){
				getline(HDD_file, readed);
				if(PC[x]==sayac){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
					cout << parca[x] << readed << endl << endl;
					x++;
					break;
				}
				sayac++;
			}
			sayac=0;
			
			while(!SSD_file.eof()){
				getline(SSD_file, readed);
				if(PC[x]==sayac){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
					cout << parca[x] << readed << endl << endl;
					x++;
					break;
				}
				sayac++;
			}
			sayac=0;
			
			while(!Kasa_file.eof()){
				getline(Kasa_file, readed);
				if(PC[x]==sayac){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
					cout << parca[x] << readed << endl << endl;
					x++;
					break;
				}
				sayac++;
			}
			sayac=0;
			
			while(!PSU_file.eof()){
				getline(PSU_file, readed);
				if(PC[x]==sayac){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
					cout << parca[x] << readed << endl << endl;
					x++;
					break;
				}
				sayac++;
			}
			sayac=0;
			
			while(!Cooler_file.eof()){
				getline(Cooler_file, readed);
				if(PC[x]==sayac){
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
					cout << parca[x] << readed;
					x++;
					break;
				}
				sayac++;
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
			return 0;
		}
};

class robot{
	
	public:
		int * Robot(int PC[], int n){
			int CPU_Soket, Max_using;
			
			PC[0]=CPU_pick();
			CPU_Soket=CPU_soket(PC[0]);
			system("CLS");
			
			PC[1]=Anakart_pick(CPU_Soket);
			system("CLS");
			if(CPU_Soket!=4) CPU_Soket=0;
			
			PC[2]=RAM_pick();
			system("CLS");
			
			PC[3]=GPU_pick();
			system("CLS");
			
			PC[4]=HDD_pick();
			system("CLS");
			
			PC[5]=SSD_pick();
			system("CLS");
			
			PC[6]=Kasa_pick();
			system("CLS");
			
			Max_using=Power_using(PC, 7);
			PC[7]=PSU_pick(Max_using);
			system("CLS");
			
			PC[8]=Cooler_pick(CPU_Soket);
			system("CLS");
			
			return PC;
		}
	public:
		int Power_using(int dizi[], int n){
			int POWER=0, sayac=0, change;
			string readed;
			
			ifstream CPU_W;
			ifstream Anakart_W;
			ifstream RAM_W;
			ifstream GPU_W;
			ifstream HDD_W;
			ifstream SSD_W;
			ifstream Kasa_W;
			CPU_W.open("CPU_W.dll", ios::in);
			Anakart_W.open("Anakart_W.dll", ios::in);
			RAM_W.open("RAM_W.dll", ios::in);
			GPU_W.open("GPU_W.dll", ios::in);
			HDD_W.open("HDD_W.dll", ios::in);
			SSD_W.open("SSD_W.dll", ios::in);
			Kasa_W.open("Kasa_W.dll", ios::in);
			
			while(!CPU_W.eof()){
				getline(CPU_W, readed);
				change=atoi(readed.c_str());
				if(dizi[0]==sayac) break;
				sayac++;
			}
			POWER=POWER+change;
			sayac=0;
			
			while(!Anakart_W.eof()){
				getline(Anakart_W, readed);
				change=atoi(readed.c_str());
				if(dizi[1]==sayac) break;
				sayac++;
			}
			POWER=POWER+change;
			sayac=0;
			
			while(!RAM_W.eof()){
				getline(RAM_W, readed);
				change=atoi(readed.c_str());
				if(dizi[2]==sayac) break;
				sayac++;
			}
			POWER=POWER+change;
			sayac=0;
			
			while(!GPU_W.eof()){
				getline(GPU_W, readed);
				change=atoi(readed.c_str());
				if(dizi[3]==sayac) break;
				sayac++;
			}
			POWER=POWER+change;
			sayac=0;
			
			while(!HDD_W.eof()){
				getline(HDD_W, readed);
				change=atoi(readed.c_str());
				if(dizi[4]==sayac) break;
				sayac++;
			}
			POWER=POWER+change;
			sayac=0;
			
			while(!SSD_W.eof()){
				getline(SSD_W, readed);
				change=atoi(readed.c_str());
				if(dizi[5]==sayac) break;
				sayac++;
			}
			POWER=POWER+change;
			sayac=0;
			
			while(!Kasa_W.eof()){
				getline(Kasa_W, readed);
				change=atoi(readed.c_str());
				if(dizi[6]==sayac) break;
				sayac++;
			}
			POWER=POWER+change;
			sayac=0;
			
			return POWER;
		}
	public:
		int CPU_pick(){
			string readed;
			int x=0, y=0, z=0;
			
			ifstream CPU_file;
			CPU_file.open("CPU.dll", ios::in);
			while (!CPU_file.eof()){
				getline(CPU_file, readed);
				++x;
			}
			CPU_file.close();
			
			string CPU_dizi[x];
			int secim[x]={1};
			y=x;
			x=0;
			
			CPU_file.open("CPU.dll", ios::in);
			while (!CPU_file.eof()){
				getline(CPU_file, CPU_dizi[x]);
				++x;
			}
			CPU_file.close();
			
			char hamle;
			
			while(hamle!='E' && hamle!='e'){
				system("CLS");
				for(x=0; x<y; x++){
					if(secim[x]==1){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
						cout << "[x] ";
						z=x;
					}
					if(secim[x]==0){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
						cout << "[ ] ";
					}
					cout << CPU_dizi[x] << endl;
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
	public:
		int CPU_soket(int x){
			int sayac=0, a=99999;
			string readed;
			ifstream CPU_soket;
			CPU_soket.open("CPU_soket.dll", ios::in);
			while(!CPU_soket.eof()){
				getline(CPU_soket, readed);
				if(sayac==x){
					a=atoi(readed.c_str());
					CPU_soket.close();
					return a;
				}
				sayac++;
			}
		}
	public:
		int Anakart_pick(int CPU_soketO){
			int x=0, y, z, t=0, u=0, sayac=0, same;
			
			ifstream Anakart_CPU_soket;
			ifstream Anakart_file;
			string readed, readed2;
			
			system("CLS");
			
			Anakart_file.open("Anakart.dll", ios::in);
			while(!Anakart_file.eof()){
				getline(Anakart_file, readed);
				x++;
			}
			y=x, z=x;
			Anakart_file.close();
			int control[x]={0}, secim[x]={1};
			
			Anakart_CPU_soket.open("Anakart_CPU_soket.dll", ios::in);
			
			for(int same_slot=0; same_slot<x; same_slot++){
				getline(Anakart_CPU_soket, readed2);
				same=atoi(readed2.c_str());
				if(CPU_soketO==same){
					sayac++;
					control[same_slot]=1;
				}
				else control[same_slot]=0;
			}
			Anakart_CPU_soket.close();
			
			string Anakart_dizi[x];
			
			Anakart_CPU_soket.open("Anakart_CPU_soket.dll", ios::in);
			
			Anakart_file.open("Anakart.dll", ios::in);
			
			while(!Anakart_file.eof()){
				getline(Anakart_file, readed);
				
				Anakart_dizi[t]=readed;
				t++;
			}
			
			char hamle='z';
			
			while(hamle!='E' && hamle!='e'){
				system("CLS");
				for(x=0; x<y; x++){
					if(control[x]==1){
						if(secim[x]==1){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
							cout << "[x] ";
							z=x;
						}
						if(secim[x]==0){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
							cout << "[ ] ";
						}
						cout << Anakart_dizi[x] << endl;
					} else{
						if(secim[x]==1){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
							cout << "[x] ";
							z=x;
						}
						if(secim[x]==0){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
							cout << "[ ] ";
						}
						cout << Anakart_dizi[x] << endl;
					}
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
			getch();
		}
	public:
		int RAM_pick(){
			string readed;
			int x=0, y=0, z=0;
			
			ifstream RAM_file;
			RAM_file.open("RAM.dll", ios::in);
			while (!RAM_file.eof()){
				getline(RAM_file, readed);
				++x;
			}
			RAM_file.close();
			
			string RAM_dizi[x];
			int secim[x]={1};
			y=x;
			x=0;
			
			RAM_file.open("RAM.dll", ios::in);
			while (!RAM_file.eof()){
				getline(RAM_file, RAM_dizi[x]);
				++x;
			}
			RAM_file.close();
			
			char hamle;
			
			while(hamle!='E' && hamle!='e'){
				system("CLS");
				for(x=0; x<y; x++){
					if(secim[x]==1){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
						cout << "[x] ";
						z=x;
					}
					if(secim[x]==0){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
						cout << "[ ] ";
					}
					cout << RAM_dizi[x] << endl;
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
	public:
		int GPU_pick(){
			string readed;
			int x=0, y=0, z=0;
			
			ifstream GPU_file;
			GPU_file.open("GPU.dll", ios::in);
			while (!GPU_file.eof()){
				getline(GPU_file, readed);
				++x;
			}
			GPU_file.close();
			
			string GPU_dizi[x];
			int secim[x]={1};
			y=x;
			x=0;
			
			GPU_file.open("GPU.dll", ios::in);
			while (!GPU_file.eof()){
				getline(GPU_file, GPU_dizi[x]);
				++x;
			}
			GPU_file.close();
			
			char hamle='z';
			
			while(hamle!='E' && hamle!='e'){
				system("CLS");
				for(x=0; x<y; x++){
					if(secim[x]==1){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
						cout << "[x] ";
						z=x;
					}
					if(secim[x]==0){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
						cout << "[ ] ";
					}
					cout << GPU_dizi[x] << endl;
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
	public:
		int HDD_pick(){
			string readed;
			int x=0, y=0, z=0;
			
			ifstream HDD_file;
			HDD_file.open("HDD.dll", ios::in);
			while (!HDD_file.eof()){
				getline(HDD_file, readed);
				++x;
			}
			HDD_file.close();
			
			string HDD_dizi[x];
			int secim[x]={1};
			y=x;
			x=0;
			
			HDD_file.open("HDD.dll", ios::in);
			while (!HDD_file.eof()){
				getline(HDD_file, HDD_dizi[x]);
				++x;
			}
			HDD_file.close();
			
			char hamle='z';
			
			while(hamle!='E' && hamle!='e'){
				system("CLS");
				for(x=0; x<y; x++){
					if(secim[x]==1){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
						cout << "[x] ";
						z=x;
					}
					if(secim[x]==0){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
						cout << "[ ] ";
					}
					cout << HDD_dizi[x] << endl;
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
	public:
		int SSD_pick(){
			string readed;
			int x=0, y=0, z=0;
			
			ifstream SSD_file;
			SSD_file.open("SSD.dll", ios::in);
			while (!SSD_file.eof()){
				getline(SSD_file, readed);
				++x;
			}
			SSD_file.close();
			
			string SSD_dizi[x];
			int secim[x]={1};
			y=x;
			x=0;
			
			SSD_file.open("SSD.dll", ios::in);
			while (!SSD_file.eof()){
				getline(SSD_file, SSD_dizi[x]);
				++x;
			}
			SSD_file.close();
			
			char hamle='z';
			
			while(hamle!='E' && hamle!='e'){
				system("CLS");
				for(x=0; x<y; x++){
					if(secim[x]==1){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
						cout << "[x] ";
						z=x;
					}
					if(secim[x]==0){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
						cout << "[ ] ";
					}
					cout << SSD_dizi[x] << endl;
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
	public:
		int Kasa_pick(){
			string readed;
			int x=0, y=0, z=0;
			
			ifstream Kasa_file;
			Kasa_file.open("Kasa.dll", ios::in);
			while (!Kasa_file.eof()){
				getline(Kasa_file, readed);
				++x;
			}
			Kasa_file.close();
			
			string Kasa_dizi[x];
			int secim[x]={1};
			y=x;
			x=0;
			
			Kasa_file.open("Kasa.dll", ios::in);
			while (!Kasa_file.eof()){
				getline(Kasa_file, Kasa_dizi[x]);
				++x;
			}
			Kasa_file.close();
			
			char hamle='z';
			
			while(hamle!='E' && hamle!='e'){
				system("CLS");
				for(x=0; x<y; x++){
					if(secim[x]==1){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
						cout << "[x] ";
						z=x;
					}
					if(secim[x]==0){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
						cout << "[ ] ";
					}
					cout << Kasa_dizi[x] << endl;
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
	public:
		int PSU_pick(int PC_Using){
			int x=0, y, z, t=0, u=0, sayac=0, same;
			
			ifstream PSU_CPU_soket;
			ifstream PSU_file;
			string readed, readed2;
			
			system("CLS");
			
			PSU_file.open("PSU.dll", ios::in);
			while(!PSU_file.eof()){
				getline(PSU_file, readed);
				x++;
			}
			y=x, z=x;
			PSU_file.close();
			int control[x]={0}, secim[x]={1};
			
			PSU_CPU_soket.open("PSU_W.dll", ios::in);
			
			for(int same_slot=0; same_slot<x; same_slot++){
				getline(PSU_CPU_soket, readed2);
				same=atoi(readed2.c_str());
				if(PC_Using<same){
					sayac++;
					control[same_slot]=1;
				}
				else control[same_slot]=0;
			}
			PSU_CPU_soket.close();
			
			string PSU_dizi[x];
			
			PSU_CPU_soket.open("PSU_CPU_soket.dll", ios::in);
			
			PSU_file.open("PSU.dll", ios::in);
			
			while(!PSU_file.eof()){
				getline(PSU_file, readed);
				
				PSU_dizi[t]=readed;
				t++;
			}
			
			char hamle='z';
			
			while(hamle!='E' && hamle!='e'){
				system("CLS");
				for(x=0; x<y; x++){
					if(control[x]==1){
						if(secim[x]==1){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
							cout << "[x] ";
							z=x;
						}
						if(secim[x]==0){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
							cout << "[ ] ";
						}
						cout << PSU_dizi[x] << endl;
					} else{
						if(secim[x]==1){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
							cout << "[x] ";
							z=x;
						}
						if(secim[x]==0){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
							cout << "[ ] ";
						}
						cout << PSU_dizi[x] << endl;
					}
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
			getch();
		}
	public:
		int Cooler_pick(int CPU_soketO){
			int x=0, y, z, t=0, u=0, sayac=0, same;
			
			ifstream Cooler_CPU_soket;
			ifstream Cooler_file;
			string readed, readed2;
			
			system("CLS");
			
			Cooler_file.open("Cooler.dll", ios::in);
			while(!Cooler_file.eof()){
				getline(Cooler_file, readed);
				x++;
			}
			y=x, z=x;
			Cooler_file.close();
			int control[x]={0}, secim[x]={1};
			
			Cooler_CPU_soket.open("Cooler_CPU_soket.dll", ios::in);
			
			for(int same_slot=0; same_slot<x; same_slot++){
				getline(Cooler_CPU_soket, readed2);
				same=atoi(readed2.c_str());
				if(CPU_soketO==same){
					sayac++;
					control[same_slot]=1;
				}
				else control[same_slot]=0;
			}
			Cooler_CPU_soket.close();
			
			string Cooler_dizi[x];
			
			Cooler_CPU_soket.open("Cooler_CPU_soket.dll", ios::in);
			
			Cooler_file.open("Cooler.dll", ios::in);
			
			while(!Cooler_file.eof()){
				getline(Cooler_file, readed);
				
				Cooler_dizi[t]=readed;
				t++;
			}
			
			char hamle='z';
			
			while(hamle!='E' && hamle!='e'){
				system("CLS");
				for(x=0; x<y; x++){
					if(control[x]==1){
						if(secim[x]==1){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
							cout << "[x] ";
							z=x;
						}
						if(secim[x]==0){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
							cout << "[ ] ";
						}
						cout << Cooler_dizi[x] << endl;
					} else{
						if(secim[x]==1){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
							cout << "[x] ";
							z=x;
						}
						if(secim[x]==0){
							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
							cout << "[ ] ";
						}
						cout << Cooler_dizi[x] << endl;
					}
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
			getch();
		}
};
