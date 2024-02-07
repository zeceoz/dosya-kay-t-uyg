#include <stdio.h>
#pragma warning(disable:4996)

	
int no;
char ad[30], soy[30];

FILE* dosya;

void ekle() {

	if (dosya = fopen("ads.txt", "a")) {

		printf("Dosya acildi\n\n");
		printf("Numara :");		scanf("%d", &no);
		printf("İsim   : ");	scanf("%s", &ad);
		printf("Soyisim:");		scanf("%s", &soy);

		fprintf(dosya, "%d\t%s\t%s\n", no, ad, soy);
		fclose(dosya);
	}
	else {

		printf("dosya acilamadi\n\n");
	}
}

void sil(){
	
	remove("ads.txt");
	printf("Dosya silindi");
}

void oku() {
	
	if(dosya=fopen("ads.txt", "r")){
		while (!feof(dosya)) {
			fscanf(dosya, "%d\t%s\t%s\n", &no, &ad, &soy);
			printf("numara\tisim\tsoyisim\n");
			printf("%d\t%s\t%s\n", no, ad, soy);
		}
	}
	else {
		printf("\nhata\n\n");
	}
}

int main() {

	int secim=0;

	while (secim != 4) {
		printf("\n\n-------------------------------------\n\n");
		printf("---------Ogrenci Kayit Sistemi--------\n\n");
		printf("(1)Ogrenci Ekle\n(2)Kayitli Ogrenciler\n(3)Kayitlari sil\n(4)Cikis\n");
		scanf("%d", &secim);

		switch (secim) {

		case 1: ekle();
			break;

		case 2: oku();
			break;

		case 3: sil();
			break;

		case 4: printf("-------------------------------------");  
			break;

			printf("----------------------------");
		}

	}
	

	return 0;
}