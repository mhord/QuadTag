/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

int main()
{
    signalData_Enable();
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    signalData_WriteData(0xdead);
    /* CyGlobalIntEnable; */ /* Uncomment this line to enable global interrupts. */
    for(;;)
    {
        if (sendComplete_Read() != 0) signalData_WriteData(0xdead);
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
