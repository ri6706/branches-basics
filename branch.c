#include <stdio.h>

int main()
{
	int data = 0, age = 0;

	printf("Введите ваш год рождения");
	scanf("%d", &data);

	age = 2017 - data;

	if (age < 18) {
		printf("Вы несовершеннолетний, вам %d лет\n", age); 	
	}else if(age >= 18) {
		printf("Вы совершеннолетний, вам %d лет\n", age);
	}
	
	return 0;
}