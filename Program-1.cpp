using namespace std;

class Calculator{
	public:
		int a;
		int b;
		
		Calculator(int first, int second, char op){
			a = first;
			b = second;
			if(op == '+'){
				cout<<"Sum : "<<a+b<<endl;
			}
			else if(op == '-'){
				cout<<"Subtraction : "<<a-b<<endl;
			}
			else if(op == '*'){
				cout<<"Multiplication : "<<a*b<<endl;
			}
			else if(op == '/'){
				cout<<"Divison : "<<a/b<<endl;
			}
			else{
				cout<<"Please Choose A Correct Operator!!";
			}
		}
};

int main(){
	Calculator obj1(2, 5, '+');
	Calculator obj2(10, 5, '-');
	Calculator obj3(10, 5, '*');
	Calculator obj4(10, 5, '/');
	return 0;
}
