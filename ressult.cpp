#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name,division;
 int rollno,choice;
 int p,c,h,m,e,grace,z,total;
 float per;
 cout<<"WELCOME TO REPORT CARD SYSTEM"<<endl;
 cout<<"*****************************"<<endl;
  do
  { 
    

  cout<<"1.Rport Card\n";
  cout<<"2.Exit\n";
  cout<<"3.Enter your choice:";
  cin>>choice;
  if (choice==1)
  { 
    cout<<"REPORT CARD OF STUDENT"<<endl;
    cout<<"**********************"<<endl;
    cout<<"Enter Roll Number: ";
    cin>>rollno;
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Enter the marks of physics(1-100): ";
    cin >> p;
    if (p < 0 || p > 100)
            {
                cout << "Invalid input" << endl; 
                return 0;
            }
            cout << "Enter the marks of Chemistry (0-100): ";
            cin >> c;
            if (c < 0 || c > 100)
            {
                cout << "Invalid input" << endl; 
                return 0;
            }
            cout << "Enter marks of Hindi (0-100): ";
            cin >> h;
            if (h < 0 || h > 100)
            {
                cout << "Invalid input" << endl; 
                return 0;
            }

            cout << "Enter marks of Mathematics (0-100): ";
            cin >> m;
            if (m < 0 || m > 100)
            {
                cout << "Invalid input" << endl; 
                return 0;
            }

            cout << "Enter marks of English (0-100): ";
            cin >> e; 
            if (e < 0 || e > 100)
            {
                cout << "Invalid input" << endl; 
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
    total=p+c+m+h+e;
    cout<<"Total number of Student :"<<total<<endl;

    per= total / 5;
    cout<<"Percentage of Student is :"<<per<<"%"<<endl;
 if (per >= 60)
        {
            printf("First division\n");
        }
        else
       { 
         if (per >= 45 && per < 60)
        {
            printf("Second division\n");
        }
        else
        {
            printf("Third division\n");
        }
      }
 }
 else 
 {
 if(z==1)
 {
 grace = 0;
            if (p >= 30 && p <= 32)
            {
                grace = 33 - p;
                p = 33;
                cout<<"Pass with grace of "<<grace<< " in Physics"<<endl;
            }

            if (c >= 30 && c <= 32)
            {
                grace = 33 - c;
                c = 33;
                cout<<"Pass with grace of "<<grace<< " in Chemistry"<<endl;
            }

 if (h >= 30 && h <= 32)
            {
                grace = 33 - h;
                h = 33;
                cout<<"Pass with grace of "<<grace<< " in Hindi"<<endl;
            }

 if (m >= 30 && m <= 32)
            {
                grace = 33 - m;
                m = 33;
                cout<<"Pass with grace of "<<grace<< " in Mathematics"<<endl;
            
            }
            if (e >= 30 && e <= 32)
            {
                grace = 33 - e;
                e = 33;
                cout<<"Pass with grace of "<<grace<< " in English"<<endl;
            }
            if (grace == 0)
            {
             
                cout<<"Result: Compartment"<<endl;
                if (p<33)
             {
                cout<<"Compartment in Physics \n";
             }
             if (c<33)
             {
                cout<<"Compartment in Chemistry \n";
             }
             if (h<33)
             {
                cout<<"Compartment in Hindi\n";
             }
             if (m<33)
             {
                cout<<"Compartment in Mathematics \n";
             }
            if (e<33)
             {
                cout<<"Compartment in English \n";
             }
            }

 }
 else
 {
    if (z>=2)
    {
        
                if (p < 33)
                {
                    cout<<"Fail in Physics\n";
                }
                if (c < 33)
                {
                    cout<<"Fail in chemistry\n";
                }
                if(m<33)
                {
                    cout<<"Fail in maths\n";
                }
                if(h<33)
                {cout<<"Fail in hindi\n";
               
                }
                if (e<33)
                {
                    cout<<"Fail in English \n";
                }
                
    }  
    }
    }



ofstream onfile;
            onfile.open("C:\\Users\\mridu\\OneDrive\\Documents\\Desktop\\student.txt", ios::app);
            if (!onfile.is_open()) {
                cout << "Error opening file!" << endl;
                return 1;
            }

            onfile << rollno << endl;
            onfile << name << endl;
            onfile<<"Marks of Physics: "<<p<<endl;
            onfile<<"Marks of Chemistry : "<<c<<endl;
            onfile<<"Marks of Hindi: "<<h<<endl;
            onfile<<"Marks of Mathematics: "<<m<<endl;
            onfile<<"Marks of English: "<<e<<endl;
            if (z==0)
            {
                onfile<<"Total: " <<total<<endl;
            }
            if (z==0)
            {
                onfile<<"Percentage is: " <<per<<"%"<<endl;
            }
            if(z==1 && grace<=3)
            {
                onfile<<"Pass with grace"<<grace<<endl;
            }
            if (z == 1 && grace==0) {
                onfile << "Compartment";
            } 
            
            else
           {
                if(z>=2)
            {
                onfile << "Fail";
            }
           }
            onfile << endl;

            onfile.close();
            cout << "Result saved to file!" << endl;



    }


 if (choice<1 || choice >3)
 {
     cout<<"Invalid input\n";
 }

 }
 while (choice!=2);

 return 0;
}
 
 

