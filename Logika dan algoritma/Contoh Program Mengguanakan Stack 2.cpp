#include <iostream>
using namespace std;

struct stack
{
	int nilai[4];
	string nama[4];
	float bayar[4];
	string jenis[4];
	int top;
	
};

struct stack stackbaru()
{
	struct stack tumpuk ;
	tumpuk.top = -1;
	return tumpuk;	
}

void push(struct stack & tumpukan)
{
	string nama; string kinds ;
	int kind;
	float hrg;
	printf("Masukkan nama : ");
	scanf("%d", &nama);
	printf("Masukkan Jenin Tiket : ");
	printf("1. VIP\n2. Biasa\n3. Ekonomis \n");
	scanf("%d", &kinds);

	if (kind == 1)
	{
			hrg = 50000;
			kinds = "VIP";
	}
	
	if (kind== 2)
	{
			hrg = 40000;
			kinds = "Biasa";
	}
	
	if (kind == 3)
	{
			hrg = 35000;
			kinds = "VIP";
	}
	
	tumpukan.top++;
	tumpukan.nama[tumpukan.top] = nama;
	tumpukan.jenis[tumpukan.top] = kinds;
	tumpukan.bayar[tumpukan.top] = hrg;
}

void pop ( struct stack & tumpukan)
{
	for (int i = 0; i<tumpukan.top; i++)
	{
		printf("Saudara %d ", tumpukan.nama[i]);
		printf("Berjenis Tiket %d", tumpukan.jenis[i]);
		printf("Total Bayar : %d", tumpukan.bayar[i]);
		tumpukan.nama[i] = tumpukan.nama[i+1];
		tumpukan.jenis[i] = tumpukan.jenis[i+1];
	}
}

void tampilkan(struct stack tumpukan)
{
	for (int i = 0; i<=tumpukan.top; i++)
	{
		printf("Saudara %d", tumpukan.nama[i]);
		printf("Total Bayar %d", tumpukan.bayar[i]);
	}
}

void menu()

{
	printf("----------------Menu Utama---------------");
	printf("1. Silahkan Masukkan Data Pembeli \n");
	printf("2. Tampilkan Data Pembeli Dalam Antrian \n");
	printf("3. Tampilkan Semua Data Pembeli \n");
	printf("0. Keluar \n");
	printf("----------------Menu Utama---------------");
	
}

int main()

{
	struct stack tumpukan;
	tumpukan = stackbaru();
	int pilihan;
	
	do
	
	{
		menu();
		printf("Silahkan Masukkan Pilihan Anda : \n");
		scanf("%d", &pilihan);
		
		if(pilihan == 1)
		{
			push(tumpukan);
		}
		if(pilihan == 2)
		{
			pop(tumpukan);
		}
		if(pilihan == 3)
		{
			tampilkan(tumpukan);
		}
	}
	while (pilihan !=0);
}

