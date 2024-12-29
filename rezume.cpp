#include <iostream>
#include <string>
#include <iomanip>  // For controlling output formatting

using namespace std;

struct Resume {
    string name;
    string contact;
    string email;
    string linkedin;
    string github;
    string education;
    string workExperience;
    string skills;
    string projects;
    string certifications;
    string languages;
    string interests;
    string references;
};

void printResume(const Resume &resume) {
    // Output formatted resume with added sections
    cout << "\n\n-----------------------------------------------------------\n";
    cout << "                       RESUME\n";
    cout << "-----------------------------------------------------------\n";
    
    cout << "Name: " << resume.name << endl;
    cout << "Contact: " << resume.contact << endl;
    cout << "Email: " << resume.email << endl;
    cout << "LinkedIn: " << resume.linkedin << endl;
    cout << "GitHub: " << resume.github << endl;

    cout << "\n-----------------------------------------------------------\n";
    cout << "EDUCATION\n";
    cout << "-----------------------------------------------------------\n";
    cout << resume.education << endl;

    cout << "\n-----------------------------------------------------------\n";
    cout << "WORK EXPERIENCE\n";
    cout << "-----------------------------------------------------------\n";
    cout << resume.workExperience << endl;

    cout << "\n-----------------------------------------------------------\n";
    cout << "SKILLS\n";
    cout << "-----------------------------------------------------------\n";
    cout << resume.skills << endl;

    cout << "\n-----------------------------------------------------------\n";
    cout << "PROJECTS\n";
    cout << "-----------------------------------------------------------\n";
    cout << resume.projects << endl;

    // Added new sections
    cout << "\n-----------------------------------------------------------\n";
    cout << "CERTIFICATIONS\n";
    cout << "-----------------------------------------------------------\n";
    cout << resume.certifications << endl;

    cout << "\n-----------------------------------------------------------\n";
    cout << "LANGUAGES\n";
    cout << "-----------------------------------------------------------\n";
    cout << resume.languages << endl;

    cout << "\n-----------------------------------------------------------\n";
    cout << "INTERESTS\n";
    cout << "-----------------------------------------------------------\n";
    cout << resume.interests << endl;

    cout << "\n-----------------------------------------------------------\n";
    cout << "REFERENCES\n";
    cout << "-----------------------------------------------------------\n";
    cout << resume.references << endl;

    cout << "-----------------------------------------------------------\n";
}

int main() {
    Resume resume;

    // Collect user input for the resume
    cout << "Enter your Name: ";
    getline(cin, resume.name);

    cout << "Enter your Contact (Phone number): ";
    getline(cin, resume.contact);

    cout << "Enter your Email: ";
    getline(cin, resume.email);

    cout << "Enter your LinkedIn profile URL: ";
    getline(cin, resume.linkedin);

    cout << "Enter your GitHub profile URL: ";
    getline(cin, resume.github);

    cout << "Enter your Education details: ";
    getline(cin, resume.education);

    cout << "Enter your Work Experience details: ";
    getline(cin, resume.workExperience);

    cout << "Enter your Skills: ";
    getline(cin, resume.skills);

    cout << "Enter your Projects details: ";
    getline(cin, resume.projects);

    // New sections
    cout << "Enter your Certifications: ";
    getline(cin, resume.certifications);

    cout << "Enter the Languages you know: ";
    getline(cin, resume.languages);

    cout << "Enter your Interests: ";
    getline(cin, resume.interests);

    cout << "Enter your References (if any): ";
    getline(cin, resume.references);

    // Output formatted resume
    printResume(resume);

    return 0;
}
