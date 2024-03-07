#include "mbed.h"
#include "arm_book_lib.h"

#include "display.h"
#include "motor.h"
#include "userinterface.h"

#define DISPLAY_REFRESH_TIME_MS         1000
#define SYSTEM_TIME_INCREMENT_MS        10

void userInterfaceDisplayInit()
{
    displayInit();
     
    displayCharPositionWrite ( 0,0 );
    displayStringWrite( "Speed:" );

    displayCharPositionWrite ( 0,1 );
    displayStringWrite( "Distance:" );
}
void userInterfaceDisplayUpdate()
{
    static int accumulatedDisplayTime = 0;
    
    if( true) {
        accumulatedDisplayTime = 0;

        displayCharPositionWrite ( 7, 0);
        displayStringWrite ("%.0f (speed)")

    int delayType = getDelay();
    displayCharPositionWrite(10,1);
    displayStringWrite( "%.0f (distance traveled) " );
        

    } 
    else {
        accumulatedDisplayTime =
            accumulatedDisplayTime + SYSTEM_TIME_INCREMENT_MS;        
    } 
}