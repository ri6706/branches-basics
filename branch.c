#include <stdio.h>

int main()
{
	int year = 0, data = 0, age = 0;

	printf("Введите текущий год");
	scanf("%d", &year);

	printf("Введите год вашего рождения\n");
	scanf("%d", &data)
	
	age = 2017 - data;

	if (age < 18) {
		printf("Вы несовершеннолетний, вам %d лет\n", age); 	
	}else if(age >= 18) {
		printf("Вы совершеннолетний, вам %d лет\n", age);
	}
	
	return 0;
}