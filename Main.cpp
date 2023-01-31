#include <iostream>
using namespace std;

class Students {
public:
	Students() {
		this->name = "Empty"; // ім'я
		this->date = "Empty"; // дата народження
		this->number = "Empty"; // номер телефону
		this->address = "Empty"; // адреса
		this->НомерНавчальноїГрупи = 0; // номер навчальної групи
	}
	void GetStudentInfo() {
		cout << "Iм'я: " << this->name << "\n";
		cout << "Дата народження: " << this->date << "\n";
		cout << "Номер телефону: " << this->number << "\n";
		cout << "Адреса: " << this->address << "\n";
		cout << "Номер навчальної групи: " << this->НомерНавчальноїГрупи << "\n";
	}

	void SetStudentName(string name) {this->name = name;}
	void SetStudentDate(string date) { this->date = date; }
	void SetStudentNumber(string number) { this->number = number; }
	void SetStudentAddress(string address) { this->address = address; }
	void SetStudentНомерНавчальноїГрупи(int НомерНавчальноїГрупи) { this->НомерНавчальноїГрупи = НомерНавчальноїГрупи; }
private:
	string name; // ім'я
	string date; // дата народження
	string number; // номер телефону
	string address; // адреса
	int НомерНавчальноїГрупи; // номер навчальної групи
};

int main() {
	system("chcp 1251>nul");
	Students Student1, Student2;
	Student1.GetStudentInfo();
	cout << "\n\n";

	Student1.SetStudentName("Ivan"); Student1.SetStudentDate("12.12.2012");
	Student1.SetStudentNumber("+380***08"); Student1.SetStudentAddress("Ukraine");
	Student1.SetStudentНомерНавчальноїГрупи(3);

	Student1.GetStudentInfo();
	return 0;
}

/*
Реалізуйте клас «Студенти».
Потрібно зберегти в змінних наступні дані:
ім'я, дата народження, номер телефону, адреса, номер навчальної групи.
Реалізуйте функції члена класу

для введення і
виведення даних,
редагування окремих змінних.
*/
