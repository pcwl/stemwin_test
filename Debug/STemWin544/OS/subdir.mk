################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STemWin544/OS/GUI_X.c 

OBJS += \
./STemWin544/OS/GUI_X.o 

C_DEPS += \
./STemWin544/OS/GUI_X.d 


# Each subdirectory must supply rules for building sources it contributes
STemWin544/OS/GUI_X.o: ../STemWin544/OS/GUI_X.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I"D:/test/Core/ili9341" -I"D:/test/STemWin544/Config" -I"D:/test/STemWin544/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STemWin544/OS/GUI_X.d" -MT"$@"  -mfloat-abi=soft -mthumb -o "$@"

