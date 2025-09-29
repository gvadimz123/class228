//1 
#include <iostream>  
  using namespace std;
int main() {  
    double number; 
      
  
    cout << "write a number: ";  
    cin >> number;  
      
    
    if (number > 0) {  
        cout << "number > 0" << endl;  
    }  
    else if (number < 0) {  
        cout << "number < 0" << endl;  
    }  
    else {  
        cout << "number = 0" << endl;  
    }  
      
    return 0;  
}  
//2
#include <iostream>  
  
int main() {  ..6
    int number;  
      

    std::cout << "write a number: ";  
    std::cin >> number;  
      
      
    if (number % 2 == 0) {  
        std::cout << "number " << number << " number even." << std::endl;  
    } else {  
        std::cout << "number " << number << " number uneven." << std::endl;  
    }  
      
    return 0;  
}  
//3 
#include <iostream>  
using namespace std;  
  
int main() {  
   
    int num1, num2;  
      
    
    cout << "write first number: ";  
    cin >> num1;  
      
    cout << "write second number: ";  
    cin >> num2;  
      
      
    if (num1 == num2) {  
        cout << "numbers are equal" << endl;  
    } else {  
        cout << "numbers are not equal" << endl;  
    }  
      
    return 0;  
}  
//4
#include <iostream>  
using namespace std;  
  
int main() {  
    int number;  
      
    cout << "write a number: ";  
    cin >> number;  
      
     
    if (number % 5 == 0) {  
        cout << "number " << number << " is divisible by 5 without a remainder" << endl;  
    } else {  
        cout << "number " << number << " is not divisible by 5 without a remainder" << endl;  
    }  
      
    return 0;  
}  
//5
#include <iostream> 
#include <string>   

int main() {
    int age; 
    const int ADULT_AGE = 18; 

   
    std::cout << "enter you age: ";
    std::cin >> age;

    
    if (age >= ADULT_AGE) {
        std::cout << "you are grandpa!" << std::endl; // Если да, выводим это сообщение
    } else {
        std::cout << "you are not grandpa." << std::endl; // Если нет, выводим это сообщение
    }

    return 0;
}
//6 
#include <iostream> 
int main() {
    double number; 

    std::cout << "write a number";
    std::cin >> number;

    
    if (number < 0) {
        std::cout << "numbr" << " -"<< std::endl;
    } else if (number > 0) {
        std::cout << "number"<< " +"<< std::endl;
    } else {
        std::cout << "number"<< " 0" << std::endl;
    }

    return 0;
}
//7
#include <iostream>
#include <cctype> 

int main() {
    char inputChar;

    std::cout << "write symbol: ";
    std::cin >> inputChar;

    
    if (isupper(inputChar) && inputChar == 'A') {
        std::cout << "The entered character is a capital 'A'." << std::endl;
    } else {
        std::cout << "The character entered is not a capital 'A''." << std::endl;
    }

    return 0;
}
//8
#include <iostream>

int main() {
    double num1, num2; 

   
    std::cout << "write a first number: ";
    std::cin >> num1;

    
    std::cout << "write a second number: ";
    std::cin >> num2;

   
    if (num1 > 0) {
        std::cout << "first number (" << num1 << ") positive." << std::endl;
    } else {
        std::cout << "first number (" << num1 << ") not positive :(  ." << std::endl;
    }

    
    if (num2 > 0) {
        std::cout << "seconde number (" << num2 << ") positive." << std::endl;
    } else {
        std::cout << "seconde number (" << num2 << ") not positive, very sad :(." << std::endl;
    }

    return 0;
}
//9
#include <iostream>

int main() {
    int num1, num2;

    
    std::cout << "write a first number: ";
    std::cin >> num1;

    std::cout << "write a seconde number: ";
    std::cin >> num2;

   
    if (num1 == 0 || num2 == 0) {
        std::cout << "At least one of the entered numbers is zero.." << std::endl;
    } else {
        std::cout << "None of the numbers entered is equal to zero.." << std::endl;
    }

    return 0;
}
//10
#include <iostream>

int main() {
    int number; 

    std::cout << "write a number: "; 
    std::cin >> number; 

    if (number != 10) { 
        std::cout << "number is not 10." << std::endl; 
    } else {
        std::cout << "number is 10." << std::endl; 
    }

    return 0; 
}
