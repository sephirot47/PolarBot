################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../main.cpp \
../polar.cpp \
../stepper.cpp 

LINK_OBJ += \
./main.cpp.o \
./polar.cpp.o \
./stepper.cpp.o 

CPP_DEPS += \
./main.cpp.d \
./polar.cpp.d \
./stepper.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
main.cpp.o: ../main.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/usr/lib/eclipse//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/usr/lib/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.13/cores/arduino" -I"/home/jfons/eclipse-workspace/PolarBot/lib/AccelStepper/include" -I"/usr/lib/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.13/variants/standard" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

polar.cpp.o: ../polar.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/usr/lib/eclipse//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/usr/lib/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.13/cores/arduino" -I"/home/jfons/eclipse-workspace/PolarBot/lib/AccelStepper/include" -I"/usr/lib/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.13/variants/standard" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

stepper.cpp.o: ../stepper.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/usr/lib/eclipse//arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR   -I"/usr/lib/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.13/cores/arduino" -I"/home/jfons/eclipse-workspace/PolarBot/lib/AccelStepper/include" -I"/usr/lib/eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.6.13/variants/standard" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


