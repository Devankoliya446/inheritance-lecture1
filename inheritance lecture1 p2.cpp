#include<iostream>

using namespace std;

class P{
	
	public:
	
	    float celsius = 10;       	
	    float fehrenheit;
	    float kelvin;
};

class Q : public P{
	
	public:
		
	    float tofehrenheit(){
	    	
 	    	fehrenheit = celsius*1.8+32;
 	    	
 	    	return fehrenheit;
	    }
			
};

class R : public Q{
	
	public:
		
	    float  tokelvin(){
			
			kelvin = (fehrenheit-32)*1.8+273.15;
			
			return kelvin;
		}
};

main(){
	
	R obj;
	
	cout<<obj.tofehrenheit()<<endl;
	cout<<obj.tokelvin();
}
