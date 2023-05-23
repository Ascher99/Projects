#include<iostream>
using namespace std;
 
int main()
{
  
    	string zdanie="";
        int zlicz[26] = {0}; 
        
        cin >> zdanie; 
        
        int i=0; 
        
        while(zdanie[i]) 
        {
                zlicz[int(zdanie[i])-65]++;
				
                i++;
               
        }
        /*
        for(int j=97;j<123;j++) 
                if(zlicz[j]<0) 
                        cout<<(char)j<<" - "<<zlicz[j]<<endl;
        */              
        for(int j=0;j<26;j++)
                {
        
                		if(zlicz[j]>0)
                		
                        cout<<char(j+65)<<" - "<<zlicz[j]<<endl;   
                	
				}
			
          
        return 0;
}
