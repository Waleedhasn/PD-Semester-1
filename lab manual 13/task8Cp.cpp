#include <iostream>
#include <fstream>
using namespace std;

const int MAX_USERS = 100;

bool stringCompare(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        i++;
    }
    return str1[i] == str2[i];  // Check if both strings end at the same time
}

void stringCopy(char* destination, const char* source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';  // Null terminate the destination string
}

void loadUsersFromFile(char usernames[][50], char passwords[][50], char roles[][50], int &userCount, const char* fileName) {
    ifstream inFile(fileName);
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return;
    }

    userCount = 0;
    while (inFile >> usernames[userCount] >> passwords[userCount] >> roles[userCount]) {
        userCount++;
    }
    inFile.close();
}

void saveUserToFile(const char* username, const char* password, const char* role, const char* fileName) {
    ofstream outFile(fileName, ios::app);
    if (!outFile) {
        cout << "Error opening file!" << endl;
        return;
    }
    outFile << username << " " << password << " " << role << endl;
    outFile.close();
}

bool signIn(const char usernames[][50], const char passwords[][50], const int userCount, const char* username, const char* password) {
    for (int i = 0; i < userCount; i++) {
        if (stringCompare(usernames[i], username) && stringCompare(passwords[i], password)) {
            return true;
        }
    }
    return false;
}

void signUp(char usernames[][50], char passwords[][50], char roles[][50], int &userCount, const char* username, const char* password, const char* role) {
    stringCopy(usernames[userCount], username);
    stringCopy(passwords[userCount], password);
    stringCopy(roles[userCount], role);
    userCount++;
    saveUserToFile(username, password, role, "users.txt");
}

int main() {
    char usernames[MAX_USERS][50], passwords[MAX_USERS][50], roles[MAX_USERS][50];
    int userCount = 0;

    loadUsersFromFile(usernames, passwords, roles, userCount, "users.txt");

    int choice;
    cout << "Welcome to the SignIn/SignUp System" << endl;
    cout << "1. Sign In" << endl;
    cout << "2. Sign Up" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        char username[50], password[50];
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (signIn(usernames, passwords, userCount, username, password)) {
            cout << "Sign In successful! Welcome, " << username << "." << endl;
        } else {
            cout << "Invalid username or password." << endl;
        }
    } else if (choice == 2) {
        char username[50], password[50], role[50];
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        cout << "Enter role (user/admin): ";
        cin >> role;

        signUp(usernames, passwords, roles, userCount, username, password, role);
        cout << "Sign Up successful! You can now sign in." << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
