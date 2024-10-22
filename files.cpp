
#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;

// Define a structure for receiving student information
struct enroll{
    string fullname;
    string gender;
    int age;
    string address;
};
// Define a structure to collect the assesment results
struct assesments{
    float quiz,test,assignment,mid,finalexam;
    float quiz2,test2,assignment2,mid2,finalexam2;

};

int main(){
    enroll student;
    float GPA;// for first semester
    float GPA2;// for second semester
    float CGPA;//cumulative GPA
    assesments courses[6];
    assesments courses2[6];
    float result[6];
    float result2[6];
    string grade[6];
    string grade2[6];
    float point[6]; // To store the points of the grades...
    float point2[6];
    float sum_points;
    float sum_points2;
    int total_credit_hours = 19;



    cout<<"Enter Your Full Name: "; // asks student's name
    getline(cin,student.fullname);
    cout<<"Enter Your Gender(M/F): ";
    cin>>student.gender;
    while(student.gender != "m" && student.gender != "f" && student.gender != "F" && student.gender != "M" ){
        cout<<"Please Enter Valid Gender Character (M/F): ";
        cin>>student.gender;

    }
    cout<<"Enter Your Age: ";
    cin>>student.age;
    cout<<"Enter Your Address: ";
    cin>>student.address;

 // Displaying the registered student's details
    cout << "\nStudent's Details:\n";
    cout << "Name: " << student.fullname << endl;
    cout << "Gender: " << student.gender << endl;
    cout << "Age: " << student.age << endl;
    cout << "Address: " << student.address << endl;
// Displaying enrolled courses
    cout << "\nYou are enrolled for:\n";
    cout<<"- Applied Mathematics I\n";
    cout<<"- General Physics\n";
    cout<<"- General Chemistry\n";
    cout<<"- English Communicative skills\n";
    cout<<"- Introduction To Computing I(Python)\n";
    cout<<"- Civics And Ethical Education\n";

cout<<"\nEnter Assesment results for each courses:\n";
cout<<"For Applied Mathematics I:\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses[0].quiz;
while(courses[0].quiz > 5){
        cout<<"Please Enter Value between 0-5: ";
        cin>>courses[0].quiz;

    }

cout<<"Enter Test result(10%): \n";
cin>>courses[0].test;
while(courses[0].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[0].test;

    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses[0].assignment;
while(courses[0].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[0].assignment;

    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses[0].mid;
while(courses[0].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses[0].mid;

    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses[0].finalexam;
while(courses[0].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses[0].finalexam;

    }

cout<<"For General Physics:\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses[1].quiz;
while(courses[1].quiz > 5){
        cout<<"Please Enter Value between 0-5: ";
        cin>>courses[1].quiz;

    }
cout<<"Enter Test result(10%): \n";
cin>>courses[1].test;
while(courses[1].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[1].test;

    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses[1].assignment;
while(courses[1].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[1].assignment;

    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses[1].mid;
while(courses[1].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses[1].mid;

    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses[1].finalexam;
while(courses[1].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses[1].finalexam;

    }
cout<<"For General Chemistry:\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses[2].quiz;
while(courses[2].quiz > 5){
        cout<<"Please Enter Value between 0-5: ";
        cin>>courses[2].quiz;

    }
cout<<"Enter Test result(10%): \n";
cin>>courses[2].test;
while(courses[2].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[2].test;

    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses[2].assignment;
while(courses[2].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[2].assignment;

    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses[2].mid;
while(courses[2].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses[2].mid;

    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses[2].finalexam;
while(courses[2].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses[2].finalexam;

    }

cout<<"For English Communicative Skills:\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses[3].quiz;
while(courses[3].quiz > 5){
        cout<<"Please Enter Value between 0-5: ";
        cin>>courses[3].quiz;

    }
cout<<"Enter Test result(10%): \n";
cin>>courses[3].test;
while(courses[3].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[3].test;

    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses[3].assignment;
while(courses[3].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[3].assignment;

    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses[3].mid;
while(courses[3].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses[3].mid;

    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses[3].finalexam;
while(courses[3].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses[3].finalexam;

    }
cout<<"For Civics and Ethical Education:\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses[4].quiz;
while(courses[4].quiz > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[4].quiz;

    }
cout<<"Enter Test result(10%): \n";
cin>>courses[4].test;
while(courses[4].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[4].test;

    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses[4].assignment;
while(courses[4].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[4].assignment;

    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses[4].mid;
while(courses[4].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses[4].mid;

    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses[4].finalexam;
while(courses[4].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses[4].finalexam;

    }
cout<<"For Introduction To Computing I(Python):\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses[5].quiz;
while(courses[5].quiz > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[5].quiz;

    }
cout<<"Enter Test result(10%): \n";
cin>>courses[5].test;
while(courses[5].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[5].test;

    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses[5].assignment;
while(courses[5].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses[5].assignment;

    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses[5].mid;
while(courses[5].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses[5].mid;

    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses[5].finalexam;
while(courses[5].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses[5].finalexam;

    }
for(int i=0; i<6; i++){
    result[i]=courses[i].quiz + courses[i].test + courses[i].assignment + courses[i].mid + courses[i].finalexam;
}
//For calculating grade
for(int i=0; i<6; i++){
     if(result[i] >= 90)  grade[i] = "A+";
     else if(result[i] >= 85) grade[i] = "A";
     else if(result[i] >= 80) grade[i] = "A-";
     else if(result[i] >= 75) grade[i] = "B+";
     else if(result[i] >= 70) grade[i] = "B";
     else if(result[i] >= 65) grade[i] = "B-";
     else if(result[i] >= 60) grade[i] = "C+";
     else if(result[i] >= 50) grade[i] = "C";
     else if(result[i] >= 40) grade[i] = "D";
     else
         grade[i] = "F";
}
for(int i=0; i<6; i++){
    if(grade[i] == "A+" || grade[i] == "A")
        point[i] = 4.0;
    else if (grade[i] == "A-")
        point[i] = 3.75;
    else if (grade[i] == "B+")
        point[i] = 3.5;
    else if (grade[i] == "B")
        point[i] = 3.0;
    else if (grade[i] == "B-")
        point[i] = 2.75;
    else if (grade[i] == "C+")
        point[i] = 2.5;
    else if (grade[i] == "C")
        point[i] = 2.0;
    else if (grade[i] == "D")
        point[i] = 1.0;
    else
        point[i] = 0.0;
}
// Displaying Results with Grades
cout<<"Your Assesment Results And Grades For Each Courses Are:\n";
cout<<"\nCourses"<<setw(36)<<"Credit Hour"<<setw(15)<<"Result(100%)"<<setw(13)<<"Grade"<<endl;
cout<<"Applied Mathematics I:"<<setw(16)<<4<<setw(17)<<result[0]<<setw(15)<<grade[0]<<endl;
cout<<"General Physics: "<<setw(21)<<3<<setw(17)<<result[1]<<setw(15)<<grade[1]<<endl;
cout<<"General Chemistry: "<<setw(19)<<3<<setw(17)<<result[2]<<setw(15)<<grade[2]<<endl;
cout<<"English Communicative Skill I: "<<setw(7)<<3<<setw(17)<<result[3]<<setw(15)<<grade[3]<<endl;
cout<<"Civics And Ethical Education: "<<setw(8)<<3<<setw(17)<<result[4]<<setw(15)<<grade[4]<<endl;
cout<<"Introduction To computing I: "<<setw(9)<<3<<setw(17)<<result[5]<<setw(15)<<grade[5]<<endl;

sum_points= point[0] * 4 + point[1] * 3 + point[2] * 3 + point[3] * 3 + point[4] * 3 + point[5] * 3;
GPA = sum_points / total_credit_hours;

cout<<"GPA"<<"     "<<GPA<<endl<<endl;

if (GPA > 1.5){
    cout<<"You are promoted to the second semester !"<<endl<<endl;
    cout << "\nStudent's Details:\n";
    cout << "Name: " << student.fullname << endl;
    cout << "Gender: " << student.gender << endl;
    cout << "Age: " << student.age << endl;
    cout << "Address: " << student.address << endl;
    //for the second semester coures.
    cout << "\nYou are enrolled for The second Semester Courses:\n";
    cout<<"- Applied Mathematics II\n";
    cout<<"- Logic\n";
    cout<<"- Introduction to Emerging Technologies\n";
    cout<<"- English Writing Skills\n";
    cout<<"- Introduction To Computing II(C++)\n";
    cout<<"- Engineering Drawing\n";

    // collecting the assesments for second semester.

cout<<"\nEnter Assesment results for each courses:\n";
cout<<"For Applied Mathematics II:\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses2[0].quiz;
while(courses2[0].quiz > 5){
        cout<<"Please Enter Value between 0-5: ";
        cin>>courses2[0].quiz;

    }

cout<<"Enter Test result(10%): \n";
cin>>courses2[0].test;
while(courses2[0].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[0].test;

    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses2[0].assignment;
while(courses2[0].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[0].assignment;

    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses2[0].mid;
while(courses2[0].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses2[0].mid;

    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses2[0].finalexam;
while(courses2[0].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses2[0].finalexam;

    }
cout<<"For Logic:\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses2[1].quiz;
while(courses2[1].quiz > 5){
        cout<<"Please Enter Value between 0-5: ";
        cin>>courses2[1].quiz;

    }
cout<<"Enter Test result(10%): \n";
cin>>courses2[1].test;
while(courses2[1].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[1].test;
    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses2[1].assignment;
while(courses2[1].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[1].assignment;
    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses2[1].mid;
while(courses2[1].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses2[1].mid;
    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses2[1].finalexam;
while(courses2[1].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses2[1].finalexam;
    }
cout<<"For Introduction to Emerging Technologies:\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses2[2].quiz;
while(courses2[2].quiz > 5){
        cout<<"Please Enter Value between 0-5: ";
        cin>>courses2[2].quiz;
    }
cout<<"Enter Test result(10%): \n";
cin>>courses2[2].test;
while(courses2[2].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[2].test;
    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses2[2].assignment;
while(courses2[2].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[2].assignment;
    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses2[2].mid;
while(courses2[2].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses2[2].mid;
    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses2[2].finalexam;
while(courses2[2].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses2[2].finalexam;
            }
cout<<"For English Writing Skills:\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses2[3].quiz;
while(courses2[3].quiz > 5){
        cout<<"Please Enter Value between 0-5: ";
        cin>>courses2[3].quiz;
    }
cout<<"Enter Test result(10%): \n";
cin>>courses2[3].test;
while(courses2[3].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[3].test;
    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses2[3].assignment;
while(courses2[3].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[3].assignment;
    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses2[3].mid;
while(courses2[3].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses2[3].mid;
    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses2[3].finalexam;
while(courses2[3].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses2[3].finalexam;
    }
cout<<"For Introduction To Computing II(C++)\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses2[4].quiz;
while(courses2[4].quiz > 5){
        cout<<"Please Enter Value between 0-5: ";
        cin>>courses2[4].quiz;
    }
cout<<"Enter Test result(10%): \n";
cin>>courses2[4].test;
while(courses2[4].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[4].test;
    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses2[4].assignment;
while(courses2[4].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[4].assignment;
    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses2[4].mid;
while(courses2[4].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses2[4].mid;
    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses2[4].finalexam;
while(courses2[4].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses2[4].finalexam;
    }
cout<<"For Engineering Drawing:\n";
cout<<"Enter Quiz result(5%): \n";
cin>>courses2[5].quiz;
while(courses2[5].quiz > 5){
        cout<<"Please Enter Value between 0-5: ";
        cin>>courses2[5].quiz;
    }
cout<<"Enter Test result(10%): \n";
cin>>courses2[5].test;
while(courses2[5].test > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[5].test;
    }
cout<<"Enter Assignment result(10%): \n";
cin>>courses2[5].assignment;
while(courses2[5].assignment > 10){
        cout<<"Please Enter Value between 0-10: ";
        cin>>courses2[5].assignment;
    }
cout<<"Enter mid-exam result(25%): \n";
cin>>courses2[5].mid;
while(courses2[5].mid > 25){
        cout<<"Please Enter Value between 0-25: ";
        cin>>courses2[5].mid;
    }
cout<<"Enter final-exam result(50%): \n";
cin>>courses2[5].finalexam;
while(courses2[5].finalexam > 50){
        cout<<"Please Enter Value between 0-50: ";
        cin>>courses2[5].finalexam;
    }
for(int i=0; i<6; i++){
    result2[i]=courses2[i].quiz2 + courses2[i].test2 + courses2[i].assignment2 + courses2[i].mid2 + courses2[i].finalexam2;
}
for(int i=0; i<6; i++){
     if(result2[i] >= 90)  grade2[i] = "A+";
     else if(result2[i] >= 85) grade2[i] = "A";
     else if(result2[i] >= 80) grade2[i] = "A-";
     else if(result2[i] >= 75) grade2[i] = "B+";
     else if(result2[i] >= 70) grade2[i] = "B";
     else if(result2[i] >= 65) grade2[i] = "B-";
     else if(result2[i] >= 60) grade2[i] = "C+";
     else if(result2[i] >= 50) grade2[i] = "C";
     else if(result2[i] >= 40) grade2[i] = "D";
     else
         grade2[i] = "F";
}
for(int i=0; i<6; i++){
    if(grade2[i] == "A+" || grade2[i] == "A")
        point2[i] = 4.0;
    else if (grade2[i] == "A-")
        point2[i] = 3.75;
    else if (grade2[i] == "B+")
        point2[i] = 3.5;
    else if (grade2[i] == "B")
        point2[i] = 3.0;
    else if (grade2[i] == "B-")
        point2[i] = 2.75;
    else if (grade2[i] == "C+")
        point2[i] = 2.5;
    else if (grade2[i] == "C")
        point2[i] = 2.0;
    else if (grade2[i] == "D")
        point2[i] = 1.0;
    else
        point2[i] = 0.0;
}
// Displaying Results with Grades for the second semester
cout<<"Your Assesment Results And Grades For Each Courses Are:\n";
cout<<"\nCourses"<<setw(45)<<"Credit Hour"<<setw(15)<<"Result(100%)"<<setw(13)<<"Grade"<<endl;
cout<<"Applied Mathematics II:"<<setw(24)<<4<<setw(17)<<result[0]<<setw(15)<<grade[0]<<endl;
cout<<"Logic:"<<setw(41)<<3<<setw(17)<<result[1]<<setw(15)<<grade[1]<<endl;
cout<<"Introduction To Emerging Technologies:"<<setw(9)<<3<<setw(17)<<result[2]<<setw(15)<<grade[2]<<endl;
cout<<"English Writing Skills:"<<setw(24)<<3<<setw(17)<<result[3]<<setw(15)<<grade[3]<<endl;
cout<<"Introduction To Computing II(C++):"<<setw(13)<<3<<setw(17)<<result[4]<<setw(15)<<grade[4]<<endl;
cout<<"Engineering Drawing:"<<setw(27)<<3<<setw(17)<<result[5]<<setw(15)<<grade[5]<<endl;

sum_points2 = point2[0] * 4 + point2[1] * 3 + point2[2] * 3 + point2[3] * 3 + point2[4] * 3 + point2[5] * 3;
GPA2 = sum_points2 / total_credit_hours;

cout<<"GPA"<<"     "<<GPA2<<endl<<endl;
CGPA = (GPA + GPA2)/2;
cout<<"Cumulative GPA"<<"     "<<CGPA<<endl<<endl;
}
else
    cout<<"\nYour result is not sufficient to promote you to the second semester, "<<"You are dismissed.\n\n";
// To write student data on file.
ofstream file("Student information.txt", ios::app);
file<<"Student informations:  "<<endl;
file<<"Student full name:  "<<student.fullname<<endl;
file<<"Student Gender:   "<<student.gender<<endl;
file<<"Student Age:  "<<student.age<<endl;
file<<"Student Address:  "<<student.address<<endl<<endl;
file<<"Assesment Results And Grades For Each Courses Of First Semester Are:\n";
file<<"\nCourses"<<setw(36)<<"Credit Hour"<<setw(15)<<"Result(100%)"<<setw(13)<<"Grade"<<endl<<endl;
file<<"Applied Mathematics I:"<<setw(16)<<4<<setw(17)<<result[0]<<setw(15)<<grade[0]<<endl;
file<<"General Physics: "<<setw(21)<<3<<setw(17)<<result[1]<<setw(15)<<grade[1]<<endl;
file<<"General Chemistry: "<<setw(19)<<3<<setw(17)<<result[2]<<setw(15)<<grade[2]<<endl;
file<<"English Communicative Skill I: "<<setw(7)<<3<<setw(17)<<result[3]<<setw(15)<<grade[3]<<endl;
file<<"Civics And Ethical Education: "<<setw(8)<<3<<setw(17)<<result[4]<<setw(15)<<grade[4]<<endl;
file<<"Introduction To computing I: "<<setw(9)<<3<<setw(17)<<result[5]<<setw(15)<<grade[5]<<endl;
file<<"GPA"<<"     "<<GPA<<endl<<endl;
file<<"Assesment Results And Grades For Each Courses of Second Semester Are:\n";
file<<"\nCourses"<<setw(45)<<"Credit Hour"<<setw(15)<<"Result(100%)"<<setw(13)<<"Grade"<<endl<<endl;
file<<"Applied Mathematics II:"<<setw(24)<<4<<setw(17)<<result[0]<<setw(15)<<grade[0]<<endl;
file<<"Logic:"<<setw(41)<<3<<setw(17)<<result[1]<<setw(15)<<grade[1]<<endl;
file<<"Introduction To Emerging Technologies:"<<setw(9)<<3<<setw(17)<<result[2]<<setw(15)<<grade[2]<<endl;
file<<"English Writing Skills:"<<setw(24)<<3<<setw(17)<<result[3]<<setw(15)<<grade[3]<<endl;
file<<"Introduction To Computing II(C++):"<<setw(13)<<3<<setw(17)<<result[4]<<setw(15)<<grade[4]<<endl;
file<<"Engineering Drawing:"<<setw(27)<<3<<setw(17)<<result[5]<<setw(15)<<grade[5]<<endl;
file<<"GPA"<<"     "<<GPA2<<endl<<endl;
file<<"Cumulative GPA"<<"     "<<CGPA<<endl<<endl;
file.close();
}
