#include <iostream>
using namespace std;

class Pencil
{
public:
	string ink_color;
	string type;
	string serial_number;
	string owner;
	string type_of_ink;
	Pencil(string ink_color, string type, string serial_number, string owner, string type_of_ink)
	{
		this->ink_color = ink_color;
		this->type = type;
		this->serial_number = serial_number;
		this->owner = owner;
		this->type_of_ink = type_of_ink;
	}
	void ShowObjectData()
	{
		cout << "Ink color: " << this->ink_color << "\n";
		cout << "Type: " << this->type << "\n";
		cout << "Serial number: " << this->serial_number << "\n";
		cout << "Owner : " << this->owner << "\n";
		cout << "Type of ink : " << this->type_of_ink << "\n";
	}
	void SetInkColor(string color)
	{
		this->ink_color = color;
	}
	string GetInkColor()
	{
		return this->ink_color;
	}
	void SetType(string pencil_type)
	{
		this->type = pencil_type;
	}
	string GetType()
	{
		return this->type;
	}
	void SetSerialNumber(string serial)
	{
		this->serial_number = serial;
	}
	string GetSerialNumber()
	{
		return this->serial_number;
	}
	void SetOwner(string pencil_owner)
	{
		this->owner = pencil_owner;
	}
	string GetOwner()
	{
		return this->owner;
	}
	void SetTypeOfInk(string ink_type)
	{
		this->type_of_ink = ink_type;
	}
	string GetTypeOfInk()
	{
		return this->type_of_ink;
	}
};


class Laptop
{
public:
	string processor;
	int memory;
	int static_memory;
	string videocard;
	string serial_number;
	string owner;
	Laptop(string processor, int memory, int static_memory, string videocard, string serial_number, string owner)
	{
		this->processor = processor;
		this->memory = memory;
		this->static_memory = static_memory;
		this->videocard = videocard;
		this->serial_number = serial_number;
		this->owner = owner;
	}
	void ShowObjectData()
	{
		cout << "Processor: " << this->processor << "\n";
		cout << "Memory: " << this->memory << "\n";
		cout << "Static memory: " << this->static_memory << "\n";
		cout << "Videocard: " << this->videocard << "\n";
		cout << "Serial number: " << this->serial_number << "\n";
		cout << "Owner : " << this->owner << "\n";
	}
	void SetProcessor(string processor_value)
	{
		this->processor = processor_value;
	}
	string GetProcessor()
	{
		return this->processor;
	}
	void SetMemory(int memory_value)
	{
		this->memory = memory_value;
	}
	int GetMemory()
	{
		return this->memory;
	}
	void SetStaticMemory(int static_memory_value)
	{
		this->static_memory = static_memory_value;
	}
	int GetStaticMemory()
	{
		return this->static_memory;
	}
	void SetVideocard(string videocard_value)
	{
		this->videocard = videocard_value;
	}
	string GetVideocard()
	{
		return this->videocard;
	}
	void SetSerialNumber(string serial_number_value)
	{
		this->serial_number = serial_number_value;
	}
	string GetSerialNumber()
	{
		return this->serial_number;
	}
	void SetOwner(string owner_value)
	{
		this->owner = owner_value;
	}

	string GetOwner()
	{
		return this->owner;
	}
};


class Cat
{
public:
	string color;
	string breed;
	string color_of_eyes;
	bool passport;
	short length_of_tail;
	Cat(string color, string breed, string color_of_eyes, bool passport, short length_of_tail)
	{
		this->color = color;
		this->breed = breed;
		this->color_of_eyes = color_of_eyes;
		this->passport = passport;
		this->length_of_tail = length_of_tail;
	}
	void ShowObjectData()
	{
		cout << "Color: " << this->color << "\n";
		cout << "Breed: " << this->breed << "\n";
		cout << "Color of Eyes: " << this->color_of_eyes << "\n";
		cout << "Passport: " << (this->passport ? "Yes" : "No") << "\n";
		cout << "Length of Tail: " << this->length_of_tail << " cm\n";
	}
	void SetColor(string color_value)
	{
		this->color = color_value;
	}
	string GetColor()
	{
		return this->color;
	}
	void SetBreed(string breed_value)
	{
		this->breed = breed_value;
	}
	string GetBreed()
	{
		return this->breed;
	}
	void SetColorOfEyes(string color_of_eyes_value)
	{
		this->color_of_eyes = color_of_eyes_value;
	}
	string GetColorOfEyes()
	{
		return this->color_of_eyes;
	}
	void SetPassport(bool passport_value)
	{
		this->passport = passport_value;
	}
	bool HasPassport()
	{
		return this->passport;
	}
	void SetLengthOfTail(short length_of_tail_value)
	{
		this->length_of_tail = length_of_tail_value;
	}
	short GetLengthOfTail()
	{
		return this->length_of_tail;
	}


	/*void scratchPerson(Person& person)
	{
		person.health -= 5;
		cout << "MEOOW!\n";
	}*/
};

class Person
{
public:
	string name;
	string surname;
	int age;
	double weight;
	double money;
	int health = 100;
	int energy = 100;
	Person(string name, string surname, int age, double weight, double money, int health = 100, int energy = 100)
	{
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->weight = weight;
		this->money = money;
		this->health = health;
		this->energy = energy;
	}

	void print()
	{
		cout << "Name: " << this->name << "\n";
		cout << "Surname: " << this->surname << "\n";
		cout << "Age: " << this->age << "\n";
		cout << "Weight " << this->weight << "\n";
		cout << "Money " << this->money << "\n";
		cout << "Health " << this->health << "\n";
		cout << "Energy: " << this->energy << "\n";
	}

	void PaintCat(Cat& cat, string color)
	{
		cat.SetColor(color);
		cout << "Cat is angry! It`s new color is " << cat.color << "\n";
	}

	void ChangeInkInPencil(Pencil& pencil, string color)
	{
		pencil.SetInkColor(color);
	}
};

class Jacket
{
public:
	string brand;
	string model;
	string size;
	string material;
	bool still_being_produced;
	Jacket(string brand, string model, string size, string material, bool still_being_produced)
	{
		this->brand = brand;
		this->model = model;
		this->size = size;
		this->material = material;
		this->still_being_produced = still_being_produced;
	}
	void ShowObjectData()
	{
		cout << "Brand: " << this->brand << "\n";
		cout << "Model: " << this->model << "\n";
		cout << "Size: " << this->size << "\n";
		cout << "Material: " << this->material << "\n";
		cout << "Still Being Produced: " << (this->still_being_produced ? "Yes" : "No") << "\n";
	}
	void SetBrand(string brand_value)
	{
		this->brand = brand_value;
	}
	string GetBrand()
	{
		return this->brand;
	}
	void SetModel(string model_value)
	{
		this->model = model_value;
	}
	string GetModel()
	{
		return this->model;
	}
	void SetSize(string size_value)
	{
		this->size = size_value;
	}
	string GetSize()
	{
		return this->size;
	}
	void SetMaterial(string material_value)
	{
		this->material = material_value;
	}
	string GetMaterial()
	{
		return this->material;
	}
	void SetStillBeingProduced(bool still_being_produced_value)
	{
		this->still_being_produced = still_being_produced_value;
	}
	bool IsStillBeingProduced()
	{
		return this->still_being_produced;
	}

	void BurstItself(Person& person)
	{
		person.money -= 200;
		cout << "Time for a diet \n";
	}
};

class Monitor
{
public:
	string brand;
	string model;
	string type_of_panel;
	unsigned short speed_in_hz;
	unsigned short size_in_inches;
	Monitor(string brand, string model, string type_of_panel, unsigned short speed_in_hz, unsigned short size_in_inches)
	{
		this->brand = brand;
		this->model = model;
		this->type_of_panel = type_of_panel;
		this->speed_in_hz = speed_in_hz;
		this->size_in_inches = size_in_inches;
	}
	void ShowObjectData()
	{
		cout << "Brand: " << this->brand << "\n";
		cout << "Model: " << this->model << "\n";
		cout << "Type of Panel: " << this->type_of_panel << "\n";
		cout << "Refresh Rate (Hz): " << this->speed_in_hz << "\n";
		cout << "Size (in inches): " << this->size_in_inches << "\n";
	}
	void SetBrand(string brand_value)
	{
		this->brand = brand_value;
	}
	string GetBrand()
	{
		return this->brand;
	}
	void SetModel(string model_value)
	{
		this->model = model_value;
	}
	string GetModel()
	{
		return this->model;
	}
	void SetTypeOfPanel(string type_of_panel_value)
	{
		this->type_of_panel = type_of_panel_value;
	}
	string GetTypeOfPanel()
	{
		return this->type_of_panel;
	}
	void SetRefreshRate(unsigned short speed_in_hz_value)
	{
		this->speed_in_hz = speed_in_hz_value;
	}
	unsigned short GetRefreshRate()
	{
		return this->speed_in_hz;
	}
	void SetSizeInInches(unsigned short size_in_inches_value)
	{
		this->size_in_inches = size_in_inches_value;
	}
	unsigned short GetSizeInInches()
	{
		return this->size_in_inches;
	}

	void ShowCamedyShow(Person& person)
	{
		person.energy += 10;
		cout << "AHAHAHHAHAHHAHA\n";
	}
};

int main()
{
	Person character("Biba", "Bobovich", 24, 104, 0, 71, 85);
	Pencil pencil("Blue", "ball", "53791ILG", character.name , "Gell");
	Monitor old_monitor("LG", "JGKF12", "LCD", 59, 27);
	Laptop his_laptop("Ryzen 7 6800", 16, 1024, "RTX3070Ti", "OIHGO325IH235", character.name);
	Cat his_cat("red", "homeless", "brown", false, 3);
	Jacket his_jacker("Louis Vuitton", "Very Old Money", "46", "cotton", false);

	character.PaintCat(his_cat, "blue");
	//his_cat.scratchPerson(character);
	character.ChangeInkInPencil(pencil, "Black");
	old_monitor.ShowCamedyShow(character);
	his_jacker.BurstItself(character);
}
