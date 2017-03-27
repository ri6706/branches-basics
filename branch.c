#include <stdio.h>

int main()
{
	int data = 0, age = 0;

	printf("Введите ваш год рождения");
	scanf("%d", &data);

	age = 2017 - data;

	if (age < 18) {
		printf("Вы ребенок, вам %d лет\n", age); 	
	}else if() {

	}
	
	return 0;
}