/*
 * scb.cpp
 *
 *  Created on: Dec 20, 2021
 *      Author: khorton
 */

#include <scb.h>
namespace SCB {
	void SHCRS_t::mem_fault_enable()
	{
		this->mem_fault_ena = 0x01;
	}

	void SHCRS_t::bus_fault_enable()
	{
		this->bus_fault_ena = 0x01;
	}

	void SHCRS_t::usg_fault_enable()
	{
		this->usage_fault_ena = 0x01;
	}

	void SHCRS_t::all_faults_enable()
	{
		this->mem_fault_enable();
		this->bus_fault_enable();
		this->usg_fault_enable();
	}
}
