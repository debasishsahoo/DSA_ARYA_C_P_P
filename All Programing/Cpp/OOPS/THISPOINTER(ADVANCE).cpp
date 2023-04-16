#include <iostream> 
	#include<conio.h>
	#include<string.h>
using namespace std;
	class Student
	{

		int Roll;
		char Name[25];
		float Marks;

		public:

		Student(int R,float Mks,char Nm[])           //Constructor 1
		{
			Roll = R;
			strcpy(Name,Nm);
			Marks = Mks;
		}

		Student(char Name[],float Marks,int Roll)      //Constructor 2
		{
			Roll = Roll;
			strcpy(Name,Name);
			Marks = Marks;
		}

		Student(int Roll,char Name[],float Marks)       //Constructor 3
		{
			this->Roll = Roll;
			strcpy(this->Name,Name);
			this->Marks = Marks;
		}

		void Display()
		{
			cout<<"\n\tRoll : "<<Roll;
			cout<<"\n\tName : "<<Name;
			cout<<"\n\tMarks : "<<Marks;
		}
	};


	int main()
	{

		Student S1(1,89.63,"Sumit");
		Student S2("Kumar",78.53,2);
		Student S3(3,"Gaurav",68.94);

		cout<<"\n\n\tDetails of Student 1 : ";
		S1.Display();

		cout<<"\n\n\tDetails of Student 2 : ";
		S2.Display();

		cout<<"\n\n\tDetails of Student 3 : ";
		S3.Display();
          return 0;
	}


