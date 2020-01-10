################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include STemWin544/OS/subdir.mk
-include STemWin544/Config/subdir.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/ili9341/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
freertos-stemwin.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
freertos-stemwin.list \

OBJCOPY_BIN += \
freertos-stemwin.bin \


# All Target
all: freertos-stemwin.elf secondary-outputs

# Tool invocations
freertos-stemwin.elf: $(OBJS) $(USER_OBJS) D:\test\STM32F103VETX_FLASH.ld
	arm-none-eabi-gcc -o "freertos-stemwin.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"D:\test\STM32F103VETX_FLASH.ld" -Wl,-Map="freertos-stemwin.map" -Wl,--gc-sections -Wl,--verbose -static -L"D:\test\STemWin544\Lib"  -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

freertos-stemwin.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "freertos-stemwin.list"
	@echo 'Finished building: $@'
	@echo ' '

freertos-stemwin.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "freertos-stemwin.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
