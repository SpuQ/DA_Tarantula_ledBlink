################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
BlinkingLED.lss \

FLASH_IMAGE += \
BlinkingLED.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: BlinkingLED.elf secondary-outputs

# Tool invocations
BlinkingLED.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,BlinkingLED.map -mmcu=atmega128 -o "BlinkingLED.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

BlinkingLED.lss: BlinkingLED.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S BlinkingLED.elf  >"BlinkingLED.lss"
	@echo 'Finished building: $@'
	@echo ' '

BlinkingLED.hex: BlinkingLED.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex BlinkingLED.elf  "BlinkingLED.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: BlinkingLED.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega128 BlinkingLED.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(ASM_DEPS)$(FLASH_IMAGE)$(ELFS)$(LSS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS) BlinkingLED.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
