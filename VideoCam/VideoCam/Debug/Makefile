################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../Header \
../Source


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../Source/adc.c \
../Source/callback.c \
../Source/eeprom.c \
../Source/init.c \
../Source/isr.c \
../Source/scheduler.c \
../Source/segDisplay.c \
../Source/uart.c \
../Source/util.c \
../Source/virtualTimers.c \
../VideoCam.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
Source/adc.o \
Source/callback.o \
Source/eeprom.o \
Source/init.o \
Source/isr.o \
Source/scheduler.o \
Source/segDisplay.o \
Source/uart.o \
Source/util.o \
Source/virtualTimers.o \
VideoCam.o

OBJS_AS_ARGS +=  \
Source/adc.o \
Source/callback.o \
Source/eeprom.o \
Source/init.o \
Source/isr.o \
Source/scheduler.o \
Source/segDisplay.o \
Source/uart.o \
Source/util.o \
Source/virtualTimers.o \
VideoCam.o

C_DEPS +=  \
Source/adc.d \
Source/callback.d \
Source/eeprom.d \
Source/init.d \
Source/isr.d \
Source/scheduler.d \
Source/segDisplay.d \
Source/uart.d \
Source/util.d \
Source/virtualTimers.d \
VideoCam.d

C_DEPS_AS_ARGS +=  \
Source/adc.d \
Source/callback.d \
Source/eeprom.d \
Source/init.d \
Source/isr.d \
Source/scheduler.d \
Source/segDisplay.d \
Source/uart.d \
Source/util.d \
Source/virtualTimers.d \
VideoCam.d

OUTPUT_FILE_PATH +=VideoCam.elf

OUTPUT_FILE_PATH_AS_ARGS +=VideoCam.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler























Source/%.o: ../Source/%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)D:\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega328p -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.8.1
	$(QUOTE)D:\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega328p -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 4.8.1
	$(QUOTE)D:\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="VideoCam.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega328p  
	@echo Finished building target: $@
	"D:\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "VideoCam.elf" "VideoCam.hex"
	"D:\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "VideoCam.elf" "VideoCam.eep" || exit 0
	"D:\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "VideoCam.elf" > "VideoCam.lss"
	"D:\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "VideoCam.elf" "VideoCam.srec"
	"D:\Atmel Toolchain\AVR8 GCC\Native\3.4.1061\avr8-gnu-toolchain\bin\avr-size.exe" "VideoCam.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "VideoCam.elf" "VideoCam.a" "VideoCam.hex" "VideoCam.lss" "VideoCam.eep" "VideoCam.map" "VideoCam.srec" "VideoCam.usersignatures"
	