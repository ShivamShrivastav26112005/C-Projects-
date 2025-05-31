// School Management System By Using C++ -: 



#include<iostream>
#include<vector>
#include<string>
using namespace std;

// student class -: 
class Student{
public:
    // data members -: 
    int rollno;
    string name;
    int age;
    string grade;

public:
    // constructor -: member functions -: 
    // default constructor -: 
    Student(){

    }

    // parameterized constructor -: 
    Student(int rollno, string name, int age, string grade){
        this->rollno=rollno;
        this->name=name;
        this->age=age;
        this->grade=grade;
    }

    // getter and setter function -: 
    // getter function -: 
    int getrollno(){
        return rollno;
    }

    // string getname(){
    //     return name;
    // }

    // setter function -: 
    void setname(string name){
        this->name=name;
    }
    void setage(int age){
        this->age=age;
    }
    void setgrade(string grade){
        this->grade=grade;
    }

    // display all the details -: 
    void display(){
        cout << "Roll No: " << rollno << ", Name: " << name << ", Age: " << age << ", Grade: " << grade << endl; 
    }
};

// teacher class -: 
class Teacher{
public:
    int teacherid;
    string name;
    int experience;
    string subject;

public:
    // constructor -: member functions -: 
    // default constructor -: 
    Teacher(){

    }

    // parameterized constructor -: 
    Teacher(int teacherid, string name, int experience, string subject){
        this->experience=experience;
        this->name=name;
        this->subject=subject;
        this->teacherid=teacherid;
    }

    // getter and setter function -: 
    // getter function -: 
    int getteacherid(){
        return teacherid;
    }

    // setter function -: 
    void setname(string name){
        this->name=name;
    }
    void setsubject(string subject){
        this->subject=subject;
    }
    void setexperience(int experience){
        this->experience=experience;
    }

    // Display teacher details
    void display() {
        cout << "Teacher ID: " << teacherid << ", Name: " << name << ", Subject: " << subject << ", Experience: " << experience << " years" << endl;
    }

};

// school management system class -: 
class SchoolManagementSystem{
private: // becoz no external member can access this data 
    vector<Student>students;
    vector<Teacher>teachers;

public:
    // adding new student -: 
    void addStudent(int rollno, string name, int age, string grade){
        Student newStudent(rollno, name, age, grade);
        students.push_back(newStudent);
        cout<<"Student added successfully ! "<<endl;
    }

    // update existing student details -: 
    void updateStudent(int rollno, string name, int age, string grade){
        for(auto &student : students){ // loop should pass the student object by reference to modify the actual obj in the vector.
            if(student.getrollno()==rollno){ // condition 
                // updation -: 
                student.setname(name);
                student.setage(age);
                student.setgrade(grade);
                cout << "Student details updated successfully!" << endl; 
                return; 
            }
        }
        cout<<"Student with roll no "<<rollno<<" is not found"<<endl;
    }

    // delete student by its roll no -: 
    void deleteStudent(int rollno){
        // search in the student vector -: 
        for(auto it=students.begin(); it!=students.end(); it++){
            if(it->getrollno()==rollno){
                students.erase(it); 
                cout << "Student deleted successfully!" << endl; 
                return; 
            }
        }
        cout<<"Student with roll no "<<rollno<<"is not found "<<endl;
    }

    // search student by roll no -: 
    void searchStudent(int rollno){
        // search inside the whole student vector or array from starting to ending 
        for(auto &student : students){
            if(student.getrollno()==rollno){
                student.display(); 
                return; 
            }
        }
        cout<<"Student with rollno "<<rollno<<"is not found"<<endl;
    }

    // display all the students -: 
    void displayAllStudents(){
        if(students.empty()){ // chack inside the students vector 
            cout<<"No student found"<<endl;
        }else{ // display details using for each loop -: 
            for(auto &stud : students){
                stud.display();
                cout<<"-------------"<<endl;
            }
        }
    }

    // adding new teachers -:
    void addTeacher(int teacherid, string name, string subject, int experience){
        Teacher newTeacher(teacherid, name, experience, subject); // create new teacher 
        teachers.push_back(newTeacher); 
        cout<<"Teacher added successfully"<<endl;
    } 

    // update existing teacher details -: 
    void updateTeacher(int teacherid, string name, string subject, int experience){
        for(auto &teacher : teachers){
            if(teacher.getteacherid()==teacherid){
                // then update details -: 
                teacher.setname(name);
                teacher.setsubject(subject);
                teacher.setexperience(experience);
                cout<<"Teacher details updated successfully";
                return ; 
            }
        }
        cout<<"Teacher with id "<<teacherid<<"is not found"<<endl;
    }

    // display all the teachers -: 
    void displayAllTeachers(){
        if(teachers.empty()){
            cout<<"No teacher found"<<endl;;
        }else{
            for(auto &teacher : teachers){
                teacher.display(); 
                cout<<"----------"<<endl;
            }
        }
    }

};

int main(){
    SchoolManagementSystem system;

    // Adding Students
    system.addStudent(1, "Alice", 14, "8th Grade");
    system.addStudent(2, "Bob", 15, "9th Grade");

    // Displaying all students
    system.displayAllStudents();

    // Search for a student by roll number
    system.searchStudent(1);

    // Update a student's details
    system.updateStudent(1, "Alice Cooper", 15, "9th Grade");

    // Delete a student
    system.deleteStudent(2);

    // Display all students again
    system.displayAllStudents();

    // Adding Teachers
    system.addTeacher(101, "Mr. Smith", "Math", 10);
    system.addTeacher(102, "Ms. Johnson", "Science", 5);

    // Display all teachers
    system.displayAllTeachers();

    return 0;
}


// Student added successfully ! 
// Student added successfully ! 
// Roll No: 1, Name: Alice, Age: 14, Grade: 8th Grade
// -------------
// Roll No: 2, Name: Bob, Age: 15, Grade: 9th Grade
// -------------
// Roll No: 1, Name: Alice, Age: 14, Grade: 8th Grade
// Student details updated successfully!
// Student deleted successfully!
// Roll No: 1, Name: Alice Cooper, Age: 15, Grade: 9th Grade
// -------------
// Teacher added successfully
// Teacher added successfully
// Teacher ID: 101, Name: Mr. Smith, Subject: Math, Experience: 10 years
// ----------
// Teacher ID: 102, Name: Ms. Johnson, Subject: Science, Experience: 5 years
// ----------