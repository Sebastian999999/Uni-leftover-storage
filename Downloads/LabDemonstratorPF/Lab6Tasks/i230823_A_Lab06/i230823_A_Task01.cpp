	//Zoha Fatima
	//23i-0823
#include<iostream>
using namespace std;
int main(){
 	
 	int n1,n2;
 	char op;
 	
 	cout<<"\nMENU\n-------------------------------------------\n+ Addition\n- Subtraction\n* Multiplication\n/ Division\n% Modulus\n. Cancel\n-------------------------------------------\n";
 	cout<<"Enter first number:";
 	cin>>n1;
 	cout<<"Enter first number:";
 	cin>>n2;
 	cout<<"Enter your desired operation: ";
 	cin>>op;
 	cout<<"-------------------------------------------\n";
 	
 	switch(op){
 	
 	    case '+':
 	    cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
 	    break;
 	    
 	    case '-':
 	    cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
 	    break;
 	    
 	    case '*':
 	    cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
 	    break;
 	    
 	    case '/':
 	    	switch(n2 == 0){
 	    	case 1:
 	    	cout<<"Division not possible you entered denominator zero.\n";
 	    	break;
 	    	case 0:
 	    	cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
 	    	break;
 	       }
 	       break;
 	      
 	    case '%':
 	    cout<<n1<<" % "<<n2<<" = "<<n1%n2<<endl;
 	    break;
 	    
 	    case '.':
 	    cout<<"Program exit\n";
 	    break;
 	   
 	    default:
 	    cout<<"Invalid operator\n";
 	    
 	}
 	    


return 0;
}
