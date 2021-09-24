  #include "windows.h"  
   #include <iostream>  
   #include <thread>  
   using namespace std;  
     
   void mySecondFunc(){  
     for(int i=0;i<5;i++){  
       cout<<"This is from the second thread!\n";  
       Sleep(2000);     //pause for two seconds  
     }  
   }  
     
   int main() {  
        //Create and Start the second thread(called mySecondThread)  
     std::thread mySecondThread(mySecondFunc);  
     
     for(int i=0;i<5;i++){  
       cout<<"This is from the main thread!\n";  
       Sleep(1000);     //pause for one seconds  
     }  
     
        // pauses until the second thread finishes  
     mySecondThread.join();   
     return 0;  
   }  