#include <iostream>

enum months {
	jan = 1, feb, mar, apr,	may, jun, jul, avg, sep, oct, nov, dec
};

int main() {
	
	setlocale(LC_ALL, "Russian");
	int x = 0;

	while (true) {		

		std::cout << "Введите номер месяца: ";
		std::cin >> x;
		
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');
			std::cout << "Необходимо ввести число!" << std::endl;
			continue;
		}
		if (x == 0) {
			break;
		}
		if (x < 0 || x > 12) {
			std::cout << "Число должно быть от 1 до 12!" << std::endl;
			continue;
		}

		switch (static_cast<months>(x))
		{
		case months::jan:
			std::cout << "Январь";
			break;
		case months::feb:
			std::cout << "Февраль";
			break;
		case months::mar:
			std::cout << "Март";
			break;
		case months::apr:
			std::cout << "Апрель";
			break;
		case months::may:
			std::cout << "Май";
			break;
		case months::jun:
			std::cout << "Июнь";
			break;
		case months::jul:
			std::cout << "Июль";
			break;
		case months::avg:
			std::cout << "Август";
			break;
		case months::sep:
			std::cout << "Сентябрь";
			break;
		case months::oct:
			std::cout << "Октябрь";
			break;
		case months::nov:
			std::cout << "Ноябрь";
			break;
		case months::dec:
			std::cout << "Декабрь";
			break;
		default:
			break;
		}
		
		std::cout << std::endl;

	}
}
