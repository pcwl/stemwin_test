################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STemWin544/Config/GUIConf.c \
../STemWin544/Config/GUIDRV_Template.c \
../STemWin544/Config/LCDConf_FlexColor_Template.c \
../STemWin544/Config/SIMConf.c 

OBJS += \
./STemWin544/Config/GUIConf.o \
./STemWin544/Config/GUIDRV_Template.o \
./STemWin544/Config/LCDConf_FlexColor_Template.o \
./STemWin544/Config/SIMConf.o 

C_DEPS += \
./STemWin544/Config/GUIConf.d \
./STemWin544/Config/GUIDRV_Template.d \
./STemWin544/Config/LCDConf_FlexColor_Template.d \
./STemWin544/Config/SIMConf.d 


# Each subdirectory must supply rules for building sources it contributes
STemWin544/Config/GUIConf.o: ../STemWin544/Config/GUIConf.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I"D:/test/Core/ili9341" -I"D:/test/STemWin544/Config" -I"D:/test/STemWin544/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STemWin544/Config/GUIConf.d" -MT"$@"  -mfloat-abi=soft -mthumb -o "$@"
STemWin544/Config/GUIDRV_Template.o: ../STemWin544/Config/GUIDRV_Template.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I"D:/test/Core/ili9341" -I"D:/test/STemWin544/Config" -I"D:/test/STemWin544/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STemWin544/Config/GUIDRV_Template.d" -MT"$@"  -mfloat-abi=soft -mthumb -o "$@"
STemWin544/Config/LCDConf_FlexColor_Template.o: ../STemWin544/Config/LCDConf_FlexColor_Template.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I"D:/test/Core/ili9341" -I"D:/test/STemWin544/Config" -I"D:/test/STemWin544/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STemWin544/Config/LCDConf_FlexColor_Template.d" -MT"$@"  -mfloat-abi=soft -mthumb -o "$@"
STemWin544/Config/SIMConf.o: ../STemWin544/Config/SIMConf.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xE -DUSE_HAL_DRIVER -DDEBUG -c -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I"D:/test/Core/ili9341" -I"D:/test/STemWin544/Config" -I"D:/test/STemWin544/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STemWin544/Config/SIMConf.d" -MT"$@"  -mfloat-abi=soft -mthumb -o "$@"

