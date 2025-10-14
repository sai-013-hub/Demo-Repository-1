#include <iostream>
using namespace std;
class student {
	int roll;
   public:
   	void setroll(int roll){
   		this->roll=roll;
    	}
		void display(){
			cout<<"Roll number:"<<roll<<endl;
		}
	};
	int main(){
		student s;
		s.setroll(101);
		s.dispaly();
		return 0;
}
	
			
		

	
