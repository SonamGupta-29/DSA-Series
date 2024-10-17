#include <iostream>
using namespace std;

class Car
{
   public:

   // data member
   char* color;
   string category;
   int chasis_number;
   int seats;
   double mileage;
   int fuel_capacity;


   Car()
   {
      cout << "hi";
   }

   Car(string str, string category)
   {
    cout<<"constructor called"<<endl;
    int n = str.size();
    this->color = new char[n];  // Allocate memory and leave space for null terminator

    for(int i=0; i<n; i++){
        this->color[i] = str[i];
    }
      // this->color = color;
      this->category = category;
   }

   // member functions (getters & setters)
   void set_color(string color)
   {
    delete[] this->color;
    int n = color.size();
    this->color = new char[n];

    for(int i=0; i<n; i++){
        this->color[i] = color[i];
    }
   }
   string get_color()
   {
      return this->color;
   }

   void setcategory(string category)
   {
      this->category = category;
   }
   string getcategory()
   {
      return this->category;
   }

   void setChasisNumber(int chasis_number)
   {
      this->chasis_number = chasis_number;
   }
   int getChasisNumber()
   {
      return this->chasis_number;
   }

   void setseats(int seats)
   {
      this->seats = seats;
   }
   int getseats()
   {
      return this->seats;
   }

   void setmileage(double mileage)
   {
      this->mileage = mileage;
   }
   double getmileage()
   {
      return this->mileage;
   }

   void setfuel_capacity(int fuel_capacity)
   {
      this->fuel_capacity = fuel_capacity;
   }
   int getfuel_capacity(string fuel_capacity)
   {
      return this->fuel_capacity;
   }

//    destructor
~Car(){
    cout<<"I am destructor"<<endl;
    delete [] this->color;
}
};

int main()
{
  // Creating an object using the parameterized constructor
    Car c1("brown", "suv");

    // Pointer to the object
    Car *ptr = &c1;

    // Using the setter method to set the chassis number
    ptr->setChasisNumber(3211);
    (*ptr).setChasisNumber(3211);  // This is also a valid way to access the function

    // Output the color of the car
    cout<< ptr->get_color() << endl;
    cout<< ptr->getcategory()<<endl;
    cout<< ptr->getChasisNumber() << endl;

   return 0;
}