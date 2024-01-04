#include "lib.main.h"
void input(data mhs, int jumlah){
	int i;
	for(i=0;i<jumlah;i++){
		scanf(" %s",&mhs[i].nama);
		scanf("%d",&mhs[i].nilai);
	}
}
void urut(data mhs, int jumlah){
	int i,j,temp;
	char tempo[100];
	for(i=1;i<jumlah;i++){
    	temp=mhs[i].nilai;
    	strcpy(tempo,mhs[i].nama);
    	j=i-1;
    	while((temp>mhs[j].nilai)&&(j>=0)){
    		mhs[j+1].nilai=mhs[j].nilai;
    		strcpy(mhs[j+1].nama,mhs[j].nama);
    		j=j-1;
    	}
    	mhs[j+1].nilai=temp;
    	strcpy(mhs[j+1].nama,tempo);
	}
}
void print(data mhs, int jumlah, int kelas){
	int i,j;
	for(i=0;i<kelas;i++){
		printf("\nKelas X-%d :\n",i+1);
		for(j=0;j<jumlah;j++){
			if(j%kelas==i){
				printf("%s | %d\n",mhs[j].nama,mhs[j].nilai);
			}
		}
		printf("------------------------\n");
	}
}
