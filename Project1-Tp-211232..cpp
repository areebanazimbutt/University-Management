#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

void beepe();
void bebme();
void bemtsa();
void bemtsb();

void grades(float total);

int main()
{
	int class_num,check=0;
	do{
	cout<<"Enter The Class Number 1,2,3,4: "; cin>>class_num;
	
	
	switch(class_num)
	{
		case 1:
	beepe();
	break;
	case 2:  
	bebme();
	break;
	case 3:
	bemtsa();
	break;
	case 4:
	bemtsb();
	break;
    default :
	cout<<"Invalid Entry\n\n";
	break;
	if (class_num>4)
	check=1;
}}while (check!=1);
 

    return 0;
}
void beepe()
{
	int size=23;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];float lab4perf[size];float lab5perf[size];
float lab6perf[size];float lab7perf[size];float lab8perf[size];float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];float lab13perf[size];float lab14perf[size];

float lab1rprt[size];float lab2rprt[size];float lab3rprt[size];float lab4rprt[size];float lab5rprt[size];
float lab6rprt[size];float lab7rprt[size];float lab8rprt[size];float lab9rprt[size];float lab10rprt[size];
float lab11rprt[size];float lab12rprt[size];float lab13rprt[size];float lab14rprt[size];

float mid[size];float project[size];float final[size];float sum_of_labrprts[size];float sum_of_labperfs[size];
   
int wtsum,wtlab_rprt,wtlab_prf,wtmid,wtproject,wtfinal,roll_num;
   
string line;
ifstream file3("test2.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab7perf[i];
    getline(iss, rand, ',');
    iss >>  lab8perf[i];
    getline(iss, rand, ',');
    iss >>  lab9perf[i];
    getline(iss, rand, ',');
    iss >>  lab10perf[i];
    getline(iss, rand, ',');
    iss >>  lab11perf[i];
    getline(iss, rand, ',');
    iss >>  lab12perf[i];
    getline(iss, rand, ',');
    iss >>  lab13perf[i];
    getline(iss, rand, ',');
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
    iss >> lab1rprt[i];
    getline(iss, rand, ',');
    iss >> lab2rprt[i];
    getline(iss, rand, ',');
    iss >> lab3rprt[i];
    getline(iss, rand, ',');
    iss >> lab4rprt[i];
    getline(iss, rand, ',');
    iss >> lab5rprt[i];
    getline(iss, rand, ',');
    iss >> lab6rprt[i];
    getline(iss, rand, ',');
    iss >> lab7rprt[i];
    getline(iss, rand, ',');
    iss >> lab8rprt[i];
    getline(iss, rand, ',');
    iss >> lab9rprt[i];
    getline(iss, rand, ',');
    iss >> lab10rprt[i];
    getline(iss, rand, ',');
    iss >> lab11rprt[i];
    getline(iss, rand, ',');
    iss >> lab12rprt[i];
    getline(iss, rand, ',');
    iss >> lab13rprt[i];
    getline(iss, rand, ',');
    iss >> lab14rprt[i];
	getline (iss,rand,',');
	iss>>mid[i];
	getline (iss,rand,',');
	iss>>project[i];
	getline (iss,rand,',');
	iss>>final[i];
	getline (iss,rand,','); 				   
    i++;
}
	for (int i=0;i<size;i++)
	{
		sum_of_labrprts[i]=(lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+
		lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]);
		
		sum_of_labperfs[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+
		lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
	}
	char check;
	do{
		
	
	cout<<"\n\n\nEnter The Roll Number Of Student: "; cin>>roll_num;
	
	do{
		
	
	cout<<"\nEnter The Weightage Of Lab Reports: "; cin>>wtlab_rprt;
	cout<<"\nEnter The Weightage Of Lab Performances: "; cin>>wtlab_prf;
	cout<<"\nEnter The Weightage Of Mids: "; cin>>wtmid;
	cout<<"\nEnter The Weightage Of Project: "; cin>>wtproject;
	cout<<"\nEnter The Weightage Of Finals: "; cin>>wtfinal;

	wtsum=(wtlab_rprt+wtlab_prf+wtmid+wtproject+wtfinal);
	if (wtsum!=100)
	cout<<"\n\nThe Percentage of Totall Marks is not equal to 100... Please Enter Again The Weightages: \n";
	
	
}while (wtsum!=100);
	for(int i=0;i<size;i++)
	{
		char check1,check2;
		float total;
		if (roll_num==rollnum[i])
		{
		        
		
			char check;
			sum_of_labrprts[i]=(sum_of_labrprts[i] / 210)*wtlab_rprt;
			sum_of_labperfs[i]= (sum_of_labperfs[i] / 210)*wtlab_prf;
			mid[i]=(mid[i] / 55)*wtmid;
			project[i]=(project[i] / 20)*wtproject;
			final[i]=(final[i] / 50)*wtfinal;
			cout<<"\n\n	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_of_labperfs[i]<<" / "<<wtlab_prf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_of_labrprts[i]<<" / "<<wtlab_rprt<<endl;
			cout<<"	Mids Marks: "<<mid[i]<<" / "<<wtmid<<endl;
			cout<<"	Project Marks: "<<project[i]<<" / "<<wtproject<<endl;
			cout<<"	Finals Marks: "<<final[i]<<" / "<<wtfinal<<endl<<endl<<endl;
			
			cout<<"Press \"Y\" to generate Totall Marks OR Press\"N\": "; cin>>check1;
			if (check1=='Y' || check1=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				cout<<"\n\nTotall Marks Out Of 100 = "<<total<<endl<<endl<<endl;
			}
			
			cout<<"Press \"Y\" to generate Grade OR Press\"N\": "; cin>>check2;
			if (check2=='Y' || check2=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				total=(total/wtsum)*100;
				grades(total);
			}
	}
	}
	cout<<"\n\n\nPress \"Y\" to Check Data of Another Student OR Press\"N\": "; cin>>check;
	
	
	}while (check=='y'||check=='Y');
	
	
	
	
	
	
//	for(int i=0;i<size;i++)
//	{
//		cout<<sum_of_labrprts[i]<<"  "<<sum_of_labperfs[i]<<endl<<endl;
//	}
//	











//for(int i=0;i<size;i++)
//cout<<name[i]<<setw(10)<<rollnum[i]<<setw(10)<<lab1perf[i]<<setw(10)<<lab2perf[i]<<setw(10)<<lab3perf[i]<<setw(10)<<lab4perf[i]<<setw(10)<<lab5perf[i]<<setw(10)<<lab6perf[i]<<setw(10)<<lab7perf[i]
//<<setw(10)<<lab8perf[i]<<setw(10)<<lab9perf[i]<<setw(10)<<lab10perf[i]<<setw(10)<<lab11perf[i]<<setw(10)<<lab12perf[i]<<setw(10)<<lab13perf[i]<<setw(10)<<lab14perf[i]<<setw(10)<<lab1rprt[i]
//<<setw(10)<<lab2rprt[i]<<setw(10)<<lab3rprt[i]<<setw(10)<<lab4rprt[i]<<setw(10)<<lab5rprt[i]<<setw(10)<<lab6rprt[i]<<setw(10)<<lab7rprt[i]<<setw(10)<<lab8rprt[i]<<setw(10)<<lab9rprt[i]<<setw(10)<<lab10rprt[i]
//<<setw(10)<<lab11rprt[i]<<setw(10)<<lab12rprt[i]<<setw(10)<<lab13rprt[i]<<setw(10)<<lab14rprt[i]<<setw(10)<<mid[i]<<setw(10)<<project[i]<<setw(10)<<final[i]<<endl<<endl;

}
void bebme()
{
	int size=30;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];float lab4perf[size];float lab5perf[size];
float lab6perf[size];float lab7perf[size];float lab8perf[size];float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];float lab13perf[size];float lab14perf[size];

float lab1rprt[size];float lab2rprt[size];float lab3rprt[size];float lab4rprt[size];float lab5rprt[size];
float lab6rprt[size];float lab7rprt[size];float lab8rprt[size];float lab9rprt[size];float lab10rprt[size];
float lab11rprt[size];float lab12rprt[size];float lab13rprt[size];float lab14rprt[size];

float mid[size];float project[size];float final[size];float sum_of_labrprts[size];float sum_of_labperfs[size];
   
int wtsum,wtlab_rprt,wtlab_prf,wtmid,wtproject,wtfinal,roll_num;
   
string line;
ifstream file3("test3.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab7perf[i];
    getline(iss, rand, ',');
    iss >>  lab8perf[i];
    getline(iss, rand, ',');
    iss >>  lab9perf[i];
    getline(iss, rand, ',');
    iss >>  lab10perf[i];
    getline(iss, rand, ',');
    iss >>  lab11perf[i];
    getline(iss, rand, ',');
    iss >>  lab12perf[i];
    getline(iss, rand, ',');
    iss >>  lab13perf[i];
    getline(iss, rand, ',');
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
    iss >> lab1rprt[i];
    getline(iss, rand, ',');
    iss >> lab2rprt[i];
    getline(iss, rand, ',');
    iss >> lab3rprt[i];
    getline(iss, rand, ',');
    iss >> lab4rprt[i];
    getline(iss, rand, ',');
    iss >> lab5rprt[i];
    getline(iss, rand, ',');
    iss >> lab6rprt[i];
    getline(iss, rand, ',');
    iss >> lab7rprt[i];
    getline(iss, rand, ',');
    iss >> lab8rprt[i];
    getline(iss, rand, ',');
    iss >> lab9rprt[i];
    getline(iss, rand, ',');
    iss >> lab10rprt[i];
    getline(iss, rand, ',');
    iss >> lab11rprt[i];
    getline(iss, rand, ',');
    iss >> lab12rprt[i];
    getline(iss, rand, ',');
    iss >> lab13rprt[i];
    getline(iss, rand, ',');
    iss >> lab14rprt[i];
	getline (iss,rand,',');
	iss>>mid[i];
	getline (iss,rand,',');
	iss>>project[i];
	getline (iss,rand,',');
	iss>>final[i];
	getline (iss,rand,','); 				   
    i++;
}
	for (int i=0;i<size;i++)
	{
		sum_of_labrprts[i]=(lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+
		lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]);
		
		sum_of_labperfs[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+
		lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
	}
	char check;
	do{
	
	cout<<"\n\n\nEnter The Roll Number Of Student: "; cin>>roll_num;
	
	do{
	
	cout<<"\nEnter The Weightage Of Lab Reports: "; cin>>wtlab_rprt;
	cout<<"\nEnter The Weightage Of Lab Performances: "; cin>>wtlab_prf;
	cout<<"\nEnter The Weightage Of Mids: "; cin>>wtmid;
	cout<<"\nEnter The Weightage Of Project: "; cin>>wtproject;
	cout<<"\nEnter The Weightage Of Finals: "; cin>>wtfinal;

	wtsum=(wtlab_rprt+wtlab_prf+wtmid+wtproject+wtfinal);
	if (wtsum!=100)
	cout<<"\n\nThe Percentage of Totall Marks is not equal to 100... Please Enter Again The Weightages: \n";
	
}while(wtsum!=100);
	
	for(int i=0;i<size;i++)
	{
		char check1,check2;
		float total;
		if (roll_num==rollnum[i])
		{
		
		
			char check;
			sum_of_labrprts[i]=(sum_of_labrprts[i] / 210)*wtlab_rprt;
			sum_of_labperfs[i]= (sum_of_labperfs[i] / 210)*wtlab_prf;
			mid[i]=(mid[i] / 55)*wtmid;
			project[i]=(project[i] / 20)*wtproject;
			final[i]=(final[i] / 50)*wtfinal;
			cout<<"\n\n	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_of_labperfs[i]<<" / "<<wtlab_prf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_of_labrprts[i]<<" / "<<wtlab_rprt<<endl;
			cout<<"	Mids Marks: "<<mid[i]<<" / "<<wtmid<<endl;
			cout<<"	Project Marks: "<<project[i]<<" / "<<wtproject<<endl;
			cout<<"	Finals Marks: "<<final[i]<<" / "<<wtfinal<<endl<<endl<<endl;
			
			cout<<"Press \"Y\" to generate Totall Marks OR Press\"N\": "; cin>>check1;
			if (check1=='Y' || check1=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				cout<<"\n\nTotall Marks Out Of 100 = "<<total<<endl<<endl<<endl;
			}
			
			cout<<"Press \"Y\" to generate Grade OR Press\"N\": "; cin>>check2;
			if (check2=='Y' || check2=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				total=(total/wtsum)*100;
				grades(total);
			}
	}
	}
	
	cout<<"\n\n\nPress \"Y\" to Check Data of Another Student OR Press\"N\": "; cin>>check;
	
	}while (check=='y'||check=='Y');
	
	
	
	
	
	
//	for(int i=0;i<size;i++)
//	{
//		cout<<sum_of_labrprts[i]<<"  "<<sum_of_labperfs[i]<<endl<<endl;
//	}
//	











//for(int i=0;i<size;i++)
//{cout<<name[i]<<setw(10)<<rollnum[i]<<setw(10)<<lab1perf[i]<<setw(10)<<lab2perf[i]<<setw(10)<<lab3perf[i]<<setw(10)<<lab4perf[i]<<setw(10)<<lab5perf[i]<<setw(10)<<lab6perf[i]<<setw(10)<<lab7perf[i]
//<<setw(10)<<lab8perf[i]<<setw(10)<<lab9perf[i]<<setw(10)<<lab10perf[i]<<setw(10)<<lab11perf[i]<<setw(10)<<lab12perf[i]<<setw(10)<<lab13perf[i]<<setw(10)<<lab14perf[i]<<setw(10)<<lab1rprt[i]
//<<setw(10)<<lab2rprt[i]<<setw(10)<<lab3rprt[i]<<setw(10)<<lab4rprt[i]<<setw(10)<<lab5rprt[i]<<setw(10)<<lab6rprt[i]<<setw(10)<<lab7rprt[i]<<setw(10)<<lab8rprt[i]<<setw(10)<<lab9rprt[i]<<setw(10)<<lab10rprt[i]
//<<setw(10)<<lab11rprt[i]<<setw(10)<<lab12rprt[i]<<setw(10)<<lab13rprt[i]<<setw(10)<<lab14rprt[i]<<setw(10)<<mid[i]<<setw(10)<<project[i]<<setw(10)<<final[i]<<endl<<endl;
//}
}
void bemtsa()
{
	int size=42;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];float lab4perf[size];float lab5perf[size];
float lab6perf[size];float lab7perf[size];float lab8perf[size];float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];float lab13perf[size];float lab14perf[size];

float lab1rprt[size];float lab2rprt[size];float lab3rprt[size];float lab4rprt[size];float lab5rprt[size];
float lab6rprt[size];float lab7rprt[size];float lab8rprt[size];float lab9rprt[size];float lab10rprt[size];
float lab11rprt[size];float lab12rprt[size];float lab13rprt[size];float lab14rprt[size];

float mid[size];float project[size];float final[size];float sum_of_labrprts[size];float sum_of_labperfs[size];
   
int wtsum,wtlab_rprt,wtlab_prf,wtmid,wtproject,wtfinal,roll_num;
   
string line;
ifstream file3("test1.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab7perf[i];
    getline(iss, rand, ',');
    iss >>  lab8perf[i];
    getline(iss, rand, ',');
    iss >>  lab9perf[i];
    getline(iss, rand, ',');
    iss >>  lab10perf[i];
    getline(iss, rand, ',');
    iss >>  lab11perf[i];
    getline(iss, rand, ',');
    iss >>  lab12perf[i];
    getline(iss, rand, ',');
    iss >>  lab13perf[i];
    getline(iss, rand, ',');
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
    iss >> lab1rprt[i];
    getline(iss, rand, ',');
    iss >> lab2rprt[i];
    getline(iss, rand, ',');
    iss >> lab3rprt[i];
    getline(iss, rand, ',');
    iss >> lab4rprt[i];
    getline(iss, rand, ',');
    iss >> lab5rprt[i];
    getline(iss, rand, ',');
    iss >> lab6rprt[i];
    getline(iss, rand, ',');
    iss >> lab7rprt[i];
    getline(iss, rand, ',');
    iss >> lab8rprt[i];
    getline(iss, rand, ',');
    iss >> lab9rprt[i];
    getline(iss, rand, ',');
    iss >> lab10rprt[i];
    getline(iss, rand, ',');
    iss >> lab11rprt[i];
    getline(iss, rand, ',');
    iss >> lab12rprt[i];
    getline(iss, rand, ',');
    iss >> lab13rprt[i];
    getline(iss, rand, ',');
    iss >> lab14rprt[i];
	getline (iss,rand,',');
	iss>>mid[i];
	getline (iss,rand,',');
	iss>>project[i];
	getline (iss,rand,',');
	iss>>final[i];
	getline (iss,rand,','); 				   
    i++;
}
	for (int i=0;i<size;i++)
	{
		sum_of_labrprts[i]=(lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+
		lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]);
		
		sum_of_labperfs[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+
		lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
	}
	char check;
	do{
	
	cout<<"\n\n\nEnter The Roll Number Of Student: "; cin>>roll_num;
	
	do{
	
	cout<<"\nEnter The Weightage Of Lab Reports: "; cin>>wtlab_rprt;
	cout<<"\nEnter The Weightage Of Lab Performances: "; cin>>wtlab_prf;
	cout<<"\nEnter The Weightage Of Mids: "; cin>>wtmid;
	cout<<"\nEnter The Weightage Of Project: "; cin>>wtproject;
	cout<<"\nEnter The Weightage Of Finals: "; cin>>wtfinal;

	wtsum=(wtlab_rprt+wtlab_prf+wtmid+wtproject+wtfinal);
	if (wtsum!=100)
	cout<<"\n\nThe Percentage of Totall Marks is not equal to 100... Please Enter Again The Weightages: \n";
	
}while(wtsum!=100);
	
	for(int i=0;i<size;i++)
	{
		char check1,check2;
		float total;
		if (roll_num==rollnum[i])
		{
		
		
			char check;
			sum_of_labrprts[i]=(sum_of_labrprts[i] / 210)*wtlab_rprt;
			sum_of_labperfs[i]= (sum_of_labperfs[i] / 210)*wtlab_prf;
			mid[i]=(mid[i] / 55)*wtmid;
			project[i]=(project[i] / 20)*wtproject;
			final[i]=(final[i] / 50)*wtfinal;
			cout<<"\n\n	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_of_labperfs[i]<<" / "<<wtlab_prf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_of_labrprts[i]<<" / "<<wtlab_rprt<<endl;
			cout<<"	Mids Marks: "<<mid[i]<<" / "<<wtmid<<endl;
			cout<<"	Project Marks: "<<project[i]<<" / "<<wtproject<<endl;
			cout<<"	Finals Marks: "<<final[i]<<" / "<<wtfinal<<endl<<endl<<endl;
			
			cout<<"Press \"Y\" to generate Totall Marks OR Press\"N\": "; cin>>check1;
			if (check1=='Y' || check1=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				cout<<"\n\nTotall Marks Out Of 100 = "<<total<<endl<<endl<<endl;
			}
			
			cout<<"Press \"Y\" to generate Grade OR Press\"N\": "; cin>>check2;
			if (check2=='Y' || check2=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				total=(total/wtsum)*100;
				grades(total);
			}
	}
	}
	
	cout<<"\n\n\nPress \"Y\" to Check Data of Another Student OR Press\"N\": "; cin>>check;
	
	}while (check=='y'||check=='Y');
	
	
	
	
	
	
//	for(int i=0;i<size;i++)
//	{
//		cout<<sum_of_labrprts[i]<<"  "<<sum_of_labperfs[i]<<endl<<endl;
//	}
//	











//for(int i=0;i<size;i++)
//{cout<<name[i]<<setw(10)<<rollnum[i]<<setw(10)<<lab1perf[i]<<setw(10)<<lab2perf[i]<<setw(10)<<lab3perf[i]<<setw(10)<<lab4perf[i]<<setw(10)<<lab5perf[i]<<setw(10)<<lab6perf[i]<<setw(10)<<lab7perf[i]
//<<setw(10)<<lab8perf[i]<<setw(10)<<lab9perf[i]<<setw(10)<<lab10perf[i]<<setw(10)<<lab11perf[i]<<setw(10)<<lab12perf[i]<<setw(10)<<lab13perf[i]<<setw(10)<<lab14perf[i]<<setw(10)<<lab1rprt[i]
//<<setw(10)<<lab2rprt[i]<<setw(10)<<lab3rprt[i]<<setw(10)<<lab4rprt[i]<<setw(10)<<lab5rprt[i]<<setw(10)<<lab6rprt[i]<<setw(10)<<lab7rprt[i]<<setw(10)<<lab8rprt[i]<<setw(10)<<lab9rprt[i]<<setw(10)<<lab10rprt[i]
//<<setw(10)<<lab11rprt[i]<<setw(10)<<lab12rprt[i]<<setw(10)<<lab13rprt[i]<<setw(10)<<lab14rprt[i]<<setw(10)<<mid[i]<<setw(10)<<project[i]<<setw(10)<<final[i]<<endl<<endl;
//}
	
	
	
	
	
}
void bemtsb()
{
	int size=35;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];float lab4perf[size];float lab5perf[size];
float lab6perf[size];float lab7perf[size];float lab8perf[size];float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];float lab13perf[size];float lab14perf[size];

float lab1rprt[size];float lab2rprt[size];float lab3rprt[size];float lab4rprt[size];float lab5rprt[size];
float lab6rprt[size];float lab7rprt[size];float lab8rprt[size];float lab9rprt[size];float lab10rprt[size];
float lab11rprt[size];float lab12rprt[size];float lab13rprt[size];float lab14rprt[size];

float mid[size];float project[size];float final[size];float sum_of_labrprts[size];float sum_of_labperfs[size];
   
int wtsum,wtlab_rprt,wtlab_prf,wtmid,wtproject,wtfinal,roll_num;
   
string line;
ifstream file3("test4.csv");
int i=0;
while (getline(file3, line)) // read whole line into line
{
    string rand;
    istringstream iss(line); // string stream
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab3perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab4perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab5perf[i]; 
    getline(iss, rand, ',');
    iss >>  lab6perf[i]; 
	getline(iss, rand, ',');
    iss >>  lab7perf[i];
    getline(iss, rand, ',');
    iss >>  lab8perf[i];
    getline(iss, rand, ',');
    iss >>  lab9perf[i];
    getline(iss, rand, ',');
    iss >>  lab10perf[i];
    getline(iss, rand, ',');
    iss >>  lab11perf[i];
    getline(iss, rand, ',');
    iss >>  lab12perf[i];
    getline(iss, rand, ',');
    iss >>  lab13perf[i];
    getline(iss, rand, ',');
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
    iss >> lab1rprt[i];
    getline(iss, rand, ',');
    iss >> lab2rprt[i];
    getline(iss, rand, ',');
    iss >> lab3rprt[i];
    getline(iss, rand, ',');
    iss >> lab4rprt[i];
    getline(iss, rand, ',');
    iss >> lab5rprt[i];
    getline(iss, rand, ',');
    iss >> lab6rprt[i];
    getline(iss, rand, ',');
    iss >> lab7rprt[i];
    getline(iss, rand, ',');
    iss >> lab8rprt[i];
    getline(iss, rand, ',');
    iss >> lab9rprt[i];
    getline(iss, rand, ',');
    iss >> lab10rprt[i];
    getline(iss, rand, ',');
    iss >> lab11rprt[i];
    getline(iss, rand, ',');
    iss >> lab12rprt[i];
    getline(iss, rand, ',');
    iss >> lab13rprt[i];
    getline(iss, rand, ',');
    iss >> lab14rprt[i];
	getline (iss,rand,',');
	iss>>mid[i];
	getline (iss,rand,',');
	iss>>project[i];
	getline (iss,rand,',');
	iss>>final[i];
	getline (iss,rand,','); 				   
    i++;
}
	for (int i=0;i<size;i++)
	{
		sum_of_labrprts[i]=(lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+
		lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]+lab1rprt[i]);
		
		sum_of_labperfs[i]=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+
		lab8perf[i]+lab9perf[i]+lab10perf[i]+lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i]);
	}
	char check;
	do{
	
	cout<<"\n\n\nEnter The Roll Number Of Student: "; cin>>roll_num;
	
	do{
	
	cout<<"\nEnter The Weightage Of Lab Reports: "; cin>>wtlab_rprt;
	cout<<"\nEnter The Weightage Of Lab Performances: "; cin>>wtlab_prf;
	cout<<"\nEnter The Weightage Of Mids: "; cin>>wtmid;
	cout<<"\nEnter The Weightage Of Project: "; cin>>wtproject;
	cout<<"\nEnter The Weightage Of Finals: "; cin>>wtfinal;

	wtsum=(wtlab_rprt+wtlab_prf+wtmid+wtproject+wtfinal);
	if (wtsum!=100)
	cout<<"\n\nThe Percentage of Totall Marks is not equal to 100... Please Enter Again The Weightages: \n";
	
}while(wtsum!=100);
	
	for(int i=0;i<size;i++)
	{
		char check1,check2;
		float total;
		if (roll_num==rollnum[i])
		{
		
		
			char check;
			sum_of_labrprts[i]=(sum_of_labrprts[i] / 210)*wtlab_rprt;
			sum_of_labperfs[i]= (sum_of_labperfs[i] / 210)*wtlab_prf;
			mid[i]=(mid[i] / 55)*wtmid;
			project[i]=(project[i] / 20)*wtproject;
			final[i]=(final[i] / 50)*wtfinal;
			cout<<"\n\n	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_of_labperfs[i]<<" / "<<wtlab_prf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_of_labrprts[i]<<" / "<<wtlab_rprt<<endl;
			cout<<"	Mids Marks: "<<mid[i]<<" / "<<wtmid<<endl;
			cout<<"	Project Marks: "<<project[i]<<" / "<<wtproject<<endl;
			cout<<"	Finals Marks: "<<final[i]<<" / "<<wtfinal<<endl<<endl<<endl;
			
			cout<<"Press \"Y\" to generate Totall Marks OR Press\"N\": "; cin>>check1;
			if (check1=='Y' || check1=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				cout<<"\n\nTotall Marks Out Of 100 = "<<total<<endl<<endl<<endl;
			}
			
			cout<<"Press \"Y\" to generate Grade OR Press\"N\": "; cin>>check2;
			if (check2=='Y' || check2=='y')
			{
				total=(sum_of_labrprts[i]+sum_of_labperfs[i]+mid[i]+project[i]+final[i]);
				total=(total/wtsum)*100;
				grades(total);
			}
	}
	}
	
	cout<<"\n\n\nPress \"Y\" to Check Data of Another Student OR Press\"N\": "; cin>>check;
	
	}while (check=='y'||check=='Y');
	
	
	
	
	
	
//	for(int i=0;i<size;i++)
//	{
//		cout<<sum_of_labrprts[i]<<"  "<<sum_of_labperfs[i]<<endl<<endl;
//	}
//	











//for(int i=0;i<size;i++)
//{cout<<name[i]<<setw(10)<<rollnum[i]<<setw(10)<<lab1perf[i]<<setw(10)<<lab2perf[i]<<setw(10)<<lab3perf[i]<<setw(10)<<lab4perf[i]<<setw(10)<<lab5perf[i]<<setw(10)<<lab6perf[i]<<setw(10)<<lab7perf[i]
//<<setw(10)<<lab8perf[i]<<setw(10)<<lab9perf[i]<<setw(10)<<lab10perf[i]<<setw(10)<<lab11perf[i]<<setw(10)<<lab12perf[i]<<setw(10)<<lab13perf[i]<<setw(10)<<lab14perf[i]<<setw(10)<<lab1rprt[i]
//<<setw(10)<<lab2rprt[i]<<setw(10)<<lab3rprt[i]<<setw(10)<<lab4rprt[i]<<setw(10)<<lab5rprt[i]<<setw(10)<<lab6rprt[i]<<setw(10)<<lab7rprt[i]<<setw(10)<<lab8rprt[i]<<setw(10)<<lab9rprt[i]<<setw(10)<<lab10rprt[i]
//<<setw(10)<<lab11rprt[i]<<setw(10)<<lab12rprt[i]<<setw(10)<<lab13rprt[i]<<setw(10)<<lab14rprt[i]<<setw(10)<<mid[i]<<setw(10)<<project[i]<<setw(10)<<final[i]<<endl<<endl;
//}
	
	
	
}
void grades(float total)
{
	if (total>=90&&total<=100)
	{
	cout<<"\n\t\tAcquired Grade= A\n";
	}
	if (total>=80&&total<=89)
	{
		cout<<"\n\t\tAcquired Grade= B\n";
	}
	if (total>=70&&total<=79)
	{
		cout<<"\n\t\tAcquired Grade= B-\n";
	}
	if (total>=60&&total<=69)
	{
		cout<<"\n\t\tAcquired Grade= C\n";
	}
	if (total>=50&&total<=59)
	{
		cout<<"\n\t\tAcquired Grade= C-\n";
	}
	if (total>=40&&total<=49)
	{
		cout<<"\n\t\tAcquired Grade= D\n";
	}
	if (total>=0&&total<40)
	{
		cout<<"\n\t\tAcquired Grade= F\n";
	}
	
}
