################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/Tarea-3.c \
../source/semihost_hardfault.c \
../source/varidic.c 

OBJS += \
./source/Tarea-3.o \
./source/semihost_hardfault.o \
./source/varidic.o 

C_DEPS += \
./source/Tarea-3.d \
./source/semihost_hardfault.d \
./source/varidic.d 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -D__REDLIB__ -DPRINTF_FLOAT_ENABLE=0 -D__USE_CMSIS -DCR_INTEGER_PRINTF -DSDK_DEBUGCONSOLE=1 -D__MCUXPRESSO -DDEBUG -DFSL_RTOS_BM -DSDK_OS_BAREMETAL -DCPU_MK64FN1M0VLL12_cm4 -DCPU_MK64FN1M0VLL12 -I"C:\Users\manuel\Documents\Sistemas Embebidos 2\Tarea3\Tarea-3\board" -I"C:\Users\manuel\Documents\Sistemas Embebidos 2\Tarea3\Tarea-3\source" -I"C:\Users\manuel\Documents\Sistemas Embebidos 2\Tarea3\Tarea-3" -I"C:\Users\manuel\Documents\Sistemas Embebidos 2\Tarea3\Tarea-3\drivers" -I"C:\Users\manuel\Documents\Sistemas Embebidos 2\Tarea3\Tarea-3\CMSIS" -I"C:\Users\manuel\Documents\Sistemas Embebidos 2\Tarea3\Tarea-3\utilities" -I"C:\Users\manuel\Documents\Sistemas Embebidos 2\Tarea3\Tarea-3\startup" -O0 -fno-common -g3 -Wall -c -fmessage-length=0 -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


