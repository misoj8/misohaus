#include <iostream>                                                                                                                                                   
                                                                                              
                                                                                              
int main()                                                                                    
{                                                                                             
                                                                                              
    char buttInput;                                                                           
    while(true)                                                                               
    {                                                                                         
        std::cout << "press x to begin\n" << "press z to quit\n";                             
        std::cin  >> buttInput;                                                               
        if (!std::cin) {return 0;} // infinite loop (eof error) prevention                                                     
                                                                                              
        if(buttInput == 'x')                                                                  
        {                                                                                     
                //initiate program                                                            
                                                                                              
        }                                                                                     
        else if(buttInput == 'z')                                                             
        {                                                                                     
            std::cout << "Goodbye\n";                                                         
            return 0;                                                                         
        }                                                                                     
        else                                                                                  
        {                                                                                     
            std::cout << "invalid option >:(\n";                                              
        }                                                                                     
    }                                                                                         
}          
