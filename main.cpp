#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
	setlocale(LC_ALL, "Russian");
	

	// Задача 1. 

	std::cout << "Задача 1. \nМассив:\n";
	int arif = 0;
	int counter = 0;
	int counter2 = 0;
	int sum = 0;
	int arrey[10]{ 10, 15, 5, 2, 25, 4, 2, 5, 26, 14 };
	for (int i = 0; i < 10; i++) {
		counter++;
		sum += arrey[i];
		arif = sum / double(counter);
		if (arrey[i] < arif)
			counter2++;
		std::cout << arrey[i] << ' ';
	}
	std::cout << "\n\nСреднее арифметическое -> " << arif<< " Количество меньше найденного среднего арифметического -> " << counter2<< std::endl;


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	const int rows1 = 5;
	const int cols1 = 5;
	const int rows2 = 5;
	const int cols2 = 5;
	int arr[rows1][cols1]{
		{ 2, 8, 4,  9, 7 },
		{ 5, 6, 4,  6, 9 },
		{ 2, 2, 12, 4, 11 },
		{ 9, 4, 6,  14, 4 },
		{ 7, 1, 0, 9, 3 }
	};

	int arr1[rows2][cols2]{
		{ 4, 8,  4,  9, 2 },
		{ 5, 9,  5,  3, 7 },
		{ 8, 9,  10, 6, 2 },
		{ 1, 1, 12, 7, 0 },
		{ 4, 7, 14, 0, 12}
	};
	int arr2[5][5];
	std::cout << "\nПервый массив:\n";
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			std::cout << arr[i][j] << ' ';
			
		}
		std::cout << '\n';
		
		
	}
	std::cout << "Второй массив:\n";
	for (int i = 0; i < rows2; i++) {
		for (int j = 0; j < cols2; j++) 
			std::cout << arr1[i][j] << ' ';
		
		std::cout << '\n';
	}
	std::cout << "Сумма = \n";
	for (int i = 0; i < rows1; i++) {
		for (int j = 0; j < cols1; j++) {
			arr2[i][j] = arr[i][j] + arr1[i][j];
			std::cout << arr2[i][j] << "\t";
		}

		std::cout << std::endl;


	}
	std::cout << '\n';
	


	//Задача 3
	int n;
	
	std::cout << "Задача 3.\nВведите шестизначное число -> ";
	std::cin >> n;
	if (99999 > n || n > 1000000) {
		std::cout << "Error";
		return 0;
	}

	const int size1 = 6;
	int a = (n % 1000000) / 100000;
	int a1 = (n % 100000) / 10000;
	int a2 = (n % 10000) / 1000;
	int a3 = (n % 1000) / 100;
	int a4 = (n % 100) / 10;
	int a5 = n % 10;

	int arr3[size1]{ a, a1, a2, a3, a4, a5 };
	std::cout << "Массив: ";
	for (int i = 0; i < size1; i++)
		std::cout << arr3[i] << ' ';
	std::cout << std::endl;
	
	return 0;
}