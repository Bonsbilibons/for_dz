#include <iostream>
using namespace std;

class Date
{
private:
	short day;
	short month;
	short year;
public:
	Date() 
	{
		SetDay(1);
		SetMonth(1);
		SetYear(2024);
	}

	Date(short day, short month, short year)
	{
		SetDay(day);
		SetMonth(month);
		SetYear(year);
	}

	~Date() { }

	void ShowData()
	{
		cout << GetDay() << "." << GetMonth() << "." << GetYear() << "\n";
	}

	void SetDay(short day) 
	{
		if (day > 31)
		{
			throw "Wrong day";
		}
		this->day = day;
	}

	void SetMonth(short month) 
	{
		if (month > 12)
		{
			throw "Wrong month";
		}
		this->month = month;
	}

	void SetYear(short year) 
	{
		this->year = year;
	}

	short GetMonth() {
		return this->month;
	}

	short GetDay() 
	{
		return this->day;
	}

	short GetYear() 
	{
		return this->year;
	}


};

class Student
{
private:
	string surname;
	string name;
	string second_name;
	Date birthday;
	Date date_of_entry;
	string adress;
	string phone_number;
	int count_of_practicals;
	int count_of_homeworks;
	int count_of_exams;
	string* practicals;
	string* homeworks;
	string* exams;

	void SetCountOfPracticals(int count_of_practicals)
	{
		this->count_of_practicals = count_of_practicals;
	}
	int GetCountOfPracticals()
	{
		return this->count_of_practicals;
	}

	void SetCountOfHomeworks(int count_of_homeworks)
	{
		this->count_of_homeworks = count_of_homeworks;
	}
	int GetCountOfHomeworks()
	{
		return this->count_of_homeworks;
	}

	void SetCountOfExams(int count_of_exams)
	{
		this->count_of_exams = count_of_exams;
	}
	int GetCountOfExams()
	{
		return this->count_of_exams;
	}
public:
	Student()
	{
		Date birthday(1, 1, 2000);
		Date entry(1, 1, 2015);
		SetName("name");
		SetSurname("surname");
		SetSecondName("second_name");
		SetBirthday(birthday);
		SetDateOfEntry(entry);
		SetAdress("adress");
		SetPhoneNumber("number");
	}

	Student(
		string name, string surname, string second_name,
		Date birthday, Date date_of_entry,
		string adress, string phone_number
	)
	{
		SetName(name);
		SetSurname(surname);
		SetSecondName(second_name);
		SetBirthday(birthday);
		SetDateOfEntry(date_of_entry);
		SetAdress(adress);
		SetPhoneNumber(phone_number);
	}

	Student(
		string name, string surname, string second_name,
		Date birthday, Date date_of_entry,
		string adress, string phone_number,
		int count_of_practicals, string practicals[],
		int count_of_homeworks, string homeworks[],
		int count_of_exams, string exams[]
	)
	{
		SetName(name);
		SetSurname(surname);
		SetSecondName(second_name);
		SetBirthday(birthday);
		SetDateOfEntry(date_of_entry);
		SetAdress(adress);
		SetPhoneNumber(phone_number);
		SetPracticals(practicals, count_of_practicals);
		SetHomeworks(homeworks, count_of_homeworks);
		SetExams(exams, count_of_exams);
	}

	~Student()
	{
		if (practicals != nullptr)
		{
			delete[] practicals;
		}
		if (homeworks != nullptr)
		{
			delete[] homeworks;
		}
		if (exams != nullptr)
		{
			delete[] exams;
		}
	}

	void ShowData()
	{
		cout << "Name: " << GetName() << "\n";
		cout << "Surname: " << GetSurname() << "\n";
		cout << "Second name: " << GetSecondName() << "\n";
		cout << "Birthday: ";
		this->birthday.ShowData();
		cout << "Date of entry: ";
		this->date_of_entry.ShowData();
		cout << "Adress: " << GetAdress() << "\n";
		cout << "Phone number: " << GetPhoneNumber() << "\n";
		cout << "Practicals: ";
		ShowPracticals();
		cout << "\n";
		cout << "Homeworks: ";
		ShowHomeworks();
		cout << "\n";
		cout << "Exams";
		ShowExams();
	}

	void SetSurname(string surname)
	{
		this->surname = surname;
	}
	string GetSurname()
	{
		return this->surname;
	}

	void SetName(string name)
	{
		this->name = name;
	}
	string GetName()
	{
		return this->name;
	}
	
	void SetSecondName(string second_name)
	{
		this->second_name = second_name;
	}
	string GetSecondName()
	{
		return this->second_name;
	}

	void SetBirthday(Date birthday)
	{
		this->birthday = birthday;
	}
	Date GetBirthday()
	{
		return this->birthday;
	}

	void SetDateOfEntry(Date date_of_entry)
	{
		this->date_of_entry = date_of_entry;
	}
	Date GetDateOfEntry()
	{
		return this->date_of_entry;
	}

	void SetAdress(string adress)
	{
		this->adress = adress;
	}
	string GetAdress()
	{
		return this->adress;
	}
	
	void SetPhoneNumber(string phone_number)
	{
		this->phone_number = phone_number;
	}
	string GetPhoneNumber()
	{
		return this->phone_number;
	}

	void SetPracticals(string practicals[], int count)
	{
		delete[] this->practicals;
		SetCountOfPracticals(count);
		this->practicals = new string[count];
		for (int i = 0; i < count; i++) {
			this->practicals[i] = practicals[i];
		}
	}
	string GetPracticals()
	{
		string array;
		for (int i = 0; i < GetCountOfPracticals(); i++) {
			array += this->practicals[i];
		}
		return array;
	}
	void ShowPracticals()
	{
		for (int i = 0; i < GetCountOfPracticals(); i++) {
			cout << this->practicals[i] << " ";
		}
	}
	string GetPracticalByNum(int number)
	{
		if (number < 0 || number > GetCountOfPracticals()) {
			throw "Error index";
		}
		return this->practicals[number];
	}
	void AddPractical(string score)
	{
		string* array = new string[GetCountOfPracticals() + 1];
		for (int i = 0; i < GetCountOfPracticals(); i++) {
			array[i] = this->practicals[i];
		}
		array[GetCountOfPracticals()] = score;
		SetPracticals(array, GetCountOfPracticals() + 1);
		delete[] array;
	}

	void SetHomeworks(string homeworks[], int count)
	{
		delete[] this->homeworks;
		SetCountOfHomeworks(count);
		this->homeworks = new string[count];
		for (int i = 0; i < count; i++) {
			this->homeworks[i] = homeworks[i];
		}
	}
	string GetHomeworks()
	{
		string array;
		for (int i = 0; i < GetCountOfHomeworks(); i++) {
			array += this->homeworks[i];
		}
		return array;
	}
	void ShowHomeworks()
	{
		for (int i = 0; i < GetCountOfHomeworks(); i++) {
			cout << this->homeworks[i] << " ";
		}
	}
	string GetHomeworkByNum(int number)
	{
		if (number < 0 || number >= GetCountOfHomeworks()) {
			throw "Error index";
		}
		return this->homeworks[number];
	}
	void AddHomework(string homework)
	{
		string* array = new string[count_of_homeworks + 1];
		for (int i = 0; i < GetCountOfHomeworks(); i++) {
			array[i] = this->homeworks[i];
		}
		array[GetCountOfHomeworks()] = homework;
		SetHomeworks(array, GetCountOfHomeworks() + 1);
		delete[] array;
	}

	void SetExams(string exams[], int count)
	{
		delete[] this->exams;
		SetCountOfExams(count);
		this->exams = new string[count];
		for (int i = 0; i < count; i++) {
			this->exams[i] = exams[i];
		}
	}
	string GetExams()
	{
		string array;
		for (int i = 0; i < GetCountOfExams(); i++) {
			array += this->exams[i];
		}
		return array;
	}
	void ShowExams()
	{
		for (int i = 0; i < GetCountOfExams(); i++) {
			cout << this->exams[i] << " ";
		}
	}
	string GetExamByNum(int number)
	{
		if (number < 0 || number >= GetCountOfExams()) {
			throw "Error index";
		}
		return this->exams[number];
	}
	void AddExam(string exam)
	{
		string* array = new string[GetCountOfExams() + 1];
		for (int i = 0; i < GetCountOfExams(); i++) {
			array[i] = exams[i];
		}
		array[GetCountOfExams()] = exam;
		SetExams(array, GetCountOfExams() + 1);
		delete[] array;
	}
};

int main()
{
	string practicals[3] = {"12", "NZ", "9"};
	string homeworks[5] = {"10", "NZ", "11", "7", "9"};
	string exams[2] = {"12", "13"};
	Date birthday(1, 1, 2000);
	Date entry(2, 2, 2014);
	Student student("Sasha", "Sashkovich", "Alexandr", birthday, entry, "Baraholka", "43124242432", 3 , practicals, 5, homeworks, 2, exams);
	student.ShowData();

}
