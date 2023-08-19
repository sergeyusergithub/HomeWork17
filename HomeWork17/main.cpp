#include <iostream>

double mean(int a, int b) {
	return (double)(a + b) / 2;
}

double mean_arr(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return (double)sum / length;
}

void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
}

void powers(int n, int m) {
	int pow = 1;
	for (int i = 0; i <= m; i++) {
		if (i == 0)
			pow = 1;
		else
			pow *= n;
		std::cout << n << "^" << i << " = " << pow << "\n";
	}
}

void positive_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0)
			arr[i] = -arr[i];
	}
}



int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Задача 1. Функция среднего
	std::cout << "Задача 1.\nСреднее арифметическое:\n";
	std::cout << "(5 + 2)/2 = " << mean(5, 2) << std::endl;
	std::cout << "\n\n";

	// Задача 2. Среднее арифметическое массива
	std::cout << "Задача 2.\nМассив:\n";
	const int size = 5;
	int arr[size]{ 4, 6, 11, 15, 1 };

	print_arr(arr, size);

	std::cout << "\nСреднее арифметическое массива: " << mean_arr(arr, size) << "\n\n";

	// Задача 3. Функция выводящая степень числа
	std::cout << "Задача3.\nВозведение в степень:\n";
	powers(5, 5);
	std::cout << "\n\n";
	
	// Задача 4. Изменение отрицательных значений на положительные
	std::cout << "Задача 4.\nИсходный массив:\n";
	const int size1 = 7;
	int arr1[size1]{ 4, -1, 0, -2, -7, 11, -9 };
	print_arr(arr1, size1);
	positive_arr(arr1, size1);
	std::cout << "\nМассив положительных чисел:\n";
	print_arr(arr1, size1);
	std::cout << "\n\n";

	return 0;
}