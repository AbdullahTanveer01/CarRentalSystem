#include<iostream>
#include<string>
using namespace std;
 
 void Intro(string username, int pass)
 {
 	cout<<"\n\n\n_________________________________________________________________________________________________________";
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\tCAR RENTAL MANAGEMENT SYSTEM";
	cout<<"\n\t\t LOGIN INFORMATION"<<endl;
	cout<<"ENTER USERNAME\n\n";
	cin>>username;
	cout<<endl;
	cout<<"ENTER PASSWORD\n"<<endl;
	cin>>pass;
    system ("CLS");
 }
 float carselection(float car_type,char car)
 {
 	cout<<"\n\n\n______________________________________________________________________________________________________________";
    cout<<"\nwhich type of car would you like?\nA.sedan\nB.SUV\nC.Mini van\nD.Truck(A/B/C)\n";
    cin>>car;
    switch (car)
    {
	case 'A':
      car_type= 30;
     break;
	case 'B':
	  car_type= 40;
	 break;
	case 'C':
     car_type=  45.07;
     break;
	case 'D':
   car_type =60;
	 break;
  }
  return car_type;
 }
 float companyselection(float company_type,char company)
 {
 	cout<<"\nwhich companies car would you like?\n\nA.toyota\nB.Hyundai\nC.Honda\nD.Suzuki\n";
   cout<<"select from the above options\n";
   cin>>company;
    switch (company)
    {
	case 'A':
     company_type=30;
     break;
	case 'B':
	 company_type = 40;
	 break;
	case 'C':
	 company_type = 45.07;
	 break;
	case 'D':
     company_type = 60;
     break;
 }
     return company_type;
}
int main()
{
    string username,driver,name,decision,mobileno;
    int pass;
	float price , car_type,company_type,time,driver_money;
	char car,company;
	Intro(username,pass);
    system ("CLS");	
    do
	{
    car_type=carselection(car,car_type);
   cout<<"\nFor how long would you like to rent the car?\n\n";
   cout<<"NOTE: max limit is 24 hours:\n";
   cin>> time;
   cout<<"Would you like the car with the driver?(y/n)\n\n";
   cin>>driver;
   if(driver == "y")
   driver_money=50;
   else if(driver == "n")
   driver_money = 0;
    company_type=companyselection(company_type, company);
    system ("CLS");	
    cout<<"\n\n\n___________________________________________________________________________________________________________";
    cout<<"\n\n\n\n\t\tPersonal information Section:\n";
    cout<<"Enter name:\n";
    cin>>name;
    cout<<"Enter Mobile number\n";
    cin>>mobileno;
    system ("CLS");	
    cout<<"\n\n\n_________________________________________________________________________________________________________";
    cout<<"\n\tDO YOU WANT TO CONFIRM ORDER?(y/n)\n";
    cin>> decision;
}  while(decision == "n");
    system ("CLS");	
    cout<<"\n\n_______________________________________________________________________________________________________________";
    cout<<"\n\n\tBILL\n";
    cout<<"Total bill includes following:\n";
    cout<<"User=\t\t\t"<<name<<endl;
    cout<<"Mobile Number=\t\t"<<mobileno<<endl;
    cout<<"Car_type fees=\t\t"<<car_type<<endl;
    cout<<"Driver fees=\t\t"<<driver_money<<endl;
    cout<<"Time alloted=\t\t"<<time<<endl;
    cout<<"Company selected=\t"<<company<<" "<<company_type<<endl;
    cout<<"TOTAL PRICE=\t\t"<< (car_type+company_type+driver_money)*time<<"pkr";
    return 0;  
}
