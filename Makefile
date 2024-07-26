
CROSS_COMPILE= gcc
FILES= main.c user_led_interface.c
TARGET=BBB_User_LED_Controller

all: 
	@echo "compiling"
	@$(CROSS_COMPILE) $(FILES) -o $(TARGET)
	@echo "done"
clean:
	@echo "cleaning"
	@rm -f $(TARGET)