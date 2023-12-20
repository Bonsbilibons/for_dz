#include <iostream>
using namespace std;

class Pencil
{
private:
	string ink_color;
	string type;
	string serial_number;
	string owner;
	string type_of_ink;
public:
	Pencil()
	{
		SetInkColor("Black");
		SetType("Ball-point");
		SetSerialNumber("12345qwert");
		SetOwner("Person");
		SetTypeOfInk("Gell");
	}

	Pencil(string ink_color, string type, string serial_number, string owner, string type_of_ink)
	{
		SetInkColor(ink_color);
		SetType(type);
		SetSerialNumber(serial_number);
		SetOwner(owner);
		SetTypeOfInk(type_of_ink);
	}
	void ShowObjectData() const
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
	string GetInkColor() const
	{
		return this->ink_color;
	}
	void SetType(string pencil_type)
	{
		this->type = pencil_type;
	}
	string GetType() const 
	{
		return this->type;
	}
	void SetSerialNumber(string serial)
	{
		this->serial_number = serial;
	}
	string GetSerialNumber() const 
	{
		return this->serial_number;
	}
	void SetOwner(string pencil_owner)
	{
		this->owner = pencil_owner;
	}
	string GetOwner() const 
	{
		return this->owner;
	}
	void SetTypeOfInk(string ink_type)
	{
		this->type_of_ink = ink_type;
	}
	string GetTypeOfInk() const 
	{
		return this->type_of_ink;
	}
};


class Laptop
{
private:
	string processor;
	int memory;
	int static_memory;
	string videocard;
	string serial_number;
	string owner;
public:
	Laptop()
	{
		SetProcessor("processor");
		SetMemory(16);
		SetStaticMemory(1000);
		SetVideocard("videocard");
		SetSerialNumber("serial_number");
		SetOwner("owner");
	}
	Laptop(string processor, int memory, int static_memory, string videocard, string serial_number, string owner)
	{
		SetProcessor(processor);
		SetMemory(memory);
		SetStaticMemory(static_memory);
		SetVideocard(videocard);
		SetSerialNumber(serial_number);
		SetOwner(owner);
	}
	void ShowObjectData() const
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
	string GetProcessor() const
	{
		return this->processor;
	}
	void SetMemory(int memory_value)
	{
		this->memory = memory_value;
	}
	int GetMemory() const
	{
		return this->memory;
	}
	void SetStaticMemory(int static_memory_value)
	{
		this->static_memory = static_memory_value;
	}
	int GetStaticMemory() const
	{
		return this->static_memory;
	}
	void SetVideocard(string videocard_value)
	{
		this->videocard = videocard_value;
	}
	string GetVideocard() const
	{
		return this->videocard;
	}
	void SetSerialNumber(string serial_number_value)
	{
		this->serial_number = serial_number_value;
	}
	string GetSerialNumber() const
	{
		return this->serial_number;
	}
	void SetOwner(string owner_value)
	{
		this->owner = owner_value;
	}

	string GetOwner() const
	{
		return this->owner;
	}
};


class Cat
{
private:
	string color;
	string breed;
	string color_of_eyes;
	bool passport;
	short length_of_tail;
public:
	Cat()
	{
		SetColor("color");
		SetBreed("breed");
		SetColorOfEyes("color_of_eyes");
		SetPassport(true);
		SetLengthOfTail(15);
	}
	Cat(string color, string breed, string color_of_eyes, bool passport, short length_of_tail)
	{
		SetColor(color);
		SetBreed(breed);
		SetColorOfEyes(color_of_eyes);
		SetPassport(passport);
		SetLengthOfTail(length_of_tail);
	}
	void ShowObjectData() const
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
	string GetColor() const
	{
		return this->color;
	}
	void SetBreed(string breed_value)
	{
		this->breed = breed_value;
	}
	string GetBreed() const
	{
		return this->breed;
	}
	void SetColorOfEyes(string color_of_eyes_value)
	{
		this->color_of_eyes = color_of_eyes_value;
	}
	string GetColorOfEyes() const
	{
		return this->color_of_eyes;
	}
	void SetPassport(bool passport_value)
	{
		this->passport = passport_value;
	}
	bool HasPassport() const
	{
		return this->passport;
	}
	void SetLengthOfTail(short length_of_tail_value)
	{
		this->length_of_tail = length_of_tail_value;
	}
	short GetLengthOfTail() const
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
private:
	string name;
	string surname;
	int age;
	double weight;
	double money;
	int health = 100;
	int energy = 100;
public:
	Person()
	{
		SetName("name");
		SetSurname("surname");
		SetAge(18);
		SetWeight(75);
		SetMoney(10000);
		SetHealth(100);
		SetEnergy(100);
	}

	Person(string name, string surname, int age, double weight, double money, int health = 100, int energy = 100)
	{
		SetName(name);
		SetSurname(surname);
		SetAge(age);
		SetWeight(weight);
		SetMoney(money);
		SetHealth(health);
		SetEnergy(energy);
	}

	void print() const
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
		cout << "Cat is angry! It`s new color is " << cat.GetColor() << "\n";
	}

	void ChangeInkInPencil(Pencil& pencil, string color)
	{
		pencil.SetInkColor(color);
	}

	void SetMoney(double money)
	{
		this->money = money;
	}

	void SetAge(short age)
	{
		this->age = age;
	}

	short GetAge()
	{
		return this->age;
	}

	void SetWeight(double weight)
	{
		this->weight = weight;
	}

	double GetWeight()
	{
		return this->weight;
	}

	void SetEnergy(int energy)
	{
		this->energy = energy;
	}

	int GetEnergy()
	{
		return this->energy;
	}

	void AddMoney(double money)
	{
		this->money += money;
	}

	void AddEnergy(int energy)
	{
		this->energy += energy;
	}

	Person& SetName(string name)
	{
		this->name = name;
		return *this;
	}

	Person& SetSurname(string surname)
	{
		this->surname = surname;
		return *this;
	}


	Person& SetHealth(int health)
	{
		this->health = health;
		return *this;
	}

	double GetMoney() const
	{
		return this->money;
	}

	string GetName() const
	{
		return this->name;
	}


};

class Jacket
{
private:
	string brand;
	string model;
	string size;
	string material;
	bool still_being_produced;
public:
	Jacket()
	{
		SetBrand("brand");
		SetModel("model");
		SetMaterial("material");
		SetSize("XS");
		SetStillBeingProduced(true);
	}
	Jacket(string brand, string model, string size, string material, bool still_being_produced)
	{
		SetBrand(brand);
		SetModel(model);
		SetMaterial(material);
		SetSize(size);
		SetStillBeingProduced(still_being_produced);
	}
	void ShowObjectData() const
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
	string GetBrand() const
	{
		return this->brand;
	}
	void SetModel(string model_value)
	{
		this->model = model_value;
	}
	string GetModel() const
	{
		return this->model;
	}
	void SetSize(string size_value)
	{
		this->size = size_value;
	}
	string GetSize() const
	{
		return this->size;
	}
	void SetMaterial(string material_value)
	{
		this->material = material_value;
	}
	string GetMaterial() const
	{
		return this->material;
	}
	void SetStillBeingProduced(bool still_being_produced_value)
	{
		this->still_being_produced = still_being_produced_value;
	}
	bool IsStillBeingProduced() const
	{
		return this->still_being_produced;
	}

	void BurstItself(Person& person)
	{
		person.SetMoney(-200);
		cout << "Time for a diet \n";
	}
};

class Monitor
{
private:
	string brand;
	string model;
	string type_of_panel;
	unsigned short speed_in_hz;
	unsigned short size_in_inches;
public:
	Monitor(string brand, string model, string type_of_panel, unsigned short speed_in_hz, unsigned short size_in_inches)
	{
		this->brand = brand;
		this->model = model;
		this->type_of_panel = type_of_panel;
		this->speed_in_hz = speed_in_hz;
		this->size_in_inches = size_in_inches;
	}
	void ShowObjectData() const
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
	string GetBrand() const
	{
		return this->brand;
	}
	void SetModel(string model_value)
	{
		this->model = model_value;
	}
	string GetModel() const
	{
		return this->model;
	}
	void SetTypeOfPanel(string type_of_panel_value)
	{
		this->type_of_panel = type_of_panel_value;
	}
	string GetTypeOfPanel() const
	{
		return this->type_of_panel;
	}
	void SetRefreshRate(unsigned short speed_in_hz_value)
	{
		this->speed_in_hz = speed_in_hz_value;
	}
	unsigned short GetRefreshRate() const
	{
		return this->speed_in_hz;
	}
	void SetSizeInInches(unsigned short size_in_inches_value)
	{
		this->size_in_inches = size_in_inches_value;
	}
	unsigned short GetSizeInInches() const
	{
		return this->size_in_inches;
	}

	void ShowCamedyShow(Person& person)
	{
		person.AddEnergy(10);
		cout << "AHAHAHHAHAHHAHA\n";
	}
};

class Counter
{
private:
	int count;
	int step;
	int limit;
	int minimum;
public:
	Counter(int count = 0, int step = 1, int limit = 99999, int minimum = 0)
	{
		this->count = count;
		this->step = step;
		this->limit = limit;
		this->minimum = minimum;
	}

	void SetCount(int count)
	{
		if (count > this->limit || count < this->minimum)
		{
			throw "Error!";
		}
		this->count = count;
	}
	void SetStep(int step)
	{
		if (step > this->limit || step < this->minimum)
		{
			throw "Error!";
		}
		this->step = step;
	}
	void SetLimit(int limit)
	{
		if (limit < this->minimum)
		{
			throw "Error!";
		}
		this->limit = limit;
	}
	void SetMinimum(int minimum)
	{
		if (minimum > this->limit)
		{
			throw "Error!";
		}
		this->minimum = minimum;
	}
	
	int GetCount() const  
	{
		return this->count;
	}
	int GetStep() const 
	{
		return this->step;
	}
	int GetLimit() const
	{
		return this->limit;
	}
	int GetMinimum() const 
	{
		return this->minimum;
	}

	void Plus()
	{
		this->count += this->step;
		if (this->count > this->limit)
		{
			this->count = this->count - this->limit;
		}
	}
	void Reset()
	{
		this->count = 0;
	}

};

int main()
{
	Person character("Biba", "Bobovich", 24, 104, 0, 71, 85);
	character.SetName("Boba").SetHealth(100);

	//Pencil pencil("Blue", "ball", "53791ILG", character.GetName(), "Gell");
	//Monitor old_monitor("LG", "JGKF12", "LCD", 59, 27);
	//Laptop his_laptop("Ryzen 7 6800", 16, 1024, "RTX3070Ti", "OIHGO325IH235", character.GetName());
	//Cat his_cat("red", "homeless", "brown", false, 3);
	//Jacket his_jacker("Louis Vuitton", "Very Old Money", "46", "cotton", false);

	//character.PaintCat(his_cat, "blue");
	////his_cat.scratchPerson(character);
	//character.ChangeInkInPencil(pencil, "Black");
	//old_monitor.ShowCamedyShow(character);
	//his_jacker.BurstItself(character);

	/*Counter counter;
	cout << counter.GetCount() << "\n";
	counter.SetCount(99998);
	cout << counter.GetCount() << "\n";
	counter.Reset();
	counter.Plus();
	cout << counter.GetCount() << "\n";
	counter.Plus();
	cout << counter.GetCount() << "\n";*/

}
