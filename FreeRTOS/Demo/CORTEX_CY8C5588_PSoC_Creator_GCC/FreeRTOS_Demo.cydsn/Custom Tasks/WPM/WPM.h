/************ CHANGE LOG ****************
Change ID      : NA
Version        : 1
Date           : 3rd Jan 2017
Changes Made   : Initial Issue
*****************************************/

#ifndef WPM_H
#define WPM_H

#define WPM_NOTIFICATION_NONE   ( uint32_t ) 0    
#define WPM_NOTIFICATION_RESET  ( uint32_t ) 1
#define WPM_NOTIFICATION_SAVE   ( uint32_t ) 3
#define WPM_NOTIFICATION_CLEAR  ( uint32_t ) 4
#define WPM_NOTIFICATION_RUN    ( uint32_t ) 5
#define WPM_NOTIFICATION_STOP   ( uint32_t ) 6      

typedef struct WPMParams
{
    QueueHandle_t *pxServoInputQueue;
} xWPMParams_t;

TaskHandle_t xStartWPMTask( int priority, xWPMParams_t *pxParams );

#endif

/* [] END OF FILE */