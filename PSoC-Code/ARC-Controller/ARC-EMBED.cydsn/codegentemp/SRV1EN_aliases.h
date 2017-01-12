/*******************************************************************************
* File Name: SRV1EN.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_SRV1EN_ALIASES_H) /* Pins SRV1EN_ALIASES_H */
#define CY_PINS_SRV1EN_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define SRV1EN_0			(SRV1EN__0__PC)
#define SRV1EN_0_PS		(SRV1EN__0__PS)
#define SRV1EN_0_PC		(SRV1EN__0__PC)
#define SRV1EN_0_DR		(SRV1EN__0__DR)
#define SRV1EN_0_SHIFT	(SRV1EN__0__SHIFT)
#define SRV1EN_0_INTR	((uint16)((uint16)0x0003u << (SRV1EN__0__SHIFT*2u)))

#define SRV1EN_INTR_ALL	 ((uint16)(SRV1EN_0_INTR))


#endif /* End Pins SRV1EN_ALIASES_H */


/* [] END OF FILE */
