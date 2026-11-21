#include <iostream>

using namespace std;

int main() {
    char ch,ch2;
    
    cout << "Enter a character: ";
    cin >> ch >> ch2;
    switch(ch){
    	case '4':
    		{
			
    			bool u = ( ch2>='0' && ch2<='9' );
    			switch(u){
				case 1:
    			cout<<"Very Hot:"<<endl;
    			break;
				}
				break;
		}
		case '3':
			{
			
		 bool u = ( ch2>='0' && ch2<='9' );
    			switch(u){
				case 1:
    			cout<<" Hot:"<<endl;
    			break;
				}
				break;
			}
		case '2':
			{
			
		bool u = ( ch2>='0' && ch2<='9' );
    			switch(u){
				case 1:
    			cout<<"Normal:"<<endl;
    			break;
				}
				break;
		}
		case '1':
			{
			
		bool u = ( ch2>='0' && ch2<='9' );
    			switch(u){
				case 1:
    			cout<<"Cold:"<<endl;
    			break;
				}
				break;
			}
		case '0':
			{
			
		bool u = ( ch2>='0' && ch2<='9' );
    			switch(u){
				case 1:
    			cout<<"Very Cold:"<<endl;
    			break;
				}
				break;
		}
    	default:
    		cout<<"Freezing:";
    		break;
    		
	}

    

    return 0;
}
