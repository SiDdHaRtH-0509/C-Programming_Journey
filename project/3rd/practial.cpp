#include<iostream>
using namespace std;
int main()
{
    int marks1, marks2, marks3, marks4, marks5;
    int student, roll;
    int failcount=0, passcount=0;
    cout<<"Enter the student name: ";
    cin>>student;
    cout<<"Enter the student roll.no: ";
    cin>>roll;
    cout<<"Enter the marks of the student: "<<endl;
    cout<<"Subject 1 marks: "<<endl;
    cin>>marks1;
    cout<<"Subject 2 marks: "<<endl;
    cin>>marks2;
    cout<<"Subject 3 marks: "<<endl;
    cin>>marks3;
    cout<<"Subject 4 marks: "<<endl;
    cin>>marks4;
    cout<<"Subject 5 marks: "<<endl;
    cin>>marks5;

    if (marks1<=0 || marks1>=100 ||marks2<=0 || marks2>=100 ||marks3<=0 || marks3>=100 ||marks4<=0 || marks4>=100 || marks5<=0 || marks5>=100) 
    {
        cout<<"Invalid marks! Marks must be between 0 and 100.\n";
    }

    while(marks1<0 || marks1>100 ||
         marks2<0 || marks2>100 ||
         marks3<0 || marks3>100 ||
        marks4<0 || marks4>100 ||
        marks5<0 || marks5>100);
    
    // Marks Calculation system //
    int Total;
    Total = marks1 + marks2 + marks3 + marks4 + marks5;
    double Percentage = Total / 5.0;

    bool isFail=(marks1<33 || marks2<33 || marks3<33 || marks4<33 || marks5<33);
    // Grade system //
    char Grade;

    if(Percentage>=90)
    {
        Grade = 'A';
    }
    else if( Percentage>=80 && Percentage<90)
    {
    Grade = 'B';
    }
    else if( Percentage>=65 && Percentage<80)
    {
        Grade = 'C';
    }
    else if(Percentage>=45 && Percentage<65)
    {
        Grade = 'D';
    }
    else
    {
        Grade = 'F';
    }
    switch(Grade)
    {
        case 'A': cout<<"Grade A";break;
        case 'B': cout<<"Grade B";break;
        case 'C': cout<<"Grade C";break;
        case 'D':cout<<"Grade D";break;
        default : cout<<"Fail";
    }
 
    // Display 
    cout<<"Report Card \n";
    cout<<"Name of the student: "<<student;
    cout<<"Roll no. :"<<roll;
    cout<<"Total: "<<Total;
    cout<<"Percentage: "<<Percentage;
    cout<<"Grade - "<<Grade;
}  
