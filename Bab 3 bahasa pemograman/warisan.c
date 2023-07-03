#include <stdio.h>
main()
{
	float kekayaan,jlh_anak,laki_laki,perempuan,warisan,warisan2;
	
	printf("berapa total jumlah anak anda  = ");
	scanf("%f", &jlh_anak);
	
	printf("jumlah seluruh anak laki laki anda = ");
	scanf("%f", &laki_laki);
	
	printf("jumlah seluruh anak perempuan anda = ");
	scanf("%f", &perempuan);
	
	printf("masukkan jumlah seluruh kekayaan anda = ");
	scanf("%f", &kekayaan);
	
	warisan = kekayaan/laki_laki*0.5;
	warisan2 = kekayaan/perempuan*0.25;
	
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("total jumlah anak anda adalah %f\n",jlh_anak);
	printf("warisan untuk anak laki laki anda per orang adalah %f\n ", warisan);
	printf("warisan untuk anak perempuan anda per orang adalah %f\n", warisan2);
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
}