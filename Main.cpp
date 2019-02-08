# include  < iostream >
//# include  < limit >
# include  < iomanip >
using namespace std;

/*ТОДО
Используя заголовочный файл <limit>, std::cout, sizeof() и управляющие изменения
cоставьте следующую таблицу 
Тип переменной | Размер, | Значение | Количество
| байт | Минимальное | Максимальное | значимых бит
-------------------------------------------------- ---------------------------------------- -
bool | 1 | ложь | правда | 1
без знака короткая | 2 | 0 | 65535 | 16
короткая
без знака int
ИНТ
без знака долго
долго
без знака длинный длинный
долго долго
голец
поплавок
двойной
для справки использовать http ://www.cplusplus.com/reference/limits/numeric_limits/
*/

int  main()
{	
	setlocale(0, ""); // включение адекватного представления кириллицы в консоль
	std::cout << std::boolalpha; // настройка консоли, вывод булевых типов как true / false
	sizeof(int); // возвращает байтовый размер переменной типа int
	std::numeric_limits < int > ::max(); // возвращает значение, которое может хранить переменную типа int
	std::numeric_limits < int > ::min(); // возвращает минимальное значение
	std::numeric_limits < int > ::digits; // возвращает количество значимых бит переменной типа int

	cout << left;
	/*cout << setw(17) << " Тип переменной " << " | " << setw(3) << " " << " Размер " << setw(3) << " " << " | " << setw(7) << " " << " Значение " << setw(7) << " " << "| " << setw(3) << " " << " количество " << endl;
	cout << setw(17) << " " << " | " << setw(3) << " " << " байт " << setw(6) << "" << "|" << setw(3) << "" << "Минимальное " << "|" << setw                     endl;*/
	 
	cout << setw(17) << "Тип переменной  " << "|" << internal << setw(10) << "Размер  " << "|" << setw(30) << "Значение                " << "|" << setw(13) << "Количество" << endl;
	cout << left;
	cout << setw(17) << "" << "|" << internal << setw(10) << "Байт  " << "|" << setw(10) << " Минимальное  "   << "|   " << setw(10) << "Максимальное" << "|" << setw(13) <<  "  значимых бит" << endl;
	cout << left;

	cout << setw(17) << "bool" << "|" << internal << setw(10) << sizeof(bool) << "|" << setw(10) << numeric_limits<bool>::min()<< "   |   " << setw(10) << numeric_limits<bool>::max() << "   |" << setw(13) << numeric_limits < bool> ::digits << left << endl;
	cout << setw(17) << "unsigned short" << "|" << internal << setw(10) << sizeof(unsigned short) << "|" << setw(10) << numeric_limits<unsigned short>::min() << "   |   " << setw(10) << numeric_limits<unsigned short>::max() << "   |" << setw(13) << numeric_limits < unsigned short> ::digits << left << endl;
	cout << setw(17) << "short" << "|" << internal << setw(10) << sizeof(short) << "|" << setw(10) << numeric_limits<short>::min() << "   |   " << setw(10) << numeric_limits<short>::max() << "   |" << setw(13) << numeric_limits < short> ::digits << left << endl;
	cout << setw(17) << "unsigned int" << "|" << internal << setw(10) << sizeof(unsigned int) << "|" << setw(10) << numeric_limits<unsigned int>::min() << "   |   " << setw(10) << numeric_limits<unsigned int>::max() << "   |" << setw(13) << numeric_limits < unsigned int> ::digits << left << endl;
	cout << setw(17) << "int" << "|" << internal << setw(10) << sizeof(int) << "|" << setw(10) << numeric_limits<int>::min() << "   |   " << setw(10) << numeric_limits<int>::max() << "   |" << setw(13) << numeric_limits < int> ::digits << left << endl;
	cout << setw(17) << "unsigned long" << "|" << internal << setw(10) << sizeof(unsigned long) << "|" << setw(10) << numeric_limits<unsigned long>::min() << "   |   " << setw(10) << numeric_limits<unsigned long>::max() << "   |" << setw(13) << numeric_limits < unsigned long> ::digits << left << endl;
	cout << setw(17) << "long" << "|" << internal << setw(10) << sizeof( long) << "|" << setw(10) << numeric_limits< long>::min() << "   |   " << setw(10) << numeric_limits< long>::max() << "   |" << setw(13) << numeric_limits <  long> ::digits << left << endl;
	cout << setw(17) << "unsigned long" << "|" << internal << setw(10) << sizeof(unsigned long) << "|" << setw(10) << numeric_limits<unsigned long>::min() << "   |   " << setw(10) << numeric_limits<unsigned long>::max() << "   |" << setw(13) << numeric_limits < unsigned long> ::digits << left << endl;
	cout << setw(17) << "unsigned long long" << "|" << internal << setw(10) << sizeof(unsigned long long) << "|" << setw(10) << numeric_limits<unsigned long long>::min() << "   |   " << setw(10) << numeric_limits<unsigned long long>::max() << "   |" << setw(13) << numeric_limits < unsigned long> ::digits << left << endl;
	cout << setw(17) << "long long" << "|" << internal << setw(10) << sizeof(long long) << "|" << setw(10) << numeric_limits<long long>::min() << "   |   " << setw(10) << numeric_limits<long long>::max() << "   |" << setw(13) << numeric_limits < long long> ::digits << left << endl;
	cout << setw(17) << "char" << "|" << internal << setw(10) << sizeof(char) << "|" << setw(10) << numeric_limits<char>::min() << "   |   " << setw(10) << numeric_limits<char>::max() << "   |" << setw(13) << numeric_limits < char> ::digits << left << endl;
	cout << setw(17) << "float" << "|" << internal << setw(10) << sizeof(float) << "|" << setw(10) << numeric_limits<float>::min() << "   |   " << setw(10) << numeric_limits<float>::max() << "   |" << setw(13) << numeric_limits < float> ::digits << left << endl;
	cout << setw(17) << "double" << "|" << internal << setw(10) << sizeof(double) << "|" << setw(10) << numeric_limits<double>::min() << "   |   " << setw(10) << numeric_limits<double>::max() << "   |" << setw(13) << numeric_limits < double> ::digits << left << endl;

	
}