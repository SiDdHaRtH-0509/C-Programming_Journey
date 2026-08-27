#include<iostream>
using namespace std;
int main()
{
    int marks[5], roll;
    string student;
    cout<<"Enter the student name: ";
    cin>>student;
    cout<<"Enter the student roll.no: ";
    cin>>roll;
    cout<<"Enter the marks of the student: "<<endl;
    for(int i=0; i<5; i++) {
        cout<<"Marks of "<<i+1<<" Subject is: ";
        cin>>marks[i];
    }
    
    bool invalid= false;
    for(int i=0; i<5; i++) {
        if(marks[i]<0 || marks[i]>100){
            invalid = true;
        }
    }
    
    if(invalid) {
        cout<<"Invaild marks, Marks must be between 0 and 100.\n";
    }
    else {

    // Marks Calculation system //
    int Total=0;
    for(int i=0; i<5; i++){
        Total = Total + marks[i];
    }
    double Percentage = Total / 5.0;

    bool isFail = false;
    for(int i=0; i<5; i++){
        if(marks[i]<33){
            isFail=true;
        }
    }

    // Grade system //
    char Grade;

    if(isFail){
        Grade = 'F';
    }
    else if(Percentage>=90)
    {
        Grade = 'A';
    }
    else if( Percentage>=80)
    {
    Grade = 'B';
    }
    else if( Percentage>=65)
    {
        Grade = 'C';
    }
    else if(Percentage>=45)
    {
        Grade = 'D';
    }
    else
    {
        Grade = 'F';
    }
    switch(Grade)
    {
        case 'A': cout<<"Grade A\n";break;
        case 'B': cout<<"Grade B\n";break;
        case 'C': cout<<"Grade C\n";break;
        case 'D':cout<<"Grade D\n";break;
        default : cout<<"Fail\n";
    }
 
    // Display 
    cout<<"Report Card \n";
    cout<<"Name of the student: "<<student<<"\n";
    cout<<"Roll no. :"<<roll<<"\n";
    cout<<"Total: "<<Total<<"\n";
    cout<<"Percentage: "<<Percentage<<"\n";
    cout<<"Grade - "<<Grade<<"\n";
    }  
}