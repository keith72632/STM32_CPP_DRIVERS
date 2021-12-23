################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/syscalls.c \
../Src/sysmem.c 

CPP_SRCS += \
../Src/faults.cpp \
../Src/handler.cpp \
../Src/main.cpp \
../Src/scb.cpp \
../Src/systick.cpp 

C_DEPS += \
./Src/syscalls.d \
./Src/sysmem.d 

OBJS += \
./Src/faults.o \
./Src/handler.o \
./Src/main.o \
./Src/scb.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/systick.o 

CPP_DEPS += \
./Src/faults.d \
./Src/handler.d \
./Src/main.d \
./Src/scb.d \
./Src/systick.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.cpp Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Src/%.o: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F407VGTx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/faults.d ./Src/faults.o ./Src/handler.d ./Src/handler.o ./Src/main.d ./Src/main.o ./Src/scb.d ./Src/scb.o ./Src/syscalls.d ./Src/syscalls.o ./Src/sysmem.d ./Src/sysmem.o ./Src/systick.d ./Src/systick.o

.PHONY: clean-Src

