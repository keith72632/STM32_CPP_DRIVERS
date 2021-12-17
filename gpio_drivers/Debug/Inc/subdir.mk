################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Inc/gpio.cpp \
../Inc/rcc.cpp 

OBJS += \
./Inc/gpio.o \
./Inc/rcc.o 

CPP_DEPS += \
./Inc/gpio.d \
./Inc/rcc.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/%.o: ../Inc/%.cpp Inc/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Inc

clean-Inc:
	-$(RM) ./Inc/gpio.d ./Inc/gpio.o ./Inc/rcc.d ./Inc/rcc.o

.PHONY: clean-Inc

