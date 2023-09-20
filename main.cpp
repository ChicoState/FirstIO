#include <iostream>
using namespace std;

int main(){
  string input = "";
  int num1 = 0;
  int num2 = 0;
  int remainder = 0; 

  cout << "? ";
  cin >> input;

  if( input == "help" ){
    cout << "Hi!\n";
    cout << "Options:\nadd\nsubtract\nmultiply\ndivide\nhelp\nquit\n";
  }
  else if( input == "add" || input == "subtract" || input == "multiply" || input == "divide"){
    cout << "First number: ";
    cin >> num1;
    cin >> num2;

    if( input == "add" ){
      cout << "=" << num1+num2 << endl;
    }
    else if( input == "subtract" ){
      cout << "=" << num1-num2 << endl;
    }
    else if( input == "multiply" ){
      cout << "=" << num1*num2 << endl;
    }
    else if( input == "divide" ){
      cout << "=" << num1/num2;
      remainder = num1%num2;
      if (remainder == 0){
        cout << endl;
      }
      else{
        cout << " with a remainder of " << remainder << endl; 
      }
    }
      
  }
  else if( "quit" ){
    cout << "Goodbye!\n";
  }
  else{
    cout << input << " is not a recognized command.\n";
  }
    
  return 0;
}
