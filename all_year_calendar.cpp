#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class all{
private:
public:
int year,month,day,daygap,dayforleap,leap,date1;
void input();
void leapornot();
void countday1();
void countday2();
void checkdate1();
void dismonth();
void discal();
};

void all::input(){
cout<<"Year: ";
cin>>year;
day=1;				//proti maser 1 tarikh kon bar hoy
}

void all:: leapornot(){
leap=0;
if((year%4==0 && year%100!=0)||(year%4==0 && year%400==0))
leap=1;
}

void all:: countday1(){
daygap=0;
daygap=year*365;

if(month==1)
daygap=daygap+0;
if(month==2)
daygap=daygap+31;
if(month==3)
daygap=daygap+31+28;
if(month==4)
daygap=daygap+31+28+31;
if(month==5)
daygap=daygap+31+28+31+30;
if(month==6)
daygap=daygap+31+28+31+30+31;
if(month==7)
daygap=daygap+31+28+31+30+31+30;
if(month==8)
daygap=daygap+31+28+31+30+31+30+31;
if(month==9)
daygap=daygap+31+28+31+30+31+30+31+31;
if(month==10)
daygap=daygap+31+28+31+30+31+30+31+31+30;
if(month==11)
daygap=daygap+31+28+31+30+31+30+31+31+30+31;
if(month==12)
daygap=daygap+31+28+31+30+31+30+31+31+30+31+30;

daygap=daygap+day;
}

void all::countday2(){
dayforleap=0;
if(month>2){
	for(int i=0;i<=year;i++){
		if((i%4==0 && i%100!=0)||(i%4==0 && i%400==0))
   	dayforleap++;
	}
}
if(month<=2){
	for(int i=0;i<year;i++){
		if((i%4==0 && i%100!=0)||(i%4==0 && i%400==0))
   	dayforleap++;
	}
}
daygap=daygap+dayforleap;
}

void all::checkdate1(){
if(daygap%7==1)
date1=1;
if(daygap%7==2)
date1=2;
if(daygap%7==3)
date1=3;
if(daygap%7==4)
date1=4;
if(daygap%7==5)
date1=5;
if(daygap%7==6)
date1=6;
if(daygap%7==0)
date1=0;
}

void all::dismonth(){
if(month==1)
cout<<endl<<"    ----January "<<year<<"----"<<endl;
if(month==2)
cout<<endl<<"    ----February "<<year<<"----"<<endl;
if(month==3)
cout<<endl<<"    ----March "<<year<<"----"<<endl;
if(month==4)
cout<<endl<<"    ----April "<<year<<"----"<<endl;
if(month==5)
cout<<endl<<"    ----May "<<year<<"----"<<endl;
if(month==6)
cout<<endl<<"    ----June "<<year<<"----"<<endl;
if(month==7)
cout<<endl<<"    ----July "<<year<<"----"<<endl;
if(month==8)
cout<<endl<<"    ----August "<<year<<"----"<<endl;
if(month==9)
cout<<endl<<"    ----September "<<year<<"----"<<endl;
if(month==10)
cout<<endl<<"    ----October "<<year<<"----"<<endl;
if(month==11)
cout<<endl<<"    ----November "<<year<<"----"<<endl;
if(month==12)
cout<<endl<<"    ----December "<<year<<"----"<<endl;
}

void all::discal(){
	if(date1==1){
   cout<<"  W:    D: Sat Sun Mon Tue Wed Thu Fri"<<endl;
	cout<<"week 1:     1   2   3   4   5   6   7"<<endl;
	cout<<"week 2:     8   9  10  11  12  13  14"<<endl;
   cout<<"week 3:    15  16  17  18  19  20  21"<<endl;
   cout<<"week 4:    22  23  24  25  26  27  28"<<endl;
   if(month==1 ||month==3||month==5||month==7||month==8||month==10||month==12)
   cout<<"week 5:    29  30  31"<<endl;
   if(month==4 ||month==6||month==9||month==11)
   cout<<"week 5:    29  30"<<endl;
   if(month==2 && leap==1)
   cout<<"week 5:    29"<<endl;
	}

   if(date1==2){
   cout<<"  W:    D: Sat Sun Mon Tue Wed Thu Fri"<<endl;
	cout<<"week 1:         1   2   3   4   5   6"<<endl;
	cout<<"week 2:     7   8   9  10  11  12  13"<<endl;
   cout<<"week 3:    14  15  16  17  18  19  20"<<endl;
   cout<<"week 4:    21  22  23  24  25  26  27"<<endl;
   if(month==1 ||month==3||month==5||month==7||month==8||month==10||month==12)
   cout<<"week 5:    28  29  30  31"<<endl;
   if(month==4 ||month==6||month==9||month==11)
   cout<<"week 5:    28  29  30"<<endl;
   if(month==2 && leap==0)
   cout<<"week 5:    28"<<endl;
   if(month==2 && leap==1)
   cout<<"week 5:    28  29"<<endl;
	}

   if(date1==3){
   cout<<"  W:    D: Sat Sun Mon Tue Wed Thu Fri"<<endl;
	cout<<"week 1:             1   2   3   4   5"<<endl;
	cout<<"week 2:     6   7   8   9  10  11  12"<<endl;
   cout<<"week 3:    13  14  15  16  17  18  19"<<endl;
   cout<<"week 4:    20  21  22  23  24  25  26"<<endl;
   if(month==1 ||month==3||month==5||month==7||month==8||month==10||month==12)
   cout<<"week 5:    27  28  29  30  31"<<endl;
   if(month==4 ||month==6||month==9||month==11)
   cout<<"week 5:    27  28  29  30"<<endl;
   if(month==2 && leap==0)
   cout<<"week 5:    27  28"<<endl;
   if(month==2 && leap==1)
   cout<<"week 5:    27  28  29"<<endl;
	}

   if(date1==4){
   cout<<"  W:    D: Sat Sun Mon Tue Wed Thu Fri"<<endl;
	cout<<"week 1:                 1   2   3   4"<<endl;
	cout<<"week 2:     5   6   7   8   9  10  11"<<endl;
   cout<<"week 3:    12  13  14  15  16  17  18"<<endl;
   cout<<"week 4:    19  20  21  22  23  24  25"<<endl;
   if(month==1 ||month==3||month==5||month==7||month==8||month==10||month==12)
   cout<<"week 5:    26  27  28  29  30  31"<<endl;
   if(month==4 ||month==6||month==9||month==11)
   cout<<"week 5:    26  27  28  29  30"<<endl;
   if(month==2 && leap==0)
   cout<<"week 5:    26  27  28"<<endl;
   if(month==2 && leap==1)
   cout<<"week 5:    26  27  28  29"<<endl;
	}

   if(date1==5){
   cout<<"  W:    D: Sat Sun Mon Tue Wed Thu Fri"<<endl;
	cout<<"week 1:                     1   2   3"<<endl;
	cout<<"week 2:     4   5   6   7   8   9  10"<<endl;
   cout<<"week 3:    11  12  13  14  15  16  17"<<endl;
   cout<<"week 4:    18  19  20  21  22  23  24"<<endl;
   if(month==1 ||month==3||month==5||month==7||month==8||month==10||month==12)
   cout<<"week 5:    25  26  27  28  29  30  31"<<endl;
   if(month==4 ||month==6||month==9||month==11)
   cout<<"week 5:    25  26  27  28  29  30"<<endl;
   if(month==2 && leap==0)
   cout<<"week 5:    25  26  27  28"<<endl;
   if(month==2 && leap==1)
   cout<<"week 5:    25  26  27  28  29"<<endl;
	}

   if(date1==6){
   cout<<"  W:    D: Sat Sun Mon Tue Wed Thu Fri"<<endl;
	cout<<"week 1:                         1   2"<<endl;
	cout<<"week 2:     3   4   5   6   7   8   9"<<endl;
   cout<<"week 3:    10  11  12  13  14  15  16"<<endl;
   cout<<"week 4:    17  18  19  20  21  22  23"<<endl;
   if(month==1 ||month==3||month==5||month==7||month==8||month==10||month==12)
   {cout<<"week 5:    24  25  26  27  28  29  30"<<endl;
   cout<<"week 6:    31"<<endl;}
   if(month==4 ||month==6||month==9||month==11)
   cout<<"week 5:    24  25  26  27  28  29  30"<<endl;
   if(month==2 && leap==0)
   cout<<"week 5:    24  25  26  27  28"<<endl;
   if(month==2 && leap==1)
   cout<<"week 5:    24  25  26  27  28  29"<<endl;
	}

   if(date1==0){
   cout<<"  W:    D: Sat Sun Mon Tue Wed Thu Fri"<<endl;
	cout<<"week 1:                             1"<<endl;
	cout<<"week 2:     2   3   4   5   6   7   8"<<endl;
   cout<<"week 3:     9  10  11  12  13  14  15"<<endl;
   cout<<"week 4:    16  17  18  19  20  21  22"<<endl;
   if(month==1 ||month==3||month==5||month==7||month==8||month==10||month==12)
   {cout<<"week 5:    23  24  25  26  27  28  29"<<endl;
   cout<<"week 6:    30  31"<<endl;}
   if(month==4 ||month==6||month==9||month==11)
   {cout<<"week 5:    23  24  25  26  27  28  29"<<endl;
   cout<<"week 6:    30"<<endl;}
   if(month==2 && leap==0)
   cout<<"week 5:    24  25  26  27  28"<<endl;
   if(month==2 && leap==1)
   cout<<"week 5:    24  25  26  27  28  29"<<endl;
	}
}

void main(){
all robi;
robi.input();
for(robi.month=1;robi.month<=12;robi.month++){
	robi.countday1();
	robi.countday2();
	robi.leapornot();
	robi.checkdate1();
	robi.dismonth();
	robi.discal();
}
getch();
}