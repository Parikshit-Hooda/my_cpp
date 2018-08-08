/*************
 Driver program to test below functions
 
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
****************/

class Polynomial {
    int *degCoeff;      // Name of your array (Don't change this)
    int capacity;
    int totalEle;
  
  public :
  
  Polynomial() {
    capacity = 10;
    totalEle = 0;
    degCoeff = new int[capacity];
    for(int i = 0 ; i < capacity ; i++)
      degCoeff[i] = 0;
  }
  
  Polynomial(Polynomial const &P1) {
    Polynomial newPolynomial();
    newPolynomial ->
    
    
  }
  
  void setCoefficient() {
    
  }
  
  Polynomial& operator+(Polynomial const &P2) const {
    Polynomial *P3 = new Polynomial();
    for(int i = 0 ; i < capacity ; i++)
      P3->degCoeff[i] = this->degCoeff[i] + P2.degCoeff[i];
    
    return P3;
       
  }
  
  Polynomial& operator-(Polynomial const &P2) const {
    Polynomial *P3 = new Polynomial();
    for(int i = 0 ; i < capacity ; i++)
      P3->degCoeff[i] = this->degCoeff[i] - P2.degCoeff[i];
    
    return P3;
  }
  
  Polynomial& operator*(Polynomial const &P3) const {
    Polynomial *P3 = new Polynomial();
    
    
  }
  
  void operator=(Polynomial const &P3) const {
    for(int i = 0 ; i < this->capacity ; i++)
    {
      this.degCoeff[i] = P3.degCoeff[i];
    }
  }
  
  void print() const {
    for(int i = 0 ; i < capacity ; i++) {
      if(i==0)
      {
        cout<<degCoeff[i]<<"x"<<i;
        continue;
      }
      cout<<" "<<degCoeff[i]<<"x"<<i;    
    }   
  }
    
};
