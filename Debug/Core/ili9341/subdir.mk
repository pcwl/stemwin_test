################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/ili9341/bsp_lcd.c \
../Core/ili9341/ili9341.c 

OBJS += \
./Core/ili9341/bsp_lcd.o \
./Core/ili9341/ili9341.o 

C_DEPS += \
./Core/ili9341/bsp_lcd.d \
./Core/ili9341/ili9341.d 


# Each subdirectory must supply rules for building sources it contributes
Core/ili9341/bsp_lcd.o: ../Core/ili9341/bsp_lcd.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I"D:/test/Core/ili9341" -I"D:/test/STemWin544/Config" -I"D:/test/STemWin544/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/ili9341/bsp_lcd.d" -MT"$@"  -mfloat-abi=soft -mthumb -o "$@"
Core/ili9341/ili9341.o: ../Core/ili9341/ili9341.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I"D:/test/Core/ili9341" -I"D:/test/STemWin544/Config" -I"D:/test/STemWin544/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Core/ili9341/ili9341.d" -MT"$@"  -mfloat-abi=soft -mthumb -o "$@"

