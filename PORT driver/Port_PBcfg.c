/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Source file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Youssef Mohamed
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION           (1U)
#define PORT_PBCFG_SW_MINOR_VERSION           (0U)
#define PORT_PBCFG_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION   (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION   (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION   (3U)


/* AUTOSAR Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
        ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
        ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
#error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between Port_PBcfg.c and Port.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
        ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
        ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
#error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Port_Init API */
const Port_ConfigType Port_PinConfig = {
                                        PORT_Port_A , PORT_Pin0, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_A , PORT_Pin1, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_A , PORT_Pin2, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_A , PORT_Pin3, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_A , PORT_Pin4, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_A , PORT_Pin5, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_A , PORT_Pin6, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_A , PORT_Pin7, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,

                                        PORT_Port_B , PORT_Pin0, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_B , PORT_Pin1, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_B , PORT_Pin2, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_B , PORT_Pin3, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_B , PORT_Pin4, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_B , PORT_Pin5, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_B , PORT_Pin6, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_B , PORT_Pin7, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,

                                        PORT_Port_C , PORT_Pin0, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_C , PORT_Pin1, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_C , PORT_Pin2, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_C , PORT_Pin3, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_C , PORT_Pin4, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_C , PORT_Pin5, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_C , PORT_Pin6, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_C , PORT_Pin7, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,

                                        PORT_Port_D , PORT_Pin0, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_D , PORT_Pin1, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_D , PORT_Pin2, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_D , PORT_Pin3, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_D , PORT_Pin4, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_D , PORT_Pin5, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_D , PORT_Pin6, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_D , PORT_Pin7, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,

                                        PORT_Port_E , PORT_Pin0, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_E , PORT_Pin1, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_E , PORT_Pin2, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_E , PORT_Pin3, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_E , PORT_Pin4, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_E , PORT_Pin5, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,

                                        PORT_Port_F , PORT_Pin0, INPUT, OFF, PIN_LEVEL_LOW , PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_F , PORT_Pin1, OUTPUT, OFF, PIN_LEVEL_LOW, PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_F , PORT_Pin2, INPUT, OFF, PIN_LEVEL_LOW, PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_F , PORT_Pin3, INPUT, OFF, PIN_LEVEL_LOW, PORT_PIN_MODE_DIO , STD_ON, STD_ON,
                                        PORT_Port_F , PORT_Pin4, INPUT, PULL_UP, PIN_LEVEL_LOW,  PORT_PIN_MODE_DIO , STD_ON, STD_ON

};
