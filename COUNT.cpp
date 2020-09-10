#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;
int main()
{
	/*char Ch;
	string message;
	cout << "Enter character : ";
	cin >>Ch;
	if (isalnum(Ch)){
		if (isalnum(Ch)){
			if(islower(Ch))message = "Lower character.";
			else message = "Upper character";
		}
		else if (isdigit(Ch)) message = "digit. ";
	}
	else message = "special character.";
	cout << "\'" << Ch << "\'" << "is " << message <<endl;
	if (isalnum(Ch)){
		if(isalnum(Ch)){
			cout << "\'" << Ch << "\'" << "comvert to upper \' ";
			cout << (char)toupper(Ch) << "\'";
		}
		else {
		cout << "\'" << Ch << "\'" << " to lower \' ";
		cout << (char)tolower(Ch) << "\'";
		}
		cout <<endl;
	}
	return 0;
}
	int intvalue ;
	long Longvalue;
	float Floatvalue;
	string StrValue;
	cout << "Enter string number : ";
	cin >> StrValue;
	intvalue = atoi(StrValue.c_str());
	Longvalue = atol(StrValue.c_str());
	Floatvalue = atof(StrValue.c_str());
	cout <<endl;
	cout <<"Convert String to numberic.\n";
	cout <<"***************************\n";
	cout <<"Convert to integer = " << intvalue << endl;
	cout <<"Convert to long = " << Longvalue << endl;
	cout <<"Convert to float = " << Floatvalue << endl;
	srand (intvalue);
	cout << "Now random integer number 10 number : "<<endl;
	cout << "**************************************"<<endl;
	for(int N =1 ,Num ;N <=10;N++){
		Num = rand() %10;
		cout << Num <<" ";
	}
	cout <<endl;
	return 0;
}
	double value;
	cout << "Enter floating number : ";
	cin >> value;
	cout <<endl;
	cout << "\nCeiling of " <<value<< "is " << ceil(value);
	cout << "\nFloor of " <<value<< "is " << floor(value);
	cout << "\nSquare root of " <<value<< "is " << sqrt(value);
	cout << "\nExplonential of " <<value<< "is " << exp(value);
	cout << "\nAbsolute of " <<value<< "is " << fabs(value);
	cout << "\nNatural logarithm of " <<value<< "is " << log(value);
	cout << "\nLogarithm(10) base of " <<value<< "is " << log10(value);
	cout << "\npower 3  of " <<value<< "is " << pow(value,3);
	cout << "\nSin of " <<value<< "is " << sin(value);
	cout << "\nCos of " <<value<< "is " << cos(value);
	cout << "\nTan of " <<value<< "is " << tan(value);
	cout <<endl;
	return 0;
}
	char Str1[30],Str2[30];
	cout << "Enter string 1 : ";
	cin >> Str1;
	cout << "Enter string 2 : ";
	cin >> Str2;
	cout << endl;
	cout << "strcat(Str1,Str2) = " << strcat(Str1,Str2) <<endl;
	cout << "strchr(Str1,'s') = " << strchr(Str1,'s') <<endl;
	cout << "strcmp(Str1,Str2) = " << strcmp(Str1,Str2) <<endl;
	cout << "strcpy(Str1,Str2) = " << strcpy(Str1,Str2) <<endl;
	cout << "strlen(Str1) = " << strlen(Str1) <<endl;
	cout << "strlen(Str2) = " << strlen(Str2) <<endl;
	cout << "string 1 :  " << Str1 <<endl;
	cout << "string 1 reverse : ";
	for (int N = strlen(Str1 )-1 ; N >=10 ;N--){
		cout << Str1[N];
	}
	cout <<endl;
	return 0;
}
	float radius,angle;
	const int width = 9;
	cout << "+ " << setfill('=') << setw(44) << "+" <<endl;
	cout << ":  angle  :  sine  :  cosine  :  tangent  :"<<endl;
	cout << "+ " << setfill('=') << setw(44) << "+" <<endl;
	cout << setfill(' ');
	for(angle = 0.0; angle <=360.0;angle +=20){
		radius = (angle > 0.0) ? (180.0f*3.14f)/angle : 0.0;
		cout << ":" << setw(width) << fixed <<setprecision(2);
		cout << angle;
		cout << ":" << setw(width) << setprecision(4) << sin(radius);
		cout << ":" << setw(width) << cos(radius);
		cout << ":" << setw(width) << tan(radius);
		cout <<endl;
	}
	cout << "+" << setfill('=') << setw(44) << "=" <<endl;
	return 0;
}
	cout << " Decimal  :  Octal  :  Hexa  "<<endl;
	cout << setfill('-') <<setw(30) << "-" <<endl;
	cout << setfill(' ') <<showbase;
	for(int Dec = 0 ; Dec <=300 ;Dec += 50){
		cout << " " << right << setw(7) <<setbase(10) << Dec << " :";
		cout << right << setw(7) << setbase(8) << Dec << " :";
		cout << left << setw(7) << setbase(16) << Dec << endl;
	}
	return 0;
}*/
