//iman suleman 23i0618
#include <iostream>
using namespace std;


int main()
{
   int operand1,operand2 = 0;
   char op;
   
     cout<<"Menu \n------------------------- \n + Addition \n - Subtraction \n *     Multiplication \n / Division \n . Cancel \n------------------------- \n" ;

   cout<<"Enter first number = ";
   cin>>operand1;
   cout<<"Enter second number = ";
   cin>>operand2;
   cout<<"Enter operation = ";
   cin>>op;
   cout<<"------------------------- \n";
    
    switch(op)
   {
       case '+':
       cout<<operand1<<op<<operand2<<" = "<<operand1+operand2<<endl;
       break;
       
       case '-':
       cout<<operand1<<op<<operand2<<" = "<<operand1-operand2<<endl;
       break;
       
       case '*':
       cout<<operand1<<op<<operand2<<" = "<<operand1*operand2<<endl;
       break;
       
       case '.':
       cout<<"Program ended \n";
       break;
       
       case '/':
       	   switch (operand2)
       	    {
       	      case 0:
       	      cout<<"Division is not possible \n";
       	      break;
       	      
       	     default:
             cout<<operand1<<op<<operand2<<" = "<<operand1/operand2<<endl;
       	      break;
       	     }
       	     
       break;
       
       
       default:
       cout<<"input is invalid";
     }
       
        	    

       
   
   

    return 0;
}

