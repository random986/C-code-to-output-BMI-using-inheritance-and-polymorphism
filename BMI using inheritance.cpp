#include<iostream>
using namespace std;

class PersonalInfo{
	protected:
		string Name;
		int Age;
		int Weight;
		int Height;
    public:
  //   	string Name(string name){
		// 	cout<<"Name: "<<name<<endl;
		// 	return name;
		// }
		void setName(string name){
			Name = name;
		}
		string getName(){
			cout<<"Name: "<<Name<<endl;
			return Name;
		}
		
		// int Age(int age){
		// 	cout<<"Age: "<<age<<endl;
		// 	return age;
		// }
		void setAge(int age){
			
			Age = age;
		}
		int getAge(){
			cout<<"Age:"<<Age<<endl;
			return Age;
		}
		
		// int Weight(int weight){
		// 	cout<<"Weight: "<<weight<<endl;
		// 	return weight;
		// }
		
		void setWeight(int weight){
			Weight = weight;
		}
		int getWeight(){
			cout<<"Weight: "<<Weight<<endl;
			return Weight;
		}
		// int Height(int height){
		// 	cout<<"height: "<<height<<endl;
		// 	return height;
		// }
		
		void setHeight(int height){
			Height = height;
		}
		int getHeight(){
			cout<<"Height: "<<Height<<endl;
			return Height;
		}	
};

class BMI :public PersonalInfo{
	// int bmi;
	// public:
	// 	int Bmi(){
	// 		bmi = weight/height;
	// 		cout<<"BMI: "<<bmi<<endl;
	// 		return bmi;
	// 	}
	
	int Bmi;
	public:
		int getBmi(){
			Bmi = Weight/Height;
			cout<<"Your BMI is: "<<Bmi<<endl;
			return Weight/Height;
		}
	
		
};

int main(int argc, char** argv)
{

	BMI Edmon;
	Edmon.setName("Edmond-Koech");
	Edmon.setAge(23);
	Edmon.setWeight(58);
	Edmon.setHeight(2);
	Edmon.getName();
	Edmon.getAge();
	Edmon.getWeight();
	Edmon.getHeight();
	Edmon.getBmi();

	
	return 0;
}