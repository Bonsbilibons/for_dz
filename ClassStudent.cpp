#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include <chrono>
using namespace std;

class Logger
{
    static Logger* instance;
    int log_сount = 0;

    Logger()
    {
    }

public:
    static Logger* GetInstance()
    {
        return instance == nullptr ? instance = new Logger() : instance;
    }

    void Write(string message)
    {
        log_сount++;
        ofstream output_file("log.txt", ios::app);
        if (output_file.is_open()) {
            output_file << message << "\n";
            output_file.close();
        }
    }
};
Logger* Logger::instance = nullptr;

class Date {
    unsigned short day;
    unsigned short month;
    long long year;
public:
    Date() : Date(23, 12, 2023) {}

    Date(unsigned short day, unsigned short month, long long year)
    {
        SetDay(day);
        SetMonth(month);
        SetYear(year);
    }
    Date(unsigned short day, unsigned short month) : Date(day, month, 2005) {}


    void PrintDate() const
    {
        cout << day << "." << month << "." << year << "\n";
    }
    //day SetGet
    void SetDay(unsigned short day)
    {
        if (day == 0 || day > 31) throw "ERROR!!! The day must be from 0 to 31 !!!";
        this->day = day;
    }
    unsigned short GetDay() const
    {
        return day;
    }
    //month SetGet
    void SetMonth(unsigned short month)
    {
        if (month == 0 || month > 12) throw "ERROR!!! The day must be from 1 to 12 !!!";
        this->month = month;
    }
    unsigned short GetMonth() const
    {
        return month;
    }
    //year SetGet
    void SetYear(long long year)
    {
        this->year = year;
    }
    long long GetYear() const
    {
        return year;
    }
};

class Student {
private:
    string surname;
    string name;
    string middlename;
    string adress;
    string phonenumber;
    unsigned int countpractic = 0;
    unsigned int counthomework = 0;
    unsigned int countexam = 0;
    int* grade_of_practic = new int[countpractic];
    int* grade_of_homework = new int[counthomework];
    int* grade_of_exam = new int[countexam];
    static unsigned int count;

public:
    Student(const Student& original)
    {
        Logger::GetInstance()->Write("User copied now");
        count++;

        this->surname = original.surname;
        this->name = original.name;
        this->middlename = original.middlename;
        this->adress = original.adress;
        this->phonenumber = original.phonenumber;
        this->countpractic = original.countpractic;
        this->counthomework = original.counthomework;
        this->countexam = original.countexam;

        this->grade_of_practic = new int[original.countpractic];
        for (int i = 0; i < countpractic; i++)
        {
            this->grade_of_practic[i] = original.grade_of_practic[i];
        }

        this->grade_of_homework = new int[original.counthomework];
        for (int i = 0; i < counthomework; i++)
        {
            this->grade_of_homework[i] = original.grade_of_homework[i];
        }

        this->grade_of_exam = new int[original.countexam];
        for (int i = 0; i < countexam; i++)
        {
            this->grade_of_exam[i] = original.grade_of_exam[i];
        }
    }

    Student() : Student("Studenchenko", "Student", "Studentovich", "Studencheskaya 38", "0630300033") { count++; }

    Student(string surname, string name, string middlname, string adress, string phonenumber)
    {
        /*auto end = std::chrono::system_clock::now();
        std::time_t end_time = std::chrono::system_clock::to_time_t(end);
        std::string logMessage = "Student created at " + std::ctime(&end_time);
        logMessage.pop_back();
        Logger::GetInstance()->Write(logMessage);*/
        Logger::GetInstance()->Write("User created now");

        count++;
        SetSurname(surname);
        SetName(name);
        SetMiddlName(middlname);
        SetAdress(adress);
        SetPhone(phonenumber);
    }
    Student(string surname, string name, string middlname, string adress) :Student(surname, name, middlename, adress, "0687680685") { count++; }

    ~Student()
    {
        Logger::GetInstance()->Write("User deleted now");
        if (grade_of_practic != nullptr)
            delete[] grade_of_practic;
        if (grade_of_homework != nullptr)
            delete[] grade_of_homework;
        if (grade_of_exam != nullptr)
            delete[] grade_of_exam;
        count--;
    }

    static unsigned int GetCount()
    {
        return count;
    }

    void PrintStudent() const
    {
        cout << "Surname: " << surname << "\n";
        cout << "Name: " << name << "\n";
        cout << "Midlname: " << middlename << "\n";
        cout << "Adress: " << adress << "\n";
        cout << "Phonnumber: " << phonenumber << "\n";
    }

    void AddPractic(int newcountry)
    {
        int* temp = new int[countpractic + 1];
        for (int i = 0; i < countpractic; i++)
        {
            temp[i] = grade_of_practic[i];
        }

        temp[countpractic] = newcountry;
        countpractic++;
        delete[]grade_of_practic;
        grade_of_practic = temp;
    }

    void PrintPractic() const
    {
        for (int i = 0; i < countpractic; i++)
        {
            cout << grade_of_practic[i] << ", ";
        }
    }

    int GetPracticRatesCount(unsigned int index) const
    {
        if (index < countpractic)
        {
            return grade_of_practic[index];
        }
    }

    void AddHomeWork(int newcountry)
    {
        int* temp = new int[counthomework + 1];
        for (int i = 0; i < counthomework; i++)
        {
            temp[i] = grade_of_homework[i];
        }
        temp[counthomework] = newcountry;
        counthomework++;
        delete[]grade_of_homework;
        grade_of_homework = temp;
    }

    void PrintHomeWork() const
    {
        for (int i = 0; i < counthomework; i++)
        {
            cout << grade_of_homework[i] << ", ";
        }
    }

    int GetHomeWorkRatesCount(unsigned int index) const
    {
        if (index < counthomework)
        {
            return grade_of_homework[index];
        }
    }

    void AddExam(int newcountry)
    {
        int* temp = new int[countexam + 1];
        for (int i = 0; i < countexam; i++)
        {
            temp[i] = grade_of_exam[i];
        }
        temp[countexam] = newcountry;
        countexam++;
        delete[]grade_of_exam;
        grade_of_exam = temp;
    }

    void PrintExam() const
    {
        for (int i = 0; i < countexam; i++)
        {
            cout << grade_of_exam[i] << ", ";
        }
    }

    int GetExamRatesCount(unsigned int index) const
    {
        if (index < countexam)
        {
            return grade_of_exam[index];
        }
    }

    void SetSurname(string surname)
    {
        this->surname = surname;
    }

    string GetSurname() const
    {
        return surname;
    }

    void SetName(string name)
    {
        this->name = name;
    }

    string GetName() const
    {
        return name;
    }

    void SetMiddlName(string middlname)
    {
        this->middlename = middlname;
    }

    string GetMiddlName() const
    {
        return middlename;
    }

    void SetAdress(string adress)
    {
        this->adress = adress;
    }

    string GetAdress() const
    {
        return adress;
    }

    void SetPhone(string phonenumber)
    {
        this->phonenumber = phonenumber;
    }

    string GetPhone() const
    {
        return phonenumber;
    }
};
unsigned int Student::count;

class Group
{
private:
    int countOfStudents;
    Student** students = nullptr;
    string name;
    string occupation;
    int course;
public:
    ~Group()
    {
        if (students != nullptr) {
            delete[] students;
        }
    }
    
    Group() {
        this->countOfStudents = 0;
        this->name = "name";
        this->occupation = "occupation";
        this->course = 1;
    }

    Group(const Group& original)
    {
        this->countOfStudents = original.countOfStudents;
        this->name = original.name;
        this->occupation = original.occupation;

        this->students = new Student*[original.countOfStudents];
        for (int i = 0; i < countOfStudents; i++)
        {
            this->students[i] = new Student(*(original.students[i]));
        }
    }

    void SetName(string name)
    {
        this->name = name;
    }
    string GetName()
    {
        return this->name;
    }

    void SetOccupation(string occupation)
    {
        this->occupation = occupation;
    }
    string GetOccupation()
    {
        return this->occupation;
    }

    void SetCourse(int course)
    {
        this->course = course;
    }
    int GetCourse()
    {
        return this->course;
    }

    int GetCountOfStudents()
    {
        return this->countOfStudents;
    }

    void ShowStudents()
    {
        if (this->students != nullptr) {
            for (int i = 0; i < countOfStudents; i++) {
                this->students[i]->PrintStudent();
            }
        };
    }

    void AddStudent(const Student& student)
    {
        Student** newStudents = new Student*[this->countOfStudents + 1];
        for (int i = 0; i < this->countOfStudents; i++) {
            newStudents[i] = students[i];
        }
        newStudents[countOfStudents] = new Student(student);

        this->students = newStudents;
        this->countOfStudents++;
    }

    Student* GetStudentByIndex(int index)
    {
        return this->students[index];
    }

    void Append(Group& group)
    {
        int newCountOfStudents = this->countOfStudents + group.GetCountOfStudents();
        Student** newGroup = new Student*[newCountOfStudents];
        for (int i = 0; i < this->countOfStudents; i++) {
            newGroup[i] = this->students[i];
        }
        for (int i = 0; i < group.GetCountOfStudents(); i++) {
            newGroup[this->countOfStudents + i] = group.GetStudentByIndex(i);
        }

        this->students = newGroup;
        this->countOfStudents = newCountOfStudents;
    }
};

int main()
{
    Student student1;
    Student student2;
    Student student3;

    Group group;
    group.ShowStudents();
    group.AddStudent(student1);
    group.AddStudent(student2);
    group.AddStudent(student3);

    Student student4;
    Student student5;
    Student student6;

    Group group2;
    group2.AddStudent(student4);
    group2.AddStudent(student5);
    group2.AddStudent(student6);


    group.Append(group2);
    group.ShowStudents();

    cout << Student::GetCount() << "\n";
}
