################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Inc/faults.cpp \
../Inc/scb.cpp \
../Inc/systick.cpp 

OBJS += \
./Inc/faults.o \
./Inc/scb.o \
./Inc/systick.o 

CPP_DEPS += \
./Inc/faults.d \
./Inc/scb.d \
./Inc/systick.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/%.o: ../Inc/%.cpp Inc/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Inc

clean-Inc:
	-$(RM) ./Inc/faults.d ./Inc/faults.o ./Inc/scb.d ./Inc/scb.o ./Inc/systick.d ./Inc/systick.o

.PHONY: clean-Inc

