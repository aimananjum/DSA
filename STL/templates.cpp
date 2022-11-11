#include <iostream>
#include <string>
using namespace std;

//function template
template<class T1>
void swapp(T1 &x,T1 &y){
   T1 temp = x;
   x = y;
   y = temp; 
}

int main(){
	float x=5.55,y=7.44;
	swapp(x,y);
	cout<<x<<" "<<y<<endl;
	return 0;
}


// template<class T1>
// class marks{

// public:
// 	int a[10];
// 	int size;
// 	marks(int n,int arr[]){
// 		size = n;
// 		for(int i=0;i<n;i++){
// 			a[i]=arr[i]+1;
// 		}
// 	}
// 	void print(){
// 		for(int i=0;i<size;i++){
// 			cout<<a[i]<<" ";
// 		}
// 	}
	
// };

// int main(){
// 	int arr[]={10,20,30,40,50,10,20,30,40,50};
// 	marks <int> obj(10,arr);
// 	obj.print();

// 	return 0;
// }


// template<class T1,class T2>
// class aiman{
// public:
// 	T1 data1;
// 	T2 data2;

// 	aiman(T1 a,T2 b){
// 		data1 = a;
// 		data2 = b;
// 	}

// 	void sum(){
// 		T1 d;
// 		d=data1+data2;
// 		cout<<"Sum is "<<d<<endl;
// 	}
// };


// int main(){

// 	aiman <float,int> aim(2.5,2);
// 	aim.sum();

// 	return 0;
// }





// template <class T>
// class vector{
// 	public:
// 	T *arr;
// 	int size;

// 	vector(int m){

// 		size=m;
// 		arr = new T[size];
// 	}

// 	T product(vector &v){
// 		T d=0;
// 		for(int i=0;i<size;i++){
// 			d+= this->arr[i] + v.arr[i];
// 		}
// 		return d;
// 	}
// };


// int main(){
// 	// vector v1(3);
// 	// v1.arr[0]=1;
// 	// v1.arr[1]=1;
// 	// v1.arr[2]=1;

// 	// vector v2(3);
// 	// v2.arr[0]=1;
// 	// v2.arr[1]=1;
// 	// v2.arr[2]=1;

// 	// int a = v1.product(v2);
// 	// cout<<a<<endl;

// 	// vector <float>v1(3);
// 	// v1.arr[0]=1.5;
// 	// v1.arr[1]=1.7;
// 	// v1.arr[2]=0.1;

// 	// vector <float>v2(3);
// 	// v2.arr[0]=1.8;
// 	// v2.arr[1]=1.1;
// 	// v2.arr[2]=1.5;

// 	// float a = v1.product(v2);
// 	// cout<<a<<endl;


// 	vector <sting>v1(3);
// 	v1.arr[0]="abc";
// 	v1.arr[1]="abc";
// 	v1.arr[2]="abc";

// 	vector <string>v2(3);
// 	v2.arr[0]="abc";
// 	v2.arr[1]="abc";
// 	v2.arr[2]="abc";

// 	string a = v1.product(v2);
// 	cout<<a<<endl;
// 	return 0;
// }