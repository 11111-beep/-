#include<stdio.h>
int main()
{

int isprime = 1;
int n=3;
int x;
printf("请输入数字：");
//scanf(" % d", &n);
for (x=2;x < n;x++) {
	if (n % x ==0) {
		isprime = 0;
	}
}
//这里要两个等于号 
if (isprime == 1) {
	printf("是素数。");
}
else {
	printf("不是素数。");
}
return 0;
}
