#include<iostream>
#include<windows.h>
using namespace std;

class time{
	private:
		int sec,min,hour;
		
		public:
		time(){
			sec = 0;
			min = 0;
			hour = 0;
		}
		
		time(int s, int m, int h){
			sec= s;
			min = m;
			hour = h;
		}
		
		
		
		void setsec(int val){
			
			if(val>=1 && val<=60){
				sec = val;
			}
			else{
				sec = 0;
			}
}
		
		void setmin(int val){
			
			if (val>=1 && val<=60){
				min = val;
			}
			else 
			{
				min = 0;
			}
		}
		
		void sethour(int val){
			if  (val >= 1 && val <= 24)
			{
				hour = val;
			}
			else
			{
				hour = 0;
			}
		}
		
		int getsec(){
		return sec;	
		}
		
		int gethour(){
			return hour;
		}
		
		int getmin(){
			return min;
		}
		
		void input(){
			cout<<"Enter Hour";
			cin>>hour;
			cout<<"Enter min";
			cin>>min;
			cout<<"Enter Sec";
			cin>>sec;
		}
		
		void output(){
			cout<<(hour%12>=0 && hour%12<=9 ? "0":"")<<hour%12 <<":"<<(min >=0 && min <=9 ? "0" : "")<<min <<":"<<(sec >=0 && sec <= 9 ? "0" : "")<<sec;
		}
		
		void tick()
		{
			setsec(getsec() + 1);
			if (getsec() == 1);
			{
				setmin(getmin() + 1);
				if (getmin() == 1);
				{
					sethour(gethour() + 1);
				}
			}
		}
		
		void run(){
		
			while(true){
			output();
			tick();
			Sleep(1000);
			system("cls");
			}
				
		}
		
	};

int main()
{	

	time t;
	t.input();
	t.run();
	
	return 0;
}
