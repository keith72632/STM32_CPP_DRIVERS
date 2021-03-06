/*
 * systick.h
 *
 *  Created on: Dec 22, 2021
 *      Author: khorton
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_

#include <stdint.h>

namespace Systick {

	typedef struct SYST_CSR {
	private:
		uint32_t enable        :1;
		uint32_t tick_int      :1;
		uint32_t clk_source    :1;
		uint32_t reserved1     :13;
		uint32_t count_flag    :1;
		uint32_t reserved2     :15;
	public:
		void systick_enable();
		void systick_int();
	}__attribute__((packed))SYST_CSR_t;

	typedef struct SYST_RVR {
	private:
		uint32_t reload    :24;
		uint32_t reserved  :8;
	public:
		void load(uint32_t reloadval);
	}__attribute__((packed))SYST_RVR_t;

	typedef struct SYST_CVR {
	private:
		uint32_t current    :24;
		uint32_t reserved   :8;
	public:
		void set_current(uint32_t val);
	}__attribute__((packed))SYST_CVR_t;

	typedef struct SYST_CALIB {
	private:
		uint32_t tenms    :24;
		uint32_t reserved :6;
		uint32_t skew     :1;
		uint32_t no_ref   :1;
	}__attribute__((packed))SYST_CALIB_t;

	typedef struct systick {
		SYST_CSR_t control_status_reg;
		SYST_RVR_t reload_reg;
		SYST_CVR_t current_val;
		SYST_CALIB cal_val;
	}__attribute__((packed))systick_t;
}


#endif /* SYSTICK_H_ */
