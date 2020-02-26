#include <stdio.h>

int main()

//*************** Zadacha #1
/*
{
	int a, b, sum;
	a = 5;
	b = 2;
	sum = a + b;
	printf("%d", sum);
	return 0;
}
*/

//*************** Zadacha #2
/*
{
	float a, b, c;
	printf("Vuvedete chislo za a: ");
	scanf_s("%f", &a);
	printf("Vuvedete chislo za b: ");
	scanf_s("%f", &b);
	c = a / b;
	printf("Poluchenoto chislo ot delenieto e: %f", c);
	return 0;
}
*/

//***************** Zadacha #3
/*
{
	int a, h, S;
	printf("Vuvedete stoinost na stranata a: ");
	scanf_s("%d", &a);
	printf("Vuvedete stoinost na visochinata h: ");
	scanf_s("%d", &h);
	S = (a * h) / 2;
	printf("Liceto na triugulnika e: %d", S);
	return 0;
}
*/

//***************** Zadacha #4

/*
{
	int hour, minutes, seconds;
	printf("Vuvedete chas: ");
	scanf_s("%d", &hour);
	minutes = hour * 60;
	printf("Dadeniq chas v minuti: %d \n", minutes);
	seconds = minutes * 60;
	printf("Dadeniq/te chas/minuti v secundi: %d \n", seconds);
	return 0;
}
*/

//**************** Zadacha #5 (tuk si pomognah s internet..)
/*
{
	int a, b, c, remainder;
	printf("Vuvedete chislo za a: ");
	scanf_s("%d", &a);
	printf("Vuvedete chislo za b: ");
	scanf_s("%d", &b);
	c = a / b;
	remainder = a % b;
	printf("Poluchenoto chislo ot delenieto e: %d \n", c);
	printf("Polucheniqt ostatuk e: %d", remainder);
	return 0;
}
*/

//****************** Zadacha #6 (off, tuka zabih tursih reshenie,
//ne znam metoda mi dali e pravilen ..)
/*
{
	int getDay, number;
	printf("Napishete chislo ot 1 do 6: ");
	scanf_s("%d", &number);
	if (getDay == 1)
		printf("Monday");
	if (getDay == 2)
		printf("Thuesday");
	if (getDay == 3)
		printf("Wednesday");
	if (getDay == 4)
		printf("Thursday");
	if (getDay == 5)
		printf("Friday");
	if (getDay == 6)
		printf("Saturday");
	if (getDay == 7)
		printf("Sunday");
	return 0;
}
*/

//**************** Zadacha #7
/*
{
	int year;
	printf("Napishete godina: ");
	scanf_s("%d", &year);
	if (year % 4 == 0)
		printf("Da, godinata e visokosna.");
	else
		printf("Ne, godinata ne e visokosna.");
return 0;
}
*/

//************** Zadacha #8
/*
{
	int getDays;
	printf("Vuvedete chislo za suotvetniq mesec(ot 1 do 12): ");
	scanf_s("%d", &getDays);
	if (getDays == 2)
		printf("Meseca e 28 dni.");
	else
	if (getDays % 2 == 0)
		printf("Meseca e 30 dni.");
	else
		printf("Meseca e 31 dni.");
}
*/

//******************* Zadacha #9
// iii tazi zadacha ne uspqh, imam nqkude greshka, vse mi izpisva che chisloto e slojno ..
/*
{
int a;
printf("Vuvedete chislo: ");
scanf_s("%d", &a);
if (a <= 0)
printf("Vuveli ste nevalidno chislo.\n");
else 
if (a > 1 && a % 1 == a  && a % a == 0)
printf("Chisloto, koeto izbrahte e prosto.\n");
else
printf("Chisloto, koeto izbrahte e slojno.\n");
return 0;
}
*/