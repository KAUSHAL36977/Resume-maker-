#include <iostream>
#include <string>
#include <hpdf.h>  // Include the libharu header

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

// Function to print resume to PDF
void printResumeToPDF(const Resume &resume, const char* filename) {
    HPDF_Doc pdf = HPDF_New(NULL, NULL); // Create a new PDF document

    if (!pdf) {
        cout << "Error: Unable to create PDF document." << endl;
        return;
    }

    HPDF_Page page = HPDF_AddPage(pdf);  // Create a new page
    HPDF_SetFontAndSize(page, HPDF_GetFont(pdf, "Helvetica", NULL), 12);  // Set font and size

    float x = 50; // X coordinate for the text
    float y = 750; // Y coordinate for the text
    float lineHeight = 20; // Space between lines

    // Title
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, "Resume");
    HPDF_Page_EndText(page);

    y -= lineHeight;

    // Personal Info
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, ("Name: " + resume.name).c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, ("Contact: " + resume.contact).c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, ("Email: " + resume.email).c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, ("LinkedIn: " + resume.linkedin).c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, ("GitHub: " + resume.github).c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight * 2;

    // Sections: Education, Work Experience, etc.
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, "EDUCATION");
    HPDF_Page_EndText(page);
    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, resume.education.c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight * 2;

    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, "WORK EXPERIENCE");
    HPDF_Page_EndText(page);
    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, resume.workExperience.c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight * 2;

    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, "SKILLS");
    HPDF_Page_EndText(page);
    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, resume.skills.c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight * 2;

    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, "PROJECTS");
    HPDF_Page_EndText(page);
    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, resume.projects.c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight * 2;

    // Additional sections: Certifications, Languages, Interests, References
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, "CERTIFICATIONS");
    HPDF_Page_EndText(page);
    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, resume.certifications.c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight * 2;

    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, "LANGUAGES");
    HPDF_Page_EndText(page);
    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, resume.languages.c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight * 2;

    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, "INTERESTS");
    HPDF_Page_EndText(page);
    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, resume.interests.c_str());
    HPDF_Page_EndText(page);

    y -= lineHeight * 2;

    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, "REFERENCES");
    HPDF_Page_EndText(page);
    y -= lineHeight;
    HPDF_Page_BeginText(page);
    HPDF_Page_TextOut(page, x, y, resume.references.c_str());
    HPDF_Page_EndText(page);

    // Save the PDF to a file
    HPDF_SaveToFile(pdf, filename);
    HPDF_Free(pdf);  // Clean up
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

    // Generate the resume as PDF
    printResumeToPDF(resume, "Resume.pdf");

    cout << "Resume has been saved as 'Resume.pdf'" << endl;

    return 0;
}
