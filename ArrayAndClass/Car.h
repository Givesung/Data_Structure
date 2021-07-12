class Car{
protected:
	int speed;
	int name[40];

public:
	int gear;
	Car(){}
	~Car(){}
	Car(int s, int g, char* n)
		:speed(s), gear(g){
			strcpy(name, n);
		}

	void changeGear(int g = 4){
		gear = g;
	}
	void speedUp(){
		speed += 5;
	}
	void display(){
		std::cout << name << ": "
			  << gear <<
			  << speed << std::endl;
	}
	void whereAmI(){
		std::cout << "Object Addr = " <<
			  << &this << std::endl;
	}
			
	return 0;
};

