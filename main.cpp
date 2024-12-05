#include <iostream>
#include "user.hpp"
#include "doctor.h"
#include "doctordatabase.h"

using namespace std;

int main() {
  Account *newAccount;
  doctordatabase doctors = doctordatabase();

  string selection;
  cout << "Would you like to sign up for a new account or log in to an existing account? (enter \'S\' for sign up or \'L\' for log in)" << endl; 
  char input;
  cin >> input;
  if(input == 'S' || input == 's') {
    cout << "Are you a healthcare provider or patient? (enter \'H\' for healthcare provider or \'P\' for patient)" << endl;
    cin >> input;
    while(input) {
      if(input == 'H' || input == 'h') {
        newAccount = doctorSignUp();
        selection = "doctor";
        break;
      }
      else if(input == 'P' || input == 'p') {
        newAccount = patientSignUp();
        selection = "patient";
        break;
      }
      else {
        cout << "Please enter a valid input (enter \'H\' for healthcare provider or \'P\' for patient)" << endl;
      }
    }
  }
  else if(input == 'L' || input == 'l') {

  }

  if(selection == "doctor") {
    doctorPrompt();
    int numChoice;
    cin >> numChoice;
    while(numChoice != 3) {
      if(numChoice == 1) {
        cout << "Would you like to search by name or NPI? (enter \'N\' for name or \'I\' for NPI)" << endl;
        char search;
        cin >> search;
        if(search == 'N' || search == 'n') {
          string name;
          cin >> name;
          doctors.searchName(name);
        }
        else if(search == 'I' || search == 'i') {
          string npi;
          cin >> npi;
          doctors.searchNPI(npi);
        }
        else {
          cout << "Invalid input." << endl;
        }
      }
      else if(numChoice == 2)
      // displayDoctorAccount(*a);
        cout << "what would you like to edit? (Enter 1 for name, 2 for username, 3 for password, 4 for address, 5 for zipcode) " << endl;
        int editChoice;
        cin >> editChoice;
        if(editChoice == 1) {
          cout << "Enter new name: ";
          string name;
          cin >> name;
          newAccount->editName(name);
        }
        else if(editChoice == 2) {
          cout << "Enter new username: ";
          string name;
          cin >> name;
          if(doctors.usernameExists(name) == false) {
            newAccount->editUsername(name);
            cout << "Successfully changed username!" << endl;
          }
          else {
            cout << "Username already exists. Failed to change username." << endl;
          }
        }
        else if(editChoice == 3) {
          cout << "Enter new password: ";
          string pwd;
          cin >> pwd;
          newAccount->editPassword(pwd);
        }
        else if(editChoice == 4) {
          cout << "Enter new zipcode: ";
          string zipcode;
          cin >> zipcode;
          newAccount->editZipcode(zipcode);
        }
        else {
          cout << "Invalid input. No edits made.";
        }
        // displayDoctorAccount(&a);

      doctorPrompt();
      cin >> numChoice;
    }
    cout << "You have successfully logged out." << endl;
  }
  else if(selection == "patient") {
    userPrompt();
    int numChoice;
    cin >> numChoice;
    while(numChoice != 5) {
      if(numChoice == 1) {
        cout << "Would you like to search by zipcode, name, or speciality?" << endl;
        char searchChoice;
        if(searchChoice == 'z' || searchChoice == 'Z') {
          cout << "Enter zipcode: ";
          string zipcode;
          cin >> zipcode;
          doctors.searchZipcode(zipcode);
        }
        else if(searchChoice == 'n' || searchChoice == 'N') {
          cout << "Enter name (in all caps i.e. \"JOHN DOE\"): ";
          string name;
          cin >> name;
          doctors.searchName(name);
        }
        else if(searchChoice == 's' || searchChoice == 'S') {
          cout << "Enter specialty (in all caps i.e. \"CARDIOLOGY\"): ";
          string specialty;
          cin >> specialty;
          doctors.searchSpecialty(specialty);
        }
        else{
          cout << "Invalid input." << endl;
        }
      }
      else if(numChoice == 2) {
        cout << "Would you like to search by name or NPI? (enter \'N\' for name or \'I\' for NPI)" << endl;
        char search;
        cin >> search;
        if(search == 'N' || search == 'n') {
          string name;
          cin >> name;
          doctors.searchName(name);
        }
        else if(search == 'I' || search == 'i') {
          string npi;
          cin >> npi;
          doctors.searchNPI(npi);
        }
        else {
          cout << "Invalid input." << endl;
        }
      }
      else if(numChoice == 3) {
        // printReviews(user);
      }
      else if(numChoice == 4) {
        // displayUser(user);
        cout << "what would you like to edit? (Enter 1 for name, 2 for username, 3 for password, 4 for address, 5 for zipcode) " << endl;
        int editChoice;
        cin >> editChoice;
        if(editChoice == 1) {
          cout << "Enter new name: ";
          string name;
          cin >> name;
          newAccount->editName(name);
        }
        else if(editChoice == 2) {
          cout << "Enter new username: ";
          string name;
          cin >> name;
          if(usernameExists(name) == false) {
            newAccount->editUsername(name);
            cout << "Successfully changed username!" << endl;
          }
          else {
            cout << "Username already exists. Failed to change username." << endl;
          }
        }
        else if(editChoice == 3) {
          cout << "Enter new password: ";
          string pwd;
          cin >> pwd;
          newAccount->editPassword(pwd);
        }
        else if(editChoice == 4) {
          cout << "Enter new zipcode: ";
          string zipcode;
          cin >> zipcode;
          newAccount->editZipcode(zipcode);
        }
        else {
          cout << "Invalid input. No edits made." << endl;
        }
        // displayUser(user);
      }
      else {
        cout << "Invalid input. Try again!" << endl;
      }

      userPrompt();
      cin >> numChoice;
    }
    cout << "You have successfully logged out." << endl;
  }

  return 0;
}

User* patientSignUp() {
  cout << "Name: ";
  string name;
  getline(cin, name);
  cout << "Username: ";
  string username;
  cin >> username;
  cout << "Password: ";
  string password;
  cin >> password;
  cout << "Street Address Line: ";
  string address;
  getline(cin, address);
  cout << "Zipcode: ";
  string zipcode;
  cin >> zipcode;
  User newUser = User(name, username, password, address, zipcode);
  return &newUser;
}

Doctor* doctorSignUp() {
  cout << "Name: ";
  string name;
  getline(cin, name);
  cout << "Username: ";
  string username;
  cin >> username;
  cout << "Password: ";
  string password;
  cin >> password;
  cout << "Street Address Line: ";
  string address;
  getline(cin, address);
  cout << "Zipcode: ";
  string zipcode;
  cin >> zipcode;
  cout << "Phone Number (e.g. 123456789): ";
  string phone;
  getline(cin, phone);
  cout << "NPI: ";
  string npi;
  cin >> npi;
  cout << "Credentials (i.e. MD, PA, etc.): ";
  string cred;
  cin >> cred;
  cout << "Specialty: ";
  string spec;
  getline(cin, spec);
  cout << "Do you offer telehealth? (enter Y for yes, N for no) ";
  char telehealth;
  cin >> telehealth;
  bool tele = false;
  if(telehealth == 'Y' || telehealth == 'y') {
    tele = true;
  }
  cout << "Facility name: ";
  string facility;
  getline(cin, facility);
  Doctor newDoctor = Doctor(name, username, password, address, zipcode, phone, npi, cred, spec, tele, facility);
  return &newDoctor;
}

void doctorPrompt() {
  cout << "Would you like to..." << endl
    << "1. Search for doctors" << endl
    << "2. Edit info" << endl
    << "3. Log out" << endl
    << "Enter a number to select." << endl;
}

void userPrompt() {
  cout << "Would you like to..." << endl
    << "1. Search for doctors" << endl
    << "2. Add to favorites" << endl
    << "3. View your ratings" << endl
    << "4. Edit info" << endl
    << "5. Log out" << endl
    << "Enter a number to select." << endl;
}