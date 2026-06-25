#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	printf("\033[32mNote: Enter the correct base for the number. This program works accurately for number systems up to base 10.\033[0m\n");
	for (int ii=0; ;){
		char A[100];
		int f,t;
		printf("Enter a number - ");
		scanf("%s",A);
		printf("Conversion From: ");
		scanf("%d",&f);
		printf("             To: ");
		scanf("%d",&t);
		int L=strlen(A);
		int d,D;
		d=0;
		for (int i=0;i<L;i++){
			D=A[L-1-i]-'0';
			d=d+(D*pow(f,i));
		}
		printf("The binary form of the decimal number %s is: %d",A,d);
	//-------------------------------------------------------------------
		int a,b,R,i;
		i=0;
		a=d;
		b=a;
		while (b!=0){
			i=i+1;
			R=b%t;
			b=b/t;
		}
		int r[i];
		for (int j=0;j<i;j++){
			R=a%t;
			a=a/t;
			r[j]=R;
			if (a==0){
				break;
			}
		}
		printf("\n");
		printf("The binary form of the decimal number %d is:",d);
		for (int s=i-1;s>=0;s--){
			printf("%d",r[s]);
		}
		printf("\n");
		printf("------------------------------------------");
		printf("\n");
	}
}