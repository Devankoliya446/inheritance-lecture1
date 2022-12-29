#include<iostream>

using namespace std;

class x{
	
	public:
		
		int a = 1;
		int b = 2;
		int c = 3;
};

class y : public x{
	
	public:
		
		void setData(){
			
			cout<<"Cube of A = "<<a*a*a<<endl;
			cout<<"Cube of B = "<<b*b*b<<endl;
			cout<<"Cube of c = "<<c*c*c<<endl;	
		}
		
		void getData(){
			
			cout<<"Sum of cube = ";
			cout<<(a*a*a)+(b*b*b)+(c*c*c);
		}
};

main(){
	
	y obj;
	
	obj.setData();
	obj.getData();
}
