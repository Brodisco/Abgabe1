################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/aufgabe1.c \
../src/aufgabe2.c \
../src/aufgabe3.c \
../src/aufgabe4.c \
../src/aufgabe5.c \
../src/aufgabe6.c \
../src/aufgabe7.c \
../src/aufgabe8.c \
../src/main.c 

C_DEPS += \
./src/aufgabe1.d \
./src/aufgabe2.d \
./src/aufgabe3.d \
./src/aufgabe4.d \
./src/aufgabe5.d \
./src/aufgabe6.d \
./src/aufgabe7.d \
./src/aufgabe8.d \
./src/main.d 

OBJS += \
./src/aufgabe1.o \
./src/aufgabe2.o \
./src/aufgabe3.o \
./src/aufgabe4.o \
./src/aufgabe5.o \
./src/aufgabe6.o \
./src/aufgabe7.o \
./src/aufgabe8.o \
./src/main.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/aufgabe1.d ./src/aufgabe1.o ./src/aufgabe2.d ./src/aufgabe2.o ./src/aufgabe3.d ./src/aufgabe3.o ./src/aufgabe4.d ./src/aufgabe4.o ./src/aufgabe5.d ./src/aufgabe5.o ./src/aufgabe6.d ./src/aufgabe6.o ./src/aufgabe7.d ./src/aufgabe7.o ./src/aufgabe8.d ./src/aufgabe8.o ./src/main.d ./src/main.o

.PHONY: clean-src

