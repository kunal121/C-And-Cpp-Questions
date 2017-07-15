#include <iostream>
using namespace std;

template <class T>
class Calculator
{
    private:
	T num1, num2;
    public:
	Calculator(T n1, T n2);
    void displayResult();
    T add();

	T subtract();

	T multiply();

	T divide();
};
template<class T>
Calculator<T>::Calculator(T n1,T n2){
    num1=n1;
    num2=n2;
}
template<class T>
void Calculator<T>::displayResult(){
    cout<<"Numbers are: "<<num1<<" and "<<num2<<"."<<endl;
   cout<<"Addition is: "<<add()<<endl;
   cout<<"Subtraction is: "<<subtract()<<endl;
    cout<<"Product is: "<<multiply()<<endl;
    cout<<"Division is: "<<divide()<<endl;
}
template<class T>
T Calculator<T>::add(){
    return num1+num2;
}
template<class T>
T Calculator<T>::subtract(){
    return num1-num2;
}
template<class T>
T Calculator<T>::multiply(){
    return num1*num2;
}
template<class T>
T Calculator<T>::divide(){
    return num1/num2;
}

int main()
{
    int n1,n2;
    float m,n;
    cin>>n1>>n2;
    cin>>m>>n;
	Calculator<int> intCalc(n1,n2);
	Calculator<float> floatCalc(m,n);

	cout << "Int results:" << endl;
	intCalc.displayResult();

	cout << endl << "Float results:" << endl;
	floatCalc.displayResult();

	return 0;
}
