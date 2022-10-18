################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/clock.c \
../src/main.c \
../src/palindrom.c \
../src/picture.c \
../src/rectangle.c \
../src/squareSum.c \
../src/verifyCode.c 

OBJS += \
./src/clock.o \
./src/main.o \
./src/palindrom.o \
./src/picture.o \
./src/rectangle.o \
./src/squareSum.o \
./src/verifyCode.o 

C_DEPS += \
./src/clock.d \
./src/main.d \
./src/palindrom.d \
./src/picture.d \
./src/rectangle.d \
./src/squareSum.d \
./src/verifyCode.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


