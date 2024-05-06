#include <iostream>

using namespace std;

class Etudiant {
public:
    Etudiant(string name, string fisrtName, int age, int matricule) : name(name), fisrtName(fisrtName), age(age), matricule(matricule) {}
    void SetName(string name) {
        this->name = name;
    }
    void SetFisrtName(string fisrtName) {
        this->fisrtName = fisrtName;
    }
    void SetAge(int age) {
        this->age = age;
    }
    void SetMatricule(int matricule) {
        this->matricule = matricule;
    }
    void printEtudiant() const {
        cout << "Name: " << getName() << "\n";
        cout << "Fisrt Name: " << getFisrtName() << "\n";
        cout << "Age: " << getAge() << "\n";
        cout << "Matricule: " << getMatricule() << "\n";
    }
    
private:
    string name;
    string fisrtName;
    int age;
    int matricule;

    string getName() const {
        return name;
    }
    string getFisrtName() const {
        return fisrtName;
    }
    int getAge() const {
        return age;
    }
    int getMatricule() const {
        return matricule;
    }
};