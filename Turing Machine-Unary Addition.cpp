
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

int main()
{
	int length,j,i,k,length_X,length_Y;
	string X,Y,S;
	
	cout<<"Calculation of X+Y by Turing machine :\n";
	for(int h=0;h<80;h++)
	{
		cout<<"_";
	}
	cout<<"\n";
	cout<<"Enter unary value of X :\n";
	cin>>X;
	cout<<"Enter unary value of Y :\n";
	cin>>Y;
	length_X=X.length();
	length_Y=Y.length();
	length=length_X+length_Y+3;
	char *turing_array = new char[length];
	turing_array[0]='B';
	
	
	for(i=0;i<length;i++)
	{
		
		if((i>0)&&(i<=length_X))
		{
			turing_array[i]='1';
			
		}
		else if(i==length_X+1)
		{
			turing_array[i]='0';
		}
		else if((i>=length_X+2)&&(i<length-1))
		{
			turing_array[i]='1';
		}
		else
		{
			turing_array[i]='B';
		}
		
	}
	
	cout<<"Initially string will be like :\n";
	for(i=0;i<length;i++)
	{
		cout<<turing_array[i]<<"\t";
		
	}
	cout<<"\n\n";
	getch();
	for(int h=0;h<80;h++)
	{
		cout<<"_";
	}
	cout<<"\n";
	for(i=0;i<length;i++)
	{
		if(turing_array[i]=='0')
		{
			turing_array[i]='1';
			cout<<"Step :"<<i+1<<"\n";
			for(j=0;j<length;j++)
			{
				cout<<turing_array[j]<<"\t";
			}
			cout<<"\n";
			for (int p = 0; p < length_X+1; p++)
            {
				cout << "\t" ;
					
            } 
            cout<<"^";
            cout<<"\n";
			cout<<"*(Q0,0) = (Q1,1,R)"<<"\n";
			for(int h=0;h<80;h++)
	{
		cout<<"_";
	}cout<<"\n";
		}
		else if(turing_array[i]=='B'&&i!=0)
		{
			cout<<"Step :"<<i+1<<"\n";
			for(j=0;j<length;j++)
			{
				cout<<turing_array[j]<<"\t";
			}
			cout<<"\n";
			for (int p = 0; p < length-1; p++)
            {
				cout << "\t" ;
					
            } 
            cout<<"^";
            cout<<"\n";
			cout<<"*(Q1,B) = (Q2,B,L)"<<"\n";
			for(int h=0;h<80;h++)
			{
				cout<<"_";
			}cout<<"\n";
			getch();
			for(k=length-2;k>=0;k--)
			{
				if(k==length-2)
				{
					turing_array[k]='0';
					cout<<"Step :"<<i+1+length-k-1<<"\n";
					for(j=0;j<length;j++)
					{
		
						cout<<turing_array[j]<<"\t";
					}
					cout<<"\n";	
					for (int p = 0; p < length-2; p++)
            		{
						cout << "\t" ;
           			} 
            		cout<<"^";
            		cout<<"\n";
					cout<<"*(Q2,1) = (Q3,0,L)"<<"\n";
					for(int h=0;h<80;h++)
					{
						cout<<"_";
					}cout<<"\n";
					getch();
				}
				else if(turing_array[k]=='1')
				{
					cout<<"Step :"<<i+1+length-k-1<<"\n";
					for(j=0;j<length;j++)
					{
						cout<<turing_array[j]<<"\t";
					}
					cout<<"\n";	
					for (int p = 0; p < k; p++)
           			{
						cout << "\t" ;
					} 
            		cout<<"^";
            		cout<<"\n";
					cout<<"*(Q3,1) = (Q3,1,L)"<<"\n";
					for(int h=0;h<80;h++)
					{
					cout<<"_";
					}cout<<"\n";
					getch();
				}
				else
				{
					cout<<"Step :"<<i+1+length-k-1<<"\n";
					for(j=0;j<length;j++)
					{
						cout<<turing_array[j]<<"\t";
					}
					cout<<"\n";	
				
                    cout<<"^";
           			cout<<"\n";
					cout<<"*(Q3,B) = (Q4,1,R)"<<"\n";
					cout<<"halt and accepted";
					cout<<"\n";
					for(int h=0;h<80;h++)
					{
						cout<<"_";
					}
					cout<<"\n";
					getch();
				}
			}
		}
		else
		{
			if(turing_array[i]=='1'&&i<=length_X)
			{
				cout<<"Step :"<<i+1<<"\n";
				for(j=0;j<length;j++)
				{
					cout<<turing_array[j]<<"\t";
				}
					cout<<"\n";
				for (int p = 0; p < i; p++)
           		{
				cout << "\t" ;
				} 
            	cout<<"^";
            	cout<<"\n";
					cout<<"*(Q0,1) = (Q0,1,R)"<<"\n";
					for(int h=0;h<80;h++)
					{
						cout<<"_";
					}cout<<"\n";
					getch();
			}
			else if(turing_array[i]=='1'&&i>length_X+1)
			{
				cout<<"Step :"<<i+1<<"\n";
				for(j=0;j<length;j++)
				{
					cout<<turing_array[j]<<"\t";
				}
				cout<<"\n";
				for (int p = 0; p < i; p++)
           		{
				cout << "\t" ;
				} 
            	cout<<"^";
            	cout<<"\n";
				cout<<"*(Q1,1) = (Q1,1,R)"<<"\n";
				for(int h=0;h<80;h++)
					{
						cout<<"_";
					}cout<<"\n";
					getch();
			}
			else
			{
				cout<<"Step :"<<i+1<<"\n";
				for(j=0;j<length;j++)
				{
					cout<<turing_array[j]<<"\t";
				}
				cout<<"\n";
				cout<<"^";
				cout<<"\n";	
				for(int h=0;h<80;h++)
				{
					cout<<"_";
				}cout<<"\n";
				getch();
			}
			
		}
			
	}
	


	return 0;
	
			
	
}
