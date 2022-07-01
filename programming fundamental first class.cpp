#include<iostream>
using namespace std;
main()
				/*
					Programmer: Hamza Rahman
				 
					Program: Number Checker
					Date: 01/07/22 21:03
					Description: 
					Take input from the user
					check the user input 
					process the program 
					and give result to User :)
				*/

		{
			int number;
			cin>>number;
			
			if(number>10 && number <20)
				{
				cout<<"number is greater then 10"<<endl;
				}
	
			if(number> 20 && number <30)
				{
						cout<<"number is greater then 20"<<endl;
				}
			if(number>30)
				{
						cout<<"number is greater then 30"<<endl;
				}
		    else if (number<10)
				{
					cout<<"number is Less then 10"<<endl;
				}
			
		}
