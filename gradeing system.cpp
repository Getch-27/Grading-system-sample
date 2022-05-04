#include <iostream>
using namespace std;
string GradeConvertor(float);
float pointconverter(string);
typedef unsigned short int sh;
sh m = 3;
const sh coursenumber = 15;
const sh credithour = 17;
int main()

{
	sh cs_mark, eco_mark, eng_mark, math_mark, civ_mark, ant_mark;

char fname[m], Mname[m], Lname[m];
	cout << "enter your First name  ";
	cin >> fname;
    cout << "enter your Father name  ";
	cin >> Mname;
    cout << "enter your grandfather name  ";
	cin >> Lname;

	cout << "Enter your cs mark  ";
	cin >> cs_mark;
	cout << "Enter your english mark  ";
	cin >> eng_mark;
	cout << "Enter your civics mark  ";
	cin >> civ_mark;
    cout << "Enter your eco mark  ";
	cin >> eco_mark;
	cout << "Enter your maths mark  ";
	cin >> math_mark;
	cout << "Enter your anthro mark  ";
	cin >> ant_mark;

int cs_cr=4, eng_cr=3, civ_cr=2, eco_cr=3, math_cr=3, ant_cr=2, full_cr1;
	

full_cr1 = cs_cr+eng_cr+civ_cr+eco_cr+math_cr+ant_cr;

string cs_grade, eng_grade, civ_grade, eco_grade, math_grade, ant_grade;

	cs_grade = GradeConvertor(cs_mark);
 eng_grade = GradeConvertor(eng_mark);
	civ_grade = GradeConvertor(civ_mark);
eco_grade = GradeConvertor(eco_mark);math_grade = GradeConvertor(math_mark);
ant_grade = GradeConvertor(ant_mark);
cout<<"===========================Grade report======================="<<endl;
cout << "== \t name:" << fname << "  " << Mname << "  " << Lname << "  " <<endl;

	cout << "==\t" << cs_grade;
	cout << "\t" << eng_grade;
	cout << "\t" << civ_grade;
    cout << "\t" << eco_grade;
	cout << "\t" << math_grade;
	cout << "\t" << ant_grade << endl;

float cs_point, eng_point, civ_point, eco_point, math_point, ant_point;
	cs_point = pointconverter(cs_grade);
	eng_point = pointconverter(eng_grade);
	civ_point = pointconverter(civ_grade);
eco_point = pointconverter(eco_grade);math_point = pointconverter(math_grade);
ant_point = pointconverter(ant_grade);

	cout << "==\t" << cs_point;
	cout << "\t" << eng_point;
	cout << "\t" << civ_point;
    cout << "\t" << eco_point;
	cout << "\t" << math_point;
	cout << "\t" << ant_point << endl;


float GPA1;
float sum1;
char response;


	sum1 = (cs_point * cs_cr) + (eng_point * eng_cr) + (civ_point * civ_cr) + (eco_point * eco_cr) + (math_point * math_cr) + (ant_point * ant_cr);

GPA1 = sum1 / full_cr1;
	cout << "==\t Your GPA  is   "<< "\t" << GPA1<<endl;
	cout<<"=="<<endl;
	cout<<"=============================================================="<<endl;
	cout<<"Do you need your second semester gpa is to be calculated Y/N"<<endl;
	cin>>response;
if  (response=='Y'||response=='y')
       {
    sh cs_mark, eco_mark, eng_mark, math_mark, civ_mark, ant_mark , geo_mark;
    cout << "Enter your programing 1 mark  ";
	cin >> cs_mark;
	cout << "Enter your english mark  ";
	cin >> eng_mark;
	cout << "Enter your inclusive mark  ";
	cin >> civ_mark;
    cout << "Enter your psychology mark  ";
	cin >> eco_mark;
	cout << "Enter your Logic and critical mark  ";
	cin >> math_mark;
	cout << "Enter your emerging technology mark  ";
	cin >> ant_mark;
	cout << "Enter your geography mark  ";
	cin >> geo_mark;

int cs_cr=4, eng_cr=3, civ_cr=2, eco_cr=3, math_cr=3, ant_cr=3,geo_cr=3,full_cr2;

full_cr2 = cs_cr+eng_cr+civ_cr+eco_cr+math_cr+ant_cr+geo_cr;
  string cs_grade, eng_grade, civ_grade, eco_grade, math_grade, ant_grade,geo_grade;

	cs_grade = GradeConvertor(cs_mark);
    eng_grade = GradeConvertor(eng_mark);
	civ_grade = GradeConvertor(civ_mark);
    eco_grade = GradeConvertor(eco_mark);
    math_grade = GradeConvertor(math_mark);
    ant_grade = GradeConvertor(ant_mark);
    geo_grade = GradeConvertor(geo_mark);


    cout<<"===========================Grade report======================="<<endl;
cout << "== \t name:" << fname << "  " << Mname << "  " << Lname << "  " <<endl;

	cout << "==\t" << cs_grade;
	cout << "\t" << eng_grade;
	cout << "\t" << civ_grade;
    cout << "\t" << eco_grade;
	cout << "\t" << math_grade;
	cout << "\t" << ant_grade;
	cout << "\t" << geo_grade << endl;

float cs_point, eng_point, civ_point, eco_point, math_point, ant_point,geo_point;
	cs_point = pointconverter(cs_grade);
	eng_point = pointconverter(eng_grade);
	civ_point = pointconverter(civ_grade);
eco_point = pointconverter(eco_grade);
math_point = pointconverter(math_grade);
ant_point = pointconverter(ant_grade);
geo_point = pointconverter(geo_grade);

	cout << "==\t" << cs_point;
	cout << "\t" << eng_point;
	cout << "\t" << civ_point;
    cout << "\t" << eco_point;
	cout << "\t" << math_point;
	cout << "\t" << ant_point;
	cout << "\t" << geo_point << endl;


float GPA2;
float GPA3;
float sum2;

	sum2 = (cs_point * cs_cr) + (eng_point * eng_cr) + (civ_point * civ_cr) + (eco_point * eco_cr) + (math_point * math_cr) + (ant_point * ant_cr)+(geo_point * geo_cr);


GPA2 = sum2 / full_cr2;
	cout << "==\t Your GPA  is   "<< "\t" << GPA2<<endl;
	cout<<"=="<<endl;
	cout<<"=============================================================="<<endl;

	cout<<"Hay I wanna tall you your final GPA"<<endl;
	GPA3=(sum1+sum2)/(full_cr1+full_cr2);
	cout<<"This year GPA "<<GPA3<<endl;
cout<<"=============================================================="<<endl;


       }
else
      {

    cout<<"GOOD LUCK..."<<endl;
      }


}

string GradeConvertor(float x)
{
	if (x > 90)
		return "A+";
	else if (x >= 80)
		return "A";
    else if (x >= 80)
		return "A-";

	else if (x >= 75)
		return "B+";
    else if (x >= 70)
		return "B";
    else if (x >= 65)
		return "B-";

	else if (x >=55)
		return "C+";
    else if (x >=45)
		return "C";
    else if (x >=40)
		return "C-";


	else if (x >= 38)
		return "D+";
    else if (x >= 35)
		return "D";
    else if (x >= 30)
		return "D-";
	else
		return "F";
}
float pointconverter(string x)
{
	if (x == "A+")
		return 4;
	else if (x == "A")
		return 4;
    else if (x == "A-")
		return 3.67;
	else if (x == "B+")
		return 3.33;
    else if (x == "B")
		return 3;
    else if (x == "B-")
		return 2.67;
    else if (x == "C+")
		return 2.33;
	else if (x == "C")
		return 2;
    else if (x == "C-")
		return 1.67;
	else if (x == "D+")
		return 1.33;
    else if (x == "D")
		return 1;
    else if (x == "D-")
		return 0.67;
	else
		return 0;
}
