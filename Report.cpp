#include<iostream>
#include<fstream>
using namespace std;

class Student 
{
private:
string Rollnumber, Name ,Grade;
public:
Student (): Rollnumber(""),Name(""),Grade(""){}

setRollnumber(string rollno)
{
Roll-number=rollno;
}
setName(string name)
{
Name=name;
}
setGrade(string grade)
{
Grade=grade;
}
string getRollnumber()
{
return Roll-number;
}
string getName()
{
return Name;
}
string getGrade()
{
return Grade;
}

};

int main()
{
Student s;
bool exit= false;
while(!exit)
{
ststem("cls")
int value;
cout<<"WELCOME TO REPORT CARD SYSTEM"<<endl;
cout<<"*****************************"<<endl;
cout<<"1.Report Card"<<endl;
cout<<"2.Exit"<<endl;
couy<<"Enter Choice: "<<endl;
cin>>value;

if(value==1)
{
system("cls");
string rollno,name;
cout<<"Enter the Rollnumber of student: ";
cin>>rollno;
s.setRollnumber(rollno);


cout<<"Enter the Name of student: ";
cin>>name;
s.setName(name);

int p,c,h,m,e,total,per,z,grace;
cout<<"Enter the marks of Physics (0-100) : ";
cin>>p;
if(p<0 || p>100)
{
cout<<"invalid input"
return 0;
}
cout<<"Enter the marks of Chemistry (0-100) : ";
cin>>c;
if(c<0 || c>100)
{
cout<<"invalid input"
return 0;
}
cout<<"Enter marks of Hindi (0-100) :";
cin>>h;
if(h<0 || h>100)
{
cout<<"invalid input"
return 0;
}

cout<<"Enter marks of Mathematics(0-100) :";
cin>>m;
if(m<0 || m>100)
{
cout<<"invalid input"
return 0;
}

cout<<"Enter marks of English (0-100) :";
cin>>e;
if(e<0 || e>100)
{
cout<<"invalid input"
return 0;
}
z = 0;
    if (p < 33)
    {
        z++;
    }
    if (m < 33)
    {
        z++;
    }
    if (c < 33)
    {
        z++;
    }
    if (h < 33)
    {
        z++;
    }
    if (e < 33)
    {
        z++;
    }

if(z==0)
{
system("cls")
cout<<"STUDENT REPORT CARD"<<endl;
cout<<"*******************'<<endl;
total=p+c+h+m+e;
cout<<"Total marks of student: "<<total<<endl;
per= total/5 ;
cout<<"Percentage of Student is"<<per<<'%"<<endl;

if
 (per>=80 && per<=100){
s.setGrade("A");}

if(per>=60 && per<=80){
s.setGrade("B");}

if(per>=45 && per<=60){
s.setGrade("C");}

if(per>=33 && per<=45){
s.setGrade("D");
}
 
cout<<"Grade of Student: "<<s.getGrade()<<endl; 
}

else if(z==1)
{

grace = 0;
            if (p >= 30 && p <= 32)
            {
                grace = 33 - p;
                p = 33;
                cout<<"Pass with grace of %d in Physics\n"<<grace<<endl ;
               

            }

if (c >= 30 && c <= 32)
            {
                grace = 33 - c;
                c = 33;
                cout<<"Pass with grace of %d in Chemistry\n"<<grace<<endl;
            }

if (h >= 30 && h <= 32)
            {
                grace = 33 - h;
                h = 33;
                cout<<"Pass with grace of %d in Hindi\n"<<grace<<endl;
            }
if (m >= 30 && m <= 32)
            {
                grace = 33 - m;
                c = 33;
                cout<<"Pass with grace of %d in Mathematics\n"<<grace<<endl;
            }

if (e >= 30 && e <= 32)
            {
                grace = 33 - e;
                e = 33;
                cout<<"Pass with grace of %d in English"<<grace<<endl;
            }
{
}
if (z >= 2)
            {
                if (p < 33)
                {
                    printf("Fail in Physics\n");
                }
                if (c < 33)
                {
                    printf("Fail in chemistry\n");
                }
                if(m<33)
                {
                    printf("Fail in maths\n");
                }
                if(h<33)
                {printf("Fail in hindi\n");
               
                }
                if (e<33)
                {
                    printf("Fail in English \n");
                }
                
            }

}

ofstream out("D/Student.txt", ios::app);
out<<"s.gettRoll-number()<<s.getName()<<p<<c<<h<<m<<e<<s.getGrade()<<endl;
out.close );
cout<<"ReportCard is saved to file!"<<endl;





}
else if(value==2)
{
system ("cls");
exit=true;
cout<<"Good Luck!"<<endl;
}

}
return 0;
}
