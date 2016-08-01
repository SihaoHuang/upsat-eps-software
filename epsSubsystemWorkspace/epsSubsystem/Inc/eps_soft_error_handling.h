/*
 * eps_soft_error_handling.h
 *
 *  Created on: May 10, 2016
 *      Author: ariolis
 */

#ifndef INC_EPS_SOFT_ERROR_HANDLING_H_
#define INC_EPS_SOFT_ERROR_HANDLING_H_


/** @addtogroup softerror
  * @{
  */

/**
 * @brief Soft error enumeration
 *
 * List of all possible error status.
 */
typedef enum {
	EPS_SOFT_ERROR_OK=0,
	EPS_SOFT_ERROR_UNRESOLVED,
	/*add more cases here that will be returned and handled*/
	EPS_SOFT_ERROR_UMBILICAL_UNPREDICTED,
	EPS_SOFT_ERROR_BOOTSEQ_POWEROFF_ALL_RAILS,
	EPS_SOFT_ERROR_BOOTSEQ_UMBILICAL_CHECK,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_STAGE,
	EPS_SOFT_ERROR_OBC_COMM_INIT,
	EPS_SOFT_ERROR_DEBUG_UART_INIT,
	EPS_SOFT_ERROR_DEBUG_UART_FLUSH,
	EPS_SOFT_ERROR_LOAD_SAFETY_LIMITS,
	EPS_SOFT_ERROR_BOOTSEQ_POWERON_ALL_RAILS,
	EPS_SOFT_ERROR_STATE_INIT,
	EPS_SOFT_ERROR_STATE_UPDATE,
	EPS_SOFT_ERROR_KICK_TIMER,
	EPS_SOFT_ERROR_POWER_MODULE_INIT_ALL,
	EPS_SOFT_ERROR_POWER_MODULE_INIT_TOP,
	EPS_SOFT_ERROR_POWER_MODULE_INIT_BOTTOM,
	EPS_SOFT_ERROR_POWER_MODULE_INIT_LEFT,
	EPS_SOFT_ERROR_POWER_MODULE_INIT_RIGHT,
	EPS_SOFT_ERROR_MPPT_UPDATE_TOP,
	EPS_SOFT_ERROR_MPPT_UPDATE_BOTTOM,
	EPS_SOFT_ERROR_MPPT_UPDATE_LEFT,
	EPS_SOFT_ERROR_MPPT_UPDATE_RIGHT,
	EPS_SOFT_ERROR_OBC_COMM_SERVICE,
	EPS_SOFT_ERROR_SAFETY_CHECK,
	EPS_SOFT_ERROR_SAFETY_CHECK_BATTERY_VOLTAGE_UNPREDICTED,
	EPS_SOFT_ERROR_SAFETY_CHECK_BATTERY_TEMPERATURE_UNPREDICTED,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_LEFT,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_RIGHT,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_TOP,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_BOTTOM,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_ANT1,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_KEY_A,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_KEY_B,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_KEY_C,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_KEY_D,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_KEY_E,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_KEY_F,
	EPS_SOFT_ERROR_BOOTSEQ_DEPLOYMENT_KEY_G,
	EPS_SOFT_ERROR_UPDATE_STATE_ADC,
	EPS_SOFT_ERROR_UPDATE_STATE_ADC_DMA,
	EPS_SOFT_ERROR_UPDATE_STATE_ADC_FILTER,
	EPS_SOFT_ERROR_UPDATE_STATE_ADC_CPU_TEMP,
	EPS_SOFT_ERROR_STATE_UPDATE_BATTERYPACK_TEMP,
	EPS_SOFT_ERROR_LAST_VALUE
}EPS_soft_error_status;

extern volatile EPS_soft_error_status error_status;/* initialize global software error status to OK.*/


/*checks the status, if it is a known issue from the enumeration, tries to solve it in software
 else a soft reset is triggered.
 if the error status is ok, the watchdog  is updated.*/
void EPS_soft_error_handling(EPS_soft_error_status eps_error_status);

#endif /* INC_EPS_SOFT_ERROR_HANDLING_H_ */
/**
  * @}
  */
