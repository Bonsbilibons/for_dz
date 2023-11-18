#include <iostream>
#include <ctime>
using namespace std;


struct Date {
	unsigned int day;
	unsigned int month;
	int year;
	string weekday;

};

struct Time {
	unsigned short hours;
	unsigned short minutes;
	unsigned short seconds;
	unsigned short milliseconds;
};

struct DateTime {
	Date date;
	Time time;
};

void SetDateTime(DateTime& datetime)
{
	cout << "Enter number of day: ";
	cin >> datetime.date.day;
	if (datetime.date.day < 1 || datetime.date.day > 31)
	{
		cout << "Incorrect value for day";
		throw "Error day";
	}

	cout << "Enter number of month: ";
	cin >> datetime.date.month;
	if (datetime.date.month < 1 || datetime.date.month > 12)
	{
		cout << "Incorrect value for month";
		throw "Error month";
	}

	cout << "Enter number of year: ";
	cin >> datetime.date.year;

	int a = (14 - datetime.date.month) / 12;
	int y = datetime.date.year - a;
	int m = datetime.date.month + 12 * a - 2;
	int wd = (datetime.date.day + (31 * m) / 12 + y + y / 4 - y / 100 + y / 400) % 7;

	string weekdays[] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	datetime.date.weekday = weekdays[wd];

	cout << "Enter number of hours: ";
	cin >> datetime.time.hours;
	if (datetime.time.hours < 0 || datetime.time.hours > 23)
	{
		cout << "Incorrect value for hours";
		throw "Error hour";
	}

	cout << "Enter number of minutes: ";
	cin >> datetime.time.minutes;
	if (datetime.time.minutes < 0 || datetime.time.minutes > 59)
	{
		cout << "Incorrect value for minutes";
		throw "Error hour";
	}

	cout << "Enter number of seconds: ";
	cin >> datetime.time.seconds;
	if (datetime.time.seconds < 0 || datetime.time.seconds > 59)
	{
		cout << "Incorrect value for seconds";
		throw "Error hour";
	}

	srand(time(0));
	datetime.time.milliseconds = rand() % 1000;
}

void ShowDateTime(const DateTime& datetime)
{
	cout << datetime.date.weekday << "\n";

	printf("%02d.%02d.%04d \n", datetime.date.day, datetime.date.month, datetime.date.year);
	printf("%02d:%02d:%02d", datetime.time.hours, datetime.time.minutes, datetime.time.seconds);

}


//struct Student
//{
//	string name;
//	string surname;
//	
//	DateTime birthday;
//
//	DateTime start_of_studing;
//
//	double average_grade;
//
//	unsigned short height;
//	unsigned short weight;
//
//	string eye_colour;
//	string hair_colour;
//
//	int number_of_zachetka;
//};

//void SetStudentData(Student& student)
//{
//	cout << "Enter name: \n";
//	cin >> student.name;
//
//	cout << "Enter surname: \n";
//	cin >> student.surname;
//
//	cout << "Enter information of your birthday \n";
//	SetDateTime(student.birthday);
//
//	cout << "Enter information then you start studing \n";
//	SetDateTime(student.start_of_studing);
//
//	cout << "Enter avarage grade:\n";
//	cin >> student.average_grade;
//	if (student.average_grade < 0 || student.average_grade > 12)
//	{
//		cout << "Incorrect value for grade";
//		throw "Error hour";
//	}
//
//	cout << "Enter weight in kg";
//	cin >> student.weight;
//	if (student.weight < 25 || student.weight > 400)
//	{
//		cout << "Incorrect value for weight";
//		throw "Error hour";
//	}
//
//	cout << "Enter height in sm";
//	cin >> student.height;
//	if (student.height < 45 || student.height > 300)
//	{
//		cout << "Incorrect value for height";
//		throw "Error hour";
//	}
//
//	cout << "Enter eye colour";
//	cin >> student.eye_colour;
//
//	cout << "Enter hair colour";
//	cin >> student.hair_colour;
//
//
//	cout << "Enter number_of_zachetka";
//	cin >> student.number_of_zachetka;
//}
//
//void ShowStudentData(const Student& student)
//{
//	cout << "Name: " << student.name << "\n";
//
//	cout << "Surname: " << student.surname << "\n";
//
//	cout << "Date of birth\n";
//	ShowDateTime(student.birthday);
//
//	cout << "\nDate of start of studing\n";
//	ShowDateTime(student.start_of_studing);
//
//	printf("Average grade - %03d \n", student.average_grade);
//
//	cout << "Height: " << student.height << "\n";
//	cout << "Weight: " << student.weight << "\n";
//
//	cout << "Eye colour: " << student.eye_colour << "\n";
//	cout << "Hair colour: " << student.hair_colour << "\n";
//
//	cout << "number_of_zachetka: " << student.number_of_zachetka << "\n";
//
//}

struct Product
{
	string nomenclature;
	unsigned int weight_in_gramms;
	float price_per_kilo;
	float total_cost;
};

void setProduct(Product& product)
{
	cout << "\nEnter nomenclature of product: \n";
	cin >> product.nomenclature;


	bool price;
	cout << "Do you want to enter weight/per kilo or total cost ?\n";
	cin >> price;

	if (price)
	{
		cout << "Enter total cost\n";
		cin >> product.total_cost;
		if (product.total_cost <= 0)
		{
			cout << "Incorrect cost";
			throw "Error cost";
		}
	}
	else
	{
		cout << "Enter weight in gramms\n";
		cin >> product.weight_in_gramms;
		if (product.weight_in_gramms <= 0)
		{
			cout << "Incorrect weight";
			throw "Error weight";
		}

		cout << "Enter price per kg\n";
		cin >> product.price_per_kilo;
		if (product.price_per_kilo <= 0)
		{
			cout << "Incorrect price per kg";
			throw "Error price";
		}

		product.total_cost = product.weight_in_gramms * (product.price_per_kilo / 1000);
	}
}

void showProduct(Product& product)
{
	cout << "\nNomenclature of product: " << product.nomenclature;
	if (product.weight_in_gramms != 3435973836)
	{
		cout << "\n Weight in gramm: " << product.weight_in_gramms;
	}
	if (product.price_per_kilo != 3435973836)
	{
		cout << "\n Price per kilo: " << product.price_per_kilo;
	}

	if (product.total_cost != 3435973836)
	{
		cout << "\n Total cost: " << product.total_cost;
	}
}


struct Bill
{
	unsigned short int count_of_goods;
	Product* goods = new Product[count_of_goods];
	unsigned short int discount;
	float total_cost;

	string city;
	string department;
	string teller;

	DateTime time_of_purchase;
};

void setBill(Bill& bill)
{
	cout << "Enter count of goods: \n";
	cin >> bill.count_of_goods;
	if (bill.count_of_goods <= 0 || bill.count_of_goods >= 100)
	{
		cout << "Incorrect count";
		throw "Error count";
	}
	
	float total_cost = 0;
	for (int i = 0; i < bill.count_of_goods; i++)
	{
		Product product;
		setProduct(product);
		total_cost += product.total_cost;
		bill.goods[i] = product;
	}

	cout << "Enter discount: \n";
	cin >> bill.discount;
	if (bill.discount <= 0 || bill.discount >= 100)
	{
		cout << "Incorrect discount";
		throw "Error discount";
	}

	bill.total_cost = total_cost - ((total_cost / 100) * bill.discount);

	cout << "Enter city of department : \n";
	cin >> bill.department;

	cout << "Enter department : \n";
	cin >> bill.department;

	cout << "Enter your teller : \n";
	cin >> bill.teller;

	cout << "Enter time of purchase\n";
	
	DateTime datetime;
	SetDateTime(datetime);

	bill.time_of_purchase = datetime;
}

void showBill(Bill& bill)
{
	cout << "Count of goods: " << bill.count_of_goods << "\n";

	for (int i = 0; i < bill.count_of_goods; i++)
	{
		cout << "Name of product: " << bill.goods[i].nomenclature;
		if (bill.goods[i].weight_in_gramms != 3435973836)
		{
			cout << "\n Weight in gramm: " << bill.goods[i].weight_in_gramms;
		}
		if (bill.goods[i].price_per_kilo != 3435973836)
		{
			cout << "\n Price per kilo: " << bill.goods[i].price_per_kilo;
		}
		cout << "Total cost: " << bill.goods[i].total_cost;
	}
	cout << "Discount: " << bill.discount << "\n";
	cout << "Total cost: " << bill.total_cost << "\n";

	cout << "City of department: " << bill.city << "\n";
	cout << "Department N" << bill.department << "\n";
	cout << "Teller" << bill.teller << "\n";

	ShowDateTime(bill.time_of_purchase);
}


int main()
{
	/*Data today = { 16, 11, 2023, "thursday" };
	today.weekday = "friday";
	cout << today.weekday << "\n";*/

	/*Time current_time;

	cout << "Input current hour\n";
	short current_hour;
	cin >> current_hour;
	if (current_hour >= 0 && current_hour <= 59)
	{
		current_time.hours = current_hour;
	}

	cout << "Input current minute\n";
	short current_minute;
	cin >> current_minute;
	if (current_minute >= 0 && current_minute <= 59)
	{
		current_time.minutes = current_minute;
	}

	cout << "Input current second\n";
	short current_second;
	cin >> current_second;
	if (current_second >= 0 && current_second <= 59)
	{
		current_time.seconds = current_second;
	}

	cout << "Input current milisecond\n";
	short current_milisecond;
	cin >> current_milisecond;
	if (current_milisecond >= 0 && current_milisecond <= 999)
	{
		current_time.milliseconds = current_milisecond;
	}

	cout << current_time.hours << ":" << current_time.minutes << ":" << current_time.seconds << ":" << current_time.milliseconds;


	DateTime today;
	today.date.day = 16;
	today.date.month = 11;
	today.date.year = 2023;
	today.date.weekday = "thursday";
	today.time.hours = 17;
	today.time.minutes = 43;
	today.time.seconds = 58;
	today.time.milliseconds = 123;*/


	/*DateTime birthday = {11, 9, 2001};
	DateTime start_of_studing = { 18, 11, 2022 };
	Student best_stident = { "Muhammad", "Lolo", birthday, start_of_studing , 12, 195, 90, "brown", "black", 1488228 };*/

	/*DateTime current_data;
	SetDateTime(current_data);
	ShowDateTime(current_data);*/


	Bill bill;

	setBill(bill);
	showBill(bill);
}
