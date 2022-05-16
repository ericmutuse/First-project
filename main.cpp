#include <iostream>
using namespace std;
class circle {
	int length,width;
	public:
		int area(int l,int w){
		return l*w;
		}
		int area(int l){
			return l*l;
		}
		};
		int main(){
			circle c;
			cout<<"Area:"<<c.area(10)<<endl;
		    cout<<"Area2:"<<c.area(10,5)<<endl;
		    return 0;
		}
		

