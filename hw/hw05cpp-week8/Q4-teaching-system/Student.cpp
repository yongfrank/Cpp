#include "Person.cpp"

class Student: public Person
{
private:
    /* data */
    int id;
    char classOfStudent[10];
    int chineseGrade;
    int mathGrade;
    int englishGrade;
public:
    Student(/* args */);
    ~Student();
    void inputData();
    void display();
};

Student::Student(/* args */)
{
}

Student::~Student()
{
}

void Student::inputData() {
    std::cout << "Enter name, age, sex, ID, class, Chinese, Math, English Grades." << "\n";
    Person::inputData();
    std::cin >> id >> classOfStudent >> chineseGrade >> mathGrade >> englishGrade;
}

void Student::display() {
    std::cout << std::setiosflags(std::ios::left);
    std::cout 
    << std::setw(8) << "Name" << std::setw(8) << "Age" << std::setw(8) << "Sex" 
    << std::setw(8) << "ID" << std::setw(8) << "class" << std::setw(8) << "Chinese" 
    << std::setw(8) << "Math" << std::setw(8) << "English" << "\n";

    Person::display();
    std::cout << std::setw(8) << id << std::setw(8) << classOfStudent << std::setw(8) << chineseGrade 
    << std::setw(8) << mathGrade << std::setw(8) << englishGrade << "\n";
}