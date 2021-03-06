/*
 * scb.h
 *
 *  Created on: Dec 20, 2021
 *      Author: khorton
 */

#ifndef SCB_H_
#define SCB_H_

#include <stdint.h>


namespace SCB {
	typedef struct CPUID {
		//TODO
		uint32_t stuff;
	}CPUID_t;

	typedef struct ICSR {
		uint32_t vect_active  :9;
		uint32_t reserved1    :2;
		uint32_t ret_to_base  :1;
		uint32_t vect_pending :10;
		uint32_t isr_pending  :1;
		uint32_t res_debug    :1;
		uint32_t reserved2    :1;
		uint32_t pend_st_clr  :1;
		uint32_t pend_st_set  :1;
		uint32_t pend_sv_clr  :1;
		uint32_t pend_sv_set  :1;
		uint32_t resevred3    :2;
		uint32_t nmi_pend_set :1;
	}__attribute__((packed))ICSR_t;

	typedef struct VTOR {
		uint32_t stuff;
	}VTOR_t;

	typedef struct AIRCR {
		uint32_t stuff;
	}AIRCR_t;

	typedef struct SCR {
		uint32_t reserved1        :1;
		uint32_t sleep_on_exit    :1;
		uint32_t sleep_deep       :1;
		uint32_t reserved2        :1;
		uint32_t sev_on_pend      :1;
		uint32_t reserved3        :27;
	}__attribute__((packed))SCR_t;

	typedef struct CCR {
		uint32_t stuff;
	}CCR_t;

	typedef struct SHPR1 {
		uint32_t stuff;
	}SHPR1_t;

	typedef struct SHPR2 {
		uint32_t stuff;
	}SHPR2_t;

	typedef struct SHPR3 {
		uint32_t stuff;
	}SHPR3_t;

	typedef struct SHCRS{
	private:
		uint32_t mem_fault_act    :1;
		uint32_t bus_fault_act    :1;
		uint32_t reserved         :1;
		uint32_t usage_fault_act  :1;
		uint32_t reserved2        :3;
		uint32_t svc_call_act     :1;
		uint32_t monitor_act      :1;
		uint32_t resevered3       :1;
		uint32_t pendsvc_act      :1;
		uint32_t systick_act      :1;
		uint32_t usage_fault_pend :1;
		uint32_t mem_fault_pend   :1;
		uint32_t bus_fault_pend   :1;
		uint32_t svc_call_pend    :1;
		uint32_t mem_fault_ena    :1;
		uint32_t bus_fault_ena    :1;
		uint32_t usage_fault_ena  :1;
	public:
		void mem_fault_enable();
		void bus_fault_enable();
		void usg_fault_enable();
		void all_faults_enable();
	}__attribute__((packed))SHCRS_t;

	//TODO finish this thing
	typedef struct SCB {
		CPUID_t cpuid;
		ICSR_t icsr;
		VTOR_t vtor;
		AIRCR_t aircr;
		SCR_t scr;
		CCR_t ccr;
		SHPR1_t shpr1;
		SHPR2_t shpr2;
		SHPR3_t shpr3;
		SHCRS_t shcrs;
	}__attribute__((packed))SCB_t;
}

#endif /* SCB_H_ */
