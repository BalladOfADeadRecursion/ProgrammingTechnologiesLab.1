#include <iostream> 
using namespace std;

template<class Type> Type division(Type x, Type y)
{
	return x / y;
}

int main()
{
begin:
	cout << "Enter a matrix vertex: " << '\n';
	int n; cin >> n;
	if (n <= 0) goto begin;

	//создание динамического массива для хранения матрицы 
	int m;  int i = 0; int j = 0;
	m = n;
	double nn = static_cast<double>(n);
	double mm = static_cast<double>(m);
	double** mas = new double* [nn];
	for (i = 0; i < n; ++i)
		mas[i] = new double[mm];
	cout << "\n";

	//заполнение матрицы числами
	cout << "Enter a matrix vertex: " << '\n';
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> mas[i][j];
		}
	}
	cout << "\n\n";

	//вывод заполненной матрицы на экран
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j] << "  ";
		}
		cout << '\n';
	}
	cout << "\n\n";

	//ввод значения скаляра
	cout << "Enter a skalar: ";
	double skalar; cin >> skalar;
	cout << "\n\n";

	//вывод матрицы на экран после ее деления на скаляр
	cout << "Matrix after division: " << '\n';
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << division(mas[i][j], skalar) << "  ";
		}
		cout << '\n';
	}
	return 0;
}