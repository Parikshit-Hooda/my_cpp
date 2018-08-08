/**********
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 ************/


class ComplexNumbers {
  int real;
  int complex;
  public:
  ComplexNumbers(int real1, int complex1) {
    this->real = real1;
    this->complex = complex1;
  }
  void plus(ComplexNumbers const &cn1) {
    this->real = cn1.real + this->real;
    this->complex = cn1.complex + this->complex;
  }
  void multiply(ComplexNumbers const &cn1) {
    int originalReal = this->real;
    this->real = (this->real * cn1.real) - (this->complex*cn1.complex);
    this->complex = originalReal*cn1.complex + this->complex*cn1.real;

  }
  void print() {
    if(this->complex < 0)
    {
      cout<< this->real<<" - i"<< (-1)*this->complex<<endl;
      return;
    }
    cout<< this->real<<" + i"<< this->complex<<endl;
  }
};