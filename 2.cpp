#include<stdio.h>
int main()
{

int isprime = 1;
int n=3;
int x;
printf("���������֣�");
//scanf(" % d", &n);
for (x=2;x < n;x++) {
	if (n % x ==0) {
		isprime = 0;
	}
}
//����Ҫ�������ں� 
if (isprime == 1) {
	printf("��������");
}
else {
	printf("����������");
}
return 0;
}
